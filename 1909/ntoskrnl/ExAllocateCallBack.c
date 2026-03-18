/*
 * XREFs of ExAllocateCallBack @ 0x140759178
 * Callers:
 *     KeRegisterBoundCallback @ 0x1402A58E0 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140758C00 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140758CD0 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x140758DB0 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140758E40 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140759080 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

KSPIN_LOCK *__fastcall ExAllocateCallBack(KSPIN_LOCK a1, KSPIN_LOCK a2)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v5; // rbx

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62726243u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = a1;
    PoolWithTag[2] = a2;
    ExInitializePushLock(PoolWithTag);
  }
  return v5;
}
