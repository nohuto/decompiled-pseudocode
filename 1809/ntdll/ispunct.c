/*
 * XREFs of ispunct @ 0x180090730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl ispunct(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18015F150[v1] & 0x10;
}
