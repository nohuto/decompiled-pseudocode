/*
 * XREFs of sub_18002E674 @ 0x18002E674
 * Callers:
 *     sub_18002E4BC @ 0x18002E4BC (sub_18002E4BC.c)
 * Callees:
 *     sub_18002D39C @ 0x18002D39C (sub_18002D39C.c)
 */

__int64 __fastcall sub_18002E674(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = sub_18002D39C(a1, (__int64)"{");
  v5 = sub_18002D39C(v4, (__int64)"Count");
  v6 = sub_18002D39C(v5, (__int64)&unk_18014D618);
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_18002D39C(v7, (__int64)",Quality");
  v9 = sub_18002D39C(v8, (__int64)&unk_18014D618);
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_18002D39C(v10, (__int64)&unk_18014D614);
  sub_18002D39C(v11, (__int64)&unk_18014D610);
  return a1;
}
