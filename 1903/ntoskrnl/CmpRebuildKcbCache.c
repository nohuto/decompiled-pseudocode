/*
 * XREFs of CmpRebuildKcbCache @ 0x1406315E0
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmpSyncKcbCacheForHive @ 0x14082D420 (CmpSyncKcbCacheForHive.c)
 *     CmpCommitDiscardReplacePost @ 0x140832F20 (CmpCommitDiscardReplacePost.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140630F78 (CmpRebuildKcbCacheFromNode.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v10 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v9 = -1;
  if ( (v3 & 0x10) != 0 || (*(_DWORD *)(a1 + 184) & 0x400000) != 0 )
    return 1;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v6 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v6 != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(v5 + 8))(v5, v6, &v9);
      if ( v7 )
      {
        ++*(_QWORD *)(a1 + 304);
        CmpRebuildKcbCacheFromNode(a1, v7, a2, 1);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v9);
        return 1;
      }
    }
  }
  return 0;
}
