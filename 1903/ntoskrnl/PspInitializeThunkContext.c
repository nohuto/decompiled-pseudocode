/*
 * XREFs of PspInitializeThunkContext @ 0x1405E79CC
 * Callers:
 *     PspUserThreadStartup @ 0x1405E6CA0 (PspUserThreadStartup.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     PspGetBaseTrapFrame @ 0x14001B3F0 (PspGetBaseTrapFrame.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x1405E7480 (PspCreateUserContext.c)
 *     RtlCopyContext @ 0x1405E7C38 (RtlCopyContext.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     PspCallThreadNotifyRoutines @ 0x1405EB7B0 (PspCallThreadNotifyRoutines.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v1; // r15d
  int ExtendedContextLength; // ebx
  SIZE_T v3; // r14
  unsigned __int64 v4; // rax
  void *v5; // rsp
  __int64 v6; // rdx
  int v7; // r9d
  char *v8; // r13
  void *InstrumentationCallback; // rdx
  __int64 v10; // rcx
  int result; // eax
  __int64 v12; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v14; // r8
  int v15; // [rsp+30h] [rbp+0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp+4h]
  struct _EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp+20h] BYREF
  _QWORD v18[154]; // [rsp+F0h] [rbp+C0h] BYREF

  memset(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
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
    memset(&v15, 0, Size[0]);
    ExtendedContextLength = RtlInitializeExtendedContext((__int64)&v15, v1);
    if ( ExtendedContextLength >= 0 )
    {
      memset(v18, 0, sizeof(v18));
      --CurrentThread->SpecialApcDisable;
      LOBYTE(v6) = 1;
      PspCallThreadNotifyRoutines(CurrentThread, v6);
      LOBYTE(v7) = 1;
      ExtendedContextLength = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)&v15, 0, v7, 0);
      v15 = ExtendedContextLength;
      if ( ExtendedContextLength >= 0 )
      {
        v8 = (char *)((ExceptionRecord.ExceptionInformation[11] - v3) & 0xFFFFFFFFFFFFFFF0uLL);
        v18[19] = v8 - 40;
        PspCreateUserContext((__int64)v18, 0, PspLoaderInitRoutine, (__int64)v8, *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v18[25] = v18[31];
          v18[31] = InstrumentationCallback;
        }
        v10 = (__int64)v8;
        if ( v3 - 1 > 0xFFE )
        {
          ProbeForWrite(v8, v3, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v8 >= 0x7FFFFFFF0000LL )
            v10 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v10 = *(_BYTE *)v10;
          *(_BYTE *)(v10 + v3 - 1) = *(_BYTE *)(v10 + v3 - 1);
        }
        ExtendedContextLength = RtlInitializeExtendedContext((__int64)v8, v1);
        v15 = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext(v8, v1, &v15);
          v15 = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
          {
            ExtendedContextLength = PsGetHostSilo();
            v15 = ExtendedContextLength;
          }
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, (__int64)v18, 0, 1, 0);
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
    BaseTrapFrame = PspGetBaseTrapFrame(v12);
    return KiDispatchException(&ExceptionRecord, BaseTrapFrame - 320, v14, 1u, 0);
  }
  return result;
}
