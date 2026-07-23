/*
 * XREFs of CmpRebuildKcbCache @ 0x1405A9F78
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1405AA000 (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     CmpSyncKcbCacheForHive @ 0x1407F4BA0 (CmpSyncKcbCacheForHive.c)
 *     CmpCommitDiscardReplacePost @ 0x1407FAC60 (CmpCommitDiscardReplacePost.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AD984 (CmpRebuildKcbCacheFromNode.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v7 = 0;
  v2 = *(_DWORD *)(a1 + 4);
  v6 = -1;
  if ( (v2 & 0x10) != 0 || (*(_DWORD *)(a1 + 176) & 0x400000) != 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v4 != -1 )
    {
      if ( (*(__int64 (__fastcall **)(__int64, __int64, int *))(v3 + 8))(v3, v4, &v6) )
      {
        ++*(_QWORD *)(a1 + 296);
        CmpRebuildKcbCacheFromNode(a1);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v6);
        return 1;
      }
    }
  }
  return 0;
}
