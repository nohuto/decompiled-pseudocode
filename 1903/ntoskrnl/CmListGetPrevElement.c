/*
 * XREFs of CmListGetPrevElement @ 0x140631BC8
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x140631B4C (CmGetKCBCacheSecurity.c)
 *     CmpQueryKeyDataFromNode @ 0x140651FC0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x140656CB0 (CmpQueryKeyDataFromCache.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmGetKeyLastWriteTime @ 0x1406DAFC0 (CmGetKeyLastWriteTime.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140719204 (CmpUndoDeleteKeyForTrans.c)
 *     CmGetKeyFlags @ 0x14078A824 (CmGetKeyFlags.c)
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
