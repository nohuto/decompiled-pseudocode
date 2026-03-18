/*
 * XREFs of CmRmIsKCBVisible @ 0x1406BE060
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x140663620 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmEqualTrans @ 0x140635A74 (CmEqualTrans.c)
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
