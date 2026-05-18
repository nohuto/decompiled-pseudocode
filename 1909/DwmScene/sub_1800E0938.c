/*
 * XREFs of sub_1800E0938 @ 0x1800E0938
 * Callers:
 *     sub_1800E0B40 @ 0x1800E0B40 (sub_1800E0B40.c)
 * Callees:
 *     sub_1800DEC3C @ 0x1800DEC3C (sub_1800DEC3C.c)
 *     sub_1800DF02C @ 0x1800DF02C (sub_1800DF02C.c)
 *     sub_1800DF388 @ 0x1800DF388 (sub_1800DF388.c)
 *     sub_1800DF6E0 @ 0x1800DF6E0 (sub_1800DF6E0.c)
 *     sub_1800DFB60 @ 0x1800DFB60 (sub_1800DFB60.c)
 *     sub_1800DFDAC @ 0x1800DFDAC (sub_1800DFDAC.c)
 *     sub_1800E0070 @ 0x1800E0070 (sub_1800E0070.c)
 *     sub_1800E0270 @ 0x1800E0270 (sub_1800E0270.c)
 *     sub_1800E04F8 @ 0x1800E04F8 (sub_1800E04F8.c)
 *     sub_1800E0688 @ 0x1800E0688 (sub_1800E0688.c)
 *     sub_1800E0B70 @ 0x1800E0B70 (sub_1800E0B70.c)
 */

__int64 __fastcall sub_1800E0938(_QWORD *a1)
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
  sub_1800E0B70(a1);
  sub_1800E0688(v8);
  sub_1800E04F8(v7);
  sub_1800E0270(v6);
  sub_1800E0070(v5);
  sub_1800DFDAC(v4);
  sub_1800DFB60(v3);
  sub_1800DF6E0(v2);
  sub_1800DF388(v1);
  sub_1800DF02C(a1 + 145);
  sub_1800DEC3C(a1 + 8);
  return sub_1800DE924(a1);
}
