/*
 * XREFs of MiUnlockFaultPageTable @ 0x14001BC3C
 * Callers:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 */

__int64 __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = a1[2];
  v2 = *a1;
  if ( v1 )
  {
    if ( *((_WORD *)a1 + 5) )
    {
      MiEmptyDeferredWorkingSetEntries();
      v1 = a1[2];
    }
    result = MiUnlockPageTableInternal(v2, v1);
    *((_BYTE *)a1 + 13) |= 2u;
    a1[2] = 0LL;
  }
  return result;
}
