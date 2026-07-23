/*
 * XREFs of PspSetJobBackgroundCountCallback @ 0x1406CF000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobBackgroundCountCallback(__int64 a1, _BYTE *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 860);
  v3 = v2 - 1;
  v4 = v2 + 1;
  if ( !*a2 )
    v4 = v3;
  *(_DWORD *)(a1 + 860) = v4;
  return 0LL;
}
