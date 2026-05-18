/*
 * XREFs of sub_18010A0E0 @ 0x18010A0E0
 * Callers:
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 * Callees:
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800E1248 @ 0x1800E1248 (sub_1800E1248.c)
 *     sub_1801094DC @ 0x1801094DC (sub_1801094DC.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_18010A0E0(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_1800636EC(a1 + 8);
  sub_1801094DC(a1);
  v3 = 0;
  if ( !sub_1800E1248() )
    v3 = !sub_1800E1248();
  sub_180063778(v2);
  return v3;
}
