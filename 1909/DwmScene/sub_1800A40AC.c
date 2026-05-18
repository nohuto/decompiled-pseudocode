/*
 * XREFs of sub_1800A40AC @ 0x1800A40AC
 * Callers:
 *     sub_180079170 @ 0x180079170 (sub_180079170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A40AC(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 1LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  if ( v3 == 1 )
    return 3LL;
  return 0LL;
}
