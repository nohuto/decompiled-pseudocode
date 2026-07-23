/*
 * XREFs of CcInsertIntoDirtySharedCacheMapList @ 0x14007EF40
 * Callers:
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CcInsertIntoDirtySharedCacheMapList(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // r10
  _QWORD *v7; // r9
  _QWORD *result; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx

  v1 = *(_QWORD *)(a1 + 528);
  v2 = v1 + 72;
  v3 = v1 + 96;
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v4 = (_QWORD *)(a1 + 120);
    v5 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(v5 + 8) != a1 + 120
      || (v6 = *(_QWORD **)(a1 + 128), (_QWORD *)*v6 != v4)
      || (*v6 = v5, *(_QWORD *)(v5 + 8) = v6, v7 = *(_QWORD **)(v3 + 8), *v7 != v3) )
    {
LABEL_10:
      __fastfail(3u);
    }
    *v4 = v3;
    *(_QWORD *)(a1 + 128) = v7;
    *v7 = v4;
    *(_QWORD *)(v3 + 8) = v4;
  }
  result = (_QWORD *)(a1 + 136);
  v9 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(v9 + 8) != a1 + 136 )
    goto LABEL_10;
  v10 = *(_QWORD **)(a1 + 144);
  if ( (_QWORD *)*v10 != result )
    goto LABEL_10;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  v11 = *(_QWORD **)(v2 + 8);
  if ( *v11 != v2 )
    goto LABEL_10;
  *result = v2;
  result[1] = v11;
  *v11 = result;
  *(_QWORD *)(v2 + 8) = result;
  return result;
}
