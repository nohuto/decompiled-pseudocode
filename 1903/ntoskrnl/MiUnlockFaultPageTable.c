/*
 * XREFs of MiUnlockFaultPageTable @ 0x140007064
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012A24C (MiEmptyDeferredWorkingSetEntries.c)
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
