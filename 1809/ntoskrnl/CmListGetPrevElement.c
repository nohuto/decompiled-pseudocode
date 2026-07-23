/*
 * XREFs of CmListGetPrevElement @ 0x1406C188C
 * Callers:
 *     CmpGetEffectiveCellType @ 0x1405822FC (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpQueryKeyDataFromNode @ 0x1405D4570 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x1405D89A0 (CmpQueryKeyDataFromCache.c)
 *     CmGetKCBCacheSecurity @ 0x1405D9A10 (CmGetKCBCacheSecurity.c)
 *     CmGetKeyLastWriteTime @ 0x1406BAA24 (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x140765030 (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8

  v2 = *a2;
  if ( !*a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *a2 = v2;
  }
  if ( a1 == v2 )
    return 0LL;
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 - 32;
}
