/*
 * XREFs of sub_18002E3F4 @ 0x18002E3F4
 * Callers:
 *     sub_1800317E4 @ 0x1800317E4 (sub_1800317E4.c)
 * Callees:
 *     sub_18002D39C @ 0x18002D39C (sub_18002D39C.c)
 */

__int64 __fastcall sub_18002E3F4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = sub_18002D39C(a1, (__int64)"{");
  v5 = sub_18002D39C(v4, (__int64)"pSysMem");
  v6 = sub_18002D39C(v5, (__int64)&unk_18014D618);
  v7 = std::ostream::operator<<(v6, *(_QWORD *)a2);
  v8 = sub_18002D39C(v7, (__int64)",SysMemPitch");
  v9 = sub_18002D39C(v8, (__int64)&unk_18014D618);
  v10 = std::ostream::operator<<(v9, *(unsigned int *)(a2 + 8));
  v11 = sub_18002D39C(v10, (__int64)",SysMemSlicePitch");
  v12 = sub_18002D39C(v11, (__int64)&unk_18014D618);
  v13 = std::ostream::operator<<(v12, *(unsigned int *)(a2 + 12));
  v14 = sub_18002D39C(v13, (__int64)&unk_18014D614);
  sub_18002D39C(v14, (__int64)&unk_18014D610);
  return a1;
}
