/*
 * XREFs of sub_1801016D0 @ 0x1801016D0
 * Callers:
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800CA73C @ 0x1800CA73C (sub_1800CA73C.c)
 * Callees:
 *     sub_180101060 @ 0x180101060 (sub_180101060.c)
 */

char __fastcall sub_1801016D0(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( v2 != a2 )
    LOBYTE(v2) = sub_180101060(a1);
  return v2;
}
