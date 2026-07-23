/*
 * XREFs of PspSetProcessAffinityUpdateMode @ 0x140706788
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspLockUnlockProcessExclusive @ 0x14012F390 (PspLockUnlockProcessExclusive.c)
 *     PspUpdateSingleProcessAffinity @ 0x14088A4AC (PspUpdateSingleProcessAffinity.c)
 */

__int64 __fastcall PspSetProcessAffinityUpdateMode(__int64 a1, int *a2)
{
  _KPROCESS *Process; // rdi
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  signed __int32 DirectoryTableBase; // edx
  signed __int32 v8; // eax
  bool v9; // zf

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *a2;
  v5 = (*a2 & 2) << 17;
  v6 = v5 | 0x80000;
  if ( (v4 & 1) == 0 )
    v6 = v5;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v8 = DirectoryTableBase;
  do
  {
    if ( (v8 & 0xC0000) == v6 )
      break;
    if ( (DirectoryTableBase & 0x40000) != 0 )
      return 3221225473LL;
    v8 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
           v6 | DirectoryTableBase & 0xFFF3FFFF,
           DirectoryTableBase);
    v9 = DirectoryTableBase == v8;
    DirectoryTableBase = v8;
  }
  while ( !v9 );
  if ( v6 == 0x40000 )
  {
    PspLockUnlockProcessExclusive((__int64)Process, a1);
  }
  else if ( (v6 & 0x80000) != 0 && KeDynamicPartitioningSupported )
  {
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockSharedEx((ULONG_PTR)&PspAffinityUpdateLock, 0LL);
    if ( !(unsigned int)KeIsEmptyAffinityEx(PspLastUpdateAffinityMask) )
      PspUpdateSingleProcessAffinity(a1, Process, PspLastUpdateAffinityMask);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspAffinityUpdateLock);
    KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
    KiLeaveCriticalRegionUnsafe(a1);
  }
  return 0LL;
}
