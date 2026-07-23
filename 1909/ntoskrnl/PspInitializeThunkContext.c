/*
 * XREFs of PspInitializeThunkContext @ 0x1405E819C
 * Callers:
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     KiDispatchException @ 0x1400161A0 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     PspGetBaseTrapFrame @ 0x14001B7E0 (PspGetBaseTrapFrame.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x1405E7C50 (PspCreateUserContext.c)
 *     RtlCopyContext @ 0x1405E8408 (RtlCopyContext.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     PspCallThreadNotifyRoutines @ 0x1405EBF80 (PspCallThreadNotifyRoutines.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG v1; // r15d
  int ExtendedContextLength; // ebx
  SIZE_T v3; // r14
  unsigned __int64 v4; // rax
  void *v5; // rsp
  __int64 v6; // rdx
  int v7; // r9d
  CONTEXT *v8; // r13
  void *InstrumentationCallback; // rdx
  __int64 v10; // rcx
  int result; // eax
  __int64 v12; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v14; // r8
  _BYTE Context[1424]; // [rsp+30h] [rbp+0h] BYREF

  memset(&Context[60], 0, 0x7CuLL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&Context[8] = CurrentThread;
  v1 = ((unsigned int)CurrentThread->MiscFlags >> 14) & 0x40 | 0x10001B;
  ExtendedContextLength = RtlGetExtendedContextLength(v1, (PULONG)&Context[4]);
  if ( ExtendedContextLength >= 0 )
  {
    v3 = *(unsigned int *)&Context[4];
    v4 = *(unsigned int *)&Context[4] + 15LL;
    if ( v4 <= *(unsigned int *)&Context[4] )
      v4 = 0xFFFFFFFFFFFFFF0LL;
    v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
    memset(Context, 0, *(unsigned int *)&Context[4]);
    ExtendedContextLength = RtlInitializeExtendedContext((PCONTEXT)Context, v1, (PCONTEXT_EX *)&Context[16]);
    if ( ExtendedContextLength >= 0 )
    {
      memset(&Context[192], 0, 0x4D0uLL);
      --CurrentThread->SpecialApcDisable;
      LOBYTE(v6) = 1;
      PspCallThreadNotifyRoutines(CurrentThread, v6);
      LOBYTE(v7) = 1;
      ExtendedContextLength = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)Context, 0, v7, 0);
      *(_DWORD *)Context = ExtendedContextLength;
      if ( ExtendedContextLength >= 0 )
      {
        v8 = (CONTEXT *)((*(_QWORD *)&Context[152] - v3) & 0xFFFFFFFFFFFFFFF0uLL);
        *(_QWORD *)&Context[344] = (char *)v8 - 40;
        PspCreateUserContext(
          (__int64)&Context[192],
          0,
          PspLoaderInitRoutine,
          (__int64)v8,
          *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          *(_QWORD *)&Context[392] = *(_QWORD *)&Context[440];
          *(_QWORD *)&Context[440] = InstrumentationCallback;
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
        ExtendedContextLength = RtlInitializeExtendedContext(v8, v1, (PCONTEXT_EX *)&Context[24]);
        *(_DWORD *)Context = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext(v8, v1, (PCONTEXT)Context);
          *(_DWORD *)Context = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
          {
            ExtendedContextLength = PsGetHostSilo();
            *(_DWORD *)Context = ExtendedContextLength;
          }
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, (__int64)&Context[192], 0, 1, 0);
      }
    }
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( ExtendedContextLength < 0 )
  {
    *(_QWORD *)&Context[48] = PspLoaderInitRoutine;
    *(_QWORD *)&Context[32] = (unsigned int)ExtendedContextLength;
    *(_DWORD *)&Context[56] = 0;
    *(_QWORD *)&Context[40] = 0LL;
    PspGetBaseTrapFrame((__int64)CurrentThread);
    BaseTrapFrame = PspGetBaseTrapFrame(v12);
    return KiDispatchException((PEXCEPTION_RECORD)&Context[32], BaseTrapFrame - 320, v14, 1u, 0);
  }
  return result;
}
