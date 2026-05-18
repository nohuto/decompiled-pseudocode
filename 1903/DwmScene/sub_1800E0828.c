/*
 * XREFs of sub_1800E0828 @ 0x1800E0828
 * Callers:
 *     sub_1800E0A30 @ 0x1800E0A30 (sub_1800E0A30.c)
 * Callees:
 *     sub_1800DEB2C @ 0x1800DEB2C (sub_1800DEB2C.c)
 *     sub_1800DEF1C @ 0x1800DEF1C (sub_1800DEF1C.c)
 *     sub_1800DF278 @ 0x1800DF278 (sub_1800DF278.c)
 *     sub_1800DF5D0 @ 0x1800DF5D0 (sub_1800DF5D0.c)
 *     sub_1800DFA50 @ 0x1800DFA50 (sub_1800DFA50.c)
 *     sub_1800DFC9C @ 0x1800DFC9C (sub_1800DFC9C.c)
 *     sub_1800DFF60 @ 0x1800DFF60 (sub_1800DFF60.c)
 *     sub_1800E0160 @ 0x1800E0160 (sub_1800E0160.c)
 *     sub_1800E03E8 @ 0x1800E03E8 (sub_1800E03E8.c)
 *     sub_1800E0578 @ 0x1800E0578 (sub_1800E0578.c)
 *     sub_1800E0A60 @ 0x1800E0A60 (sub_1800E0A60.c)
 */

__int64 __fastcall sub_1800E0828(_QWORD *a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  *a1 = &Spectre::Engine::CommandListState::`vftable';
  a1[8] = &Spectre::Engine::CommandListState::`vftable';
  a1[145] = &Spectre::Engine::CommandListState::`vftable';
  v1 = a1 + 579;
  a1[579] = &Spectre::Engine::CommandListState::`vftable';
  v2 = a1 + 1157;
  a1[1157] = &Spectre::Engine::CommandListState::`vftable';
  v3 = a1 + 1213;
  a1[1213] = &Spectre::Engine::CommandListState::`vftable';
  v4 = a1 + 1222;
  a1[1222] = &Spectre::Engine::CommandListState::`vftable';
  v5 = a1 + 1231;
  a1[1231] = &Spectre::Engine::CommandListState::`vftable';
  v6 = a1 + 1809;
  a1[1809] = &Spectre::Engine::CommandListState::`vftable';
  v7 = a1 + 1817;
  a1[1817] = &Spectre::Engine::CommandListState::`vftable';
  v8 = a1 + 1828;
  a1[1828] = &Spectre::Engine::CommandListState::`vftable';
  sub_1800E0A60(a1);
  sub_1800E0578(v8);
  sub_1800E03E8(v7);
  sub_1800E0160(v6);
  sub_1800DFF60(v5);
  sub_1800DFC9C(v4);
  sub_1800DFA50(v3);
  sub_1800DF5D0(v2);
  sub_1800DF278(v1);
  sub_1800DEF1C(a1 + 145);
  sub_1800DEB2C(a1 + 8);
  return sub_1800DE814(a1);
}
