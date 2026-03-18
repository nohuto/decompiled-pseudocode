/*
 * XREFs of CmpLockTwoKcbsShared @ 0x14066359C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140714FD4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082AEF4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406E76AC (CmpGetCorrectKcbLockOrder.c)
 */

__int64 __fastcall CmpLockTwoKcbsShared(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  ULONG_PTR v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v7, &v8);
        v6 = v7;
        ExAcquirePushLockSharedEx(v7 + 48, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 56));
        v3 = v8;
      }
      v5 = v3 + 48;
    }
    else
    {
      v5 = a1 + 48;
    }
    result = ExAcquirePushLockSharedEx(v5, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 56));
  }
  else if ( a2 )
  {
    result = ExAcquirePushLockSharedEx(a2 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 56));
  }
  return result;
}
