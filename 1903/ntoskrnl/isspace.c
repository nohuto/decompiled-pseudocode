/*
 * XREFs of isspace @ 0x1401A0770
 * Callers:
 *     CmpGetToken @ 0x140A0EC54 (CmpGetToken.c)
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
