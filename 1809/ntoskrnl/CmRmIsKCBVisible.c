/*
 * XREFs of CmRmIsKCBVisible @ 0x140699930
 * Callers:
 *     CmRmIsKcbStackVisible @ 0x1405812B8 (CmRmIsKcbStackVisible.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D30B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D8920 (CmpGetSecurityCacheEntryForKcbStack.c)
 * Callees:
 *     CmEqualTrans @ 0x1405A94E8 (CmEqualTrans.c)
 */

char __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  char result; // al

  v3 = *(_QWORD *)(a1 + 232);
  if ( !v3 )
    return 1;
  result = CmEqualTrans(a2, v3);
  if ( result )
    return 1;
  return result;
}
