/*
 * XREFs of sub_18002E504 @ 0x18002E504
 * Callers:
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 * Callees:
 *     sub_18002D4AC @ 0x18002D4AC (sub_18002D4AC.c)
 */

__int64 __fastcall sub_18002E504(__int64 a1, __int64 a2)
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

  v4 = sub_18002D4AC(a1, (__int64)"{");
  v5 = sub_18002D4AC(v4, (__int64)"pSysMem");
  v6 = sub_18002D4AC(v5, (__int64)&unk_18014E618);
  v7 = std::ostream::operator<<(v6, *(_QWORD *)a2);
  v8 = sub_18002D4AC(v7, (__int64)",SysMemPitch");
  v9 = sub_18002D4AC(v8, (__int64)&unk_18014E618);
  v10 = std::ostream::operator<<(v9, *(unsigned int *)(a2 + 8));
  v11 = sub_18002D4AC(v10, (__int64)",SysMemSlicePitch");
  v12 = sub_18002D4AC(v11, (__int64)&unk_18014E618);
  v13 = std::ostream::operator<<(v12, *(unsigned int *)(a2 + 12));
  v14 = sub_18002D4AC(v13, (__int64)&unk_18014E614);
  sub_18002D4AC(v14, (__int64)&unk_18014E610);
  return a1;
}
