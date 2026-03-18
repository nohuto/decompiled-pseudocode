/*
 * XREFs of ExAllocateCallBack @ 0x14076A948
 * Callers:
 *     KeRegisterBoundCallback @ 0x1402A5B80 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x14076A3D0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x14076A4A0 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14076A580 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x14076A610 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x14076A850 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
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
