/*
 * XREFs of MiUnlockFaultPageTable @ 0x1400070F4
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012AC6C (MiEmptyDeferredWorkingSetEntries.c)
 */

__int64 __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( a1[2] )
  {
    if ( *((_WORD *)a1 + 5) )
      MiEmptyDeferredWorkingSetEntries();
    result = MiUnlockPageTableInternal(v1);
    *((_BYTE *)a1 + 13) |= 2u;
    a1[2] = 0LL;
  }
  return result;
}
