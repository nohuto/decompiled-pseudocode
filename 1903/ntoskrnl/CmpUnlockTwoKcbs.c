/*
 * XREFs of CmpUnlockTwoKcbs @ 0x140650340
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407131F4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082B7F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x14069B720 (CmpFreeKeyControlBlock.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406E651C (CmpGetCorrectKcbLockOrder.c)
 */

char __fastcall CmpUnlockTwoKcbs(ULONG_PTR a1, ULONG_PTR a2)
{
  bool v3; // di
  char result; // al
  ULONG_PTR v5; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v6; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    if ( a2 && a1 != a2 )
    {
      CmpGetCorrectKcbLockOrder(a1, a2, &v6, &v5);
      CmpUnlockKcb(v5);
      a1 = v6;
    }
    return CmpUnlockKcb(a1);
  }
  else if ( a2 )
  {
    v3 = (*(_DWORD *)(a2 + 8) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(a2 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(a2 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 56));
    result = ExReleasePushLockEx(a2 + 48, 0LL);
    if ( v3 && (*(_DWORD *)(a2 + 8) & 0x80000) != 0 )
      return CmpFreeKeyControlBlock(a2);
  }
  return result;
}
