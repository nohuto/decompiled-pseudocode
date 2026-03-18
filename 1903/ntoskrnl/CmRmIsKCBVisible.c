/*
 * XREFs of CmRmIsKCBVisible @ 0x1406BE5B0
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x140650460 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 */

char __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  char result; // al

  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3 )
    return 1;
  result = CmEqualTrans(a2, v3);
  if ( result )
    return 1;
  return result;
}
