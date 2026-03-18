/*
 * XREFs of SeTokenType @ 0x1405E4A30
 * Callers:
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 * Callees:
 *     <none>
 */

TOKEN_TYPE __stdcall SeTokenType(PACCESS_TOKEN Token)
{
  return *((_DWORD *)Token + 48);
}
