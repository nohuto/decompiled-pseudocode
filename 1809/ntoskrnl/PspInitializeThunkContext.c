/*
 * XREFs of PspInitializeThunkContext @ 0x1406207DC
 * Callers:
 *     PspUserThreadStartup @ 0x1405F6E40 (PspUserThreadStartup.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     PsGetHostSilo @ 0x140091C70 (PsGetHostSilo.c)
 *     PspGetBaseTrapFrame @ 0x1400A0F18 (PspGetBaseTrapFrame.c)
 *     RtlGetExtendedContextLength @ 0x1400A1D44 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1D9C (RtlInitializeExtendedContext.c)
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5DA0 (_alloca_probe.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PspCallThreadNotifyRoutines @ 0x1405F4F90 (PspCallThreadNotifyRoutines.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140620E78 (RtlCopyContext.c)
 *     PspCreateUserContext @ 0x140621CFC (PspCreateUserContext.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v1; // esi
  int ExtendedContextLength; // ebx
  SIZE_T v3; // r15
  unsigned __int64 v4; // rax
  void *v5; // rsp
  int v6; // r9d
  char *v7; // r13
  void *InstrumentationCallback; // rdx
  __int64 v9; // rcx
  int result; // eax
  __int64 v11; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v13; // r8
  int v14; // [rsp+30h] [rbp+0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp+4h]
  struct _EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp+20h] BYREF
  _QWORD v17[154]; // [rsp+F0h] [rbp+C0h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&Size[1] = CurrentThread;
  v1 = ((unsigned int)CurrentThread->MiscFlags >> 14) & 0x40 | 0x10001B;
  ExtendedContextLength = RtlGetExtendedContextLength(v1);
  if ( ExtendedContextLength >= 0 )
  {
    v3 = Size[0];
    v4 = Size[0] + 15LL;
    if ( v4 <= Size[0] )
      v4 = 0xFFFFFFFFFFFFFF0LL;
    v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
    memset(&v14, 0, Size[0]);
    ExtendedContextLength = RtlInitializeExtendedContext((__int64)&v14, v1);
    if ( ExtendedContextLength >= 0 )
    {
      memset(v17, 0, sizeof(v17));
      --CurrentThread->SpecialApcDisable;
      PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
      LOBYTE(v6) = 1;
      ExtendedContextLength = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)&v14, 0, v6, 0);
      v14 = ExtendedContextLength;
      if ( ExtendedContextLength >= 0 )
      {
        v7 = (char *)((ExceptionRecord.ExceptionInformation[11] - v3) & 0xFFFFFFFFFFFFFFF0uLL);
        v17[19] = v7 - 40;
        PspCreateUserContext(
          (unsigned int)v17,
          0,
          PspLoaderInitRoutine,
          (LODWORD(ExceptionRecord.ExceptionInformation[11]) - v3) & 0xFFFFFFF0,
          *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v17[25] = v17[31];
          v17[31] = InstrumentationCallback;
        }
        v9 = (__int64)v7;
        if ( v3 - 1 > 0xFFE )
        {
          ProbeForWrite(v7, v3, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v7 >= 0x7FFFFFFF0000LL )
            v9 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v9 = *(_BYTE *)v9;
          *(_BYTE *)(v9 + v3 - 1) = *(_BYTE *)(v9 + v3 - 1);
        }
        ExtendedContextLength = RtlInitializeExtendedContext((__int64)v7, v1);
        v14 = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext(v7, v1, &v14);
          v14 = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
          {
            ExtendedContextLength = PsGetHostSilo();
            v14 = ExtendedContextLength;
          }
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, 0);
      }
    }
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( ExtendedContextLength < 0 )
  {
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionAddress = (void *)PspLoaderInitRoutine;
    ExceptionRecord.ExceptionCode = ExtendedContextLength;
    ExceptionRecord.NumberParameters = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    PspGetBaseTrapFrame((__int64)CurrentThread);
    BaseTrapFrame = PspGetBaseTrapFrame(v11);
    return KiDispatchException(&ExceptionRecord, BaseTrapFrame - 320, v13, 1u, 0);
  }
  return result;
}
