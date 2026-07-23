/*
 * XREFs of isspace @ 0x1401960E0
 * Callers:
 *     CmpGetToken @ 0x1409CFE3C (CmpGetToken.c)
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 8;
}
