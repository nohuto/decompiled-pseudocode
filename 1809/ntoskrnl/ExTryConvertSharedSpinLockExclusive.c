/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x1401192D0
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     ExpAddTagForBigPages @ 0x1400E7190 (ExpAddTagForBigPages.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14030B43C (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14031C5D8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  __int64 v3; // rdx
  volatile LONG v4; // ecx
  bool v6; // zf
  unsigned __int32 v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  v3 = *(unsigned int *)SpinLock;
  v4 = *SpinLock;
  v9 = 0;
  if ( (v4 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v3 & 0x40000000) == 0 )
      {
        v7 = _InterlockedCompareExchange(SpinLock, v3 | 0x40000000, v3);
        v6 = (_DWORD)v3 == v7;
        v3 = v7;
        if ( !v6 )
          continue;
      }
      KeYieldProcessorEx(&v9, v3, v1);
      v3 = *(unsigned int *)SpinLock;
    }
    while ( (v3 & 0xBFFFFFFF) != 0x80000001 );
  }
  return 1;
}
