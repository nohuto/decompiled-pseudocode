/*
 * XREFs of PsRemoveCreateThreadNotifyRoutine @ 0x14088C830
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140088AA0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140088AF0 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BB0 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x140088F00 (ExGetCallBackBlockContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x14018665C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      return -1073741702;
    }
  }
  if ( (PCREATE_THREAD_NOTIFY_ROUTINE)ExGetCallBackBlockRoutine((__int64)v4) != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, 0LL, (__int64)v5) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, v5);
    goto LABEL_6;
  }
  v7 = ExGetCallBackBlockContext((__int64)v5);
  v8 = &PspCreateThreadNotifyRoutineNonSystemCount;
  if ( !v7 )
    v8 = &PspCreateThreadNotifyRoutineCount;
  _InterlockedAdd(v8, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, v5);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  ExWaitForRundownProtectionRelease(v5);
  ExFreePoolWithTag(v5, 0);
  return 0;
}
