/*
 * XREFs of sub_18002E4BC @ 0x18002E4BC
 * Callers:
 *     sub_1800316AC @ 0x1800316AC (sub_1800316AC.c)
 * Callees:
 *     sub_18002D39C @ 0x18002D39C (sub_18002D39C.c)
 *     sub_18002E674 @ 0x18002E674 (sub_18002E674.c)
 */

__int64 __fastcall sub_18002E4BC(__int64 a1, unsigned int *a2)
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
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v4 = sub_18002D39C(a1, (__int64)"{");
  v5 = sub_18002D39C(v4, (__int64)"Width");
  v6 = sub_18002D39C(v5, (__int64)&unk_18014D618);
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_18002D39C(v7, (__int64)",Height");
  v9 = sub_18002D39C(v8, (__int64)&unk_18014D618);
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_18002D39C(v10, (__int64)",ArraySize");
  v12 = sub_18002D39C(v11, (__int64)&unk_18014D618);
  v13 = std::ostream::operator<<(v12, a2[3]);
  v14 = sub_18002D39C(v13, (__int64)",Format");
  v15 = sub_18002D39C(v14, (__int64)&unk_18014D618);
  v16 = std::ostream::operator<<(v15, a2[4]);
  v17 = sub_18002D39C(v16, (__int64)",SampleDesc");
  v18 = sub_18002D39C(v17, (__int64)&unk_18014D618);
  v19 = sub_18002E674(v18, a2 + 5);
  v20 = sub_18002D39C(v19, (__int64)",Usage");
  v21 = sub_18002D39C(v20, (__int64)&unk_18014D618);
  v22 = std::ostream::operator<<(v21, a2[7]);
  v23 = sub_18002D39C(v22, (__int64)",BindFlags");
  v24 = sub_18002D39C(v23, (__int64)&unk_18014D618);
  v25 = std::ostream::operator<<(v24, a2[8]);
  v26 = sub_18002D39C(v25, (__int64)",CPUAccessFlags");
  v27 = sub_18002D39C(v26, (__int64)&unk_18014D618);
  v28 = std::ostream::operator<<(v27, a2[9]);
  v29 = sub_18002D39C(v28, (__int64)",MiscFlags");
  v30 = sub_18002D39C(v29, (__int64)&unk_18014D618);
  v31 = std::ostream::operator<<(v30, a2[10]);
  v32 = sub_18002D39C(v31, (__int64)&unk_18014D614);
  sub_18002D39C(v32, (__int64)&unk_18014D610);
  return a1;
}
