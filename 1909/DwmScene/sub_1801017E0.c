/*
 * XREFs of sub_1801017E0 @ 0x1801017E0
 * Callers:
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800CA84C @ 0x1800CA84C (sub_1800CA84C.c)
 * Callees:
 *     sub_180101170 @ 0x180101170 (sub_180101170.c)
 */

char __fastcall sub_1801017E0(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( v2 != a2 )
    LOBYTE(v2) = sub_180101170(a1);
  return v2;
}
