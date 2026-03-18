/*
 * XREFs of ExAllocateCallBack @ 0x140748578
 * Callers:
 *     KeRegisterBoundCallback @ 0x14028EFC0 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140748000 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407480D0 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1407481B0 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140748240 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140748480 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x14008A400 (ExInitializePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
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
