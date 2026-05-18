/*
 * XREFs of sub_18002E784 @ 0x18002E784
 * Callers:
 *     sub_18002E5CC @ 0x18002E5CC (sub_18002E5CC.c)
 * Callees:
 *     sub_18002D4AC @ 0x18002D4AC (sub_18002D4AC.c)
 */

__int64 __fastcall sub_18002E784(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = sub_18002D4AC(a1, (__int64)"{");
  v5 = sub_18002D4AC(v4, (__int64)"Count");
  v6 = sub_18002D4AC(v5, (__int64)&unk_18014E618);
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_18002D4AC(v7, (__int64)",Quality");
  v9 = sub_18002D4AC(v8, (__int64)&unk_18014E618);
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_18002D4AC(v10, (__int64)&unk_18014E614);
  sub_18002D4AC(v11, (__int64)&unk_18014E610);
  return a1;
}
