/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1406BC638
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1405D0194 (CmQueryMultipleValueKey.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1406F81DC (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F1544 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x1408022FC (CmSaveMergedKeys.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1405E3580 (CmpUnlockKcb.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406BC708 (CmpGetCorrectKcbLockOrder.c)
 */

__int64 __fastcall CmpUnlockTwoKcbs(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v4; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v4, &BugCheckParameter2);
        CmpUnlockKcb(BugCheckParameter2);
        a1 = v4;
      }
    }
  }
  else
  {
    if ( !a2 )
      return result;
    a1 = a2;
  }
  return CmpUnlockKcb(a1);
}
