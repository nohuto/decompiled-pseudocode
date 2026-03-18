/*
 * XREFs of PsSwapProcessWorkingSet @ 0x1408C673C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406F54B4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PspRequestProcessExecutionState @ 0x14069473C (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // edi
  signed __int64 *p_Lock; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  p_Lock = (signed __int64 *)&Process[1].Header.Lock;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
  v7 = Process[1].Affinity.Bitmap[16];
  if ( v7 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
    v5 = *(_DWORD *)(v7 + 864) != 0 ? 2 : 0;
    if ( *(_DWORD *)(v7 + 856) )
      v5 = 1;
  }
  v8 = v5 & 0xFFFFFFFD;
  v9 = v5 | 2;
  if ( !a2 )
    v9 = v8;
  PspRequestProcessExecutionState((__int64)Process, v9, 1);
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Lock);
  KeAbPostRelease((ULONG_PTR)p_Lock);
  v10 = PspChangeProcessExecutionState(Process);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
