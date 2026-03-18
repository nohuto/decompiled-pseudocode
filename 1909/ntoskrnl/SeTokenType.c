/*
 * XREFs of SeTokenType @ 0x1405E5200
 * Callers:
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 * Callees:
 *     <none>
 */

TOKEN_TYPE __stdcall SeTokenType(PACCESS_TOKEN Token)
{
  return *((_DWORD *)Token + 48);
}
