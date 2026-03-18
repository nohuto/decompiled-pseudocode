/*
 * XREFs of CmListGetPrevElement @ 0x140635A48
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x1406359CC (CmGetKCBCacheSecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpQueryKeyDataFromNode @ 0x1406650C0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x140669CD0 (CmpQueryKeyDataFromCache.c)
 *     CmGetKeyLastWriteTime @ 0x1406DB8EC (CmGetKeyLastWriteTime.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14071AFF4 (CmpUndoDeleteKeyForTrans.c)
 *     CmGetKeyFlags @ 0x14078CCC4 (CmGetKeyFlags.c)
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
