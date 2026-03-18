/*
 * XREFs of CmpUnlockTwoKcbs @ 0x140663500
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140714FD4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082AEF4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406E76AC (CmpGetCorrectKcbLockOrder.c)
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
