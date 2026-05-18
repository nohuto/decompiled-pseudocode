/*
 * XREFs of sub_1800E0758 @ 0x1800E0758
 * Callers:
 *     sub_18006A16C @ 0x18006A16C (sub_18006A16C.c)
 * Callees:
 *     sub_1800DE8D8 @ 0x1800DE8D8 (sub_1800DE8D8.c)
 *     sub_1800DEAC8 @ 0x1800DEAC8 (sub_1800DEAC8.c)
 *     sub_1800DEF18 @ 0x1800DEF18 (sub_1800DEF18.c)
 *     sub_1800DF270 @ 0x1800DF270 (sub_1800DF270.c)
 *     sub_1800DF5BC @ 0x1800DF5BC (sub_1800DF5BC.c)
 *     sub_1800DFB00 @ 0x1800DFB00 (sub_1800DFB00.c)
 *     sub_1800DFD48 @ 0x1800DFD48 (sub_1800DFD48.c)
 *     sub_1800DFF58 @ 0x1800DFF58 (sub_1800DFF58.c)
 *     sub_1800E020C @ 0x1800E020C (sub_1800E020C.c)
 *     sub_1800E04A8 @ 0x1800E04A8 (sub_1800E04A8.c)
 *     sub_1800E0650 @ 0x1800E0650 (sub_1800E0650.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_1800E0758(_QWORD *a1, __int64 a2, __int64 a3)
{
  int *v6; // rax
  int *v7; // rax
  int *v8; // rax
  _QWORD *result; // rax
  char v11; // [rsp+88h] [rbp+10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h]
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v12 = a3;
  sub_1800DE8D8((__int64)a1, a3);
  sub_1800DEAC8((__int64)(a1 + 8), a3);
  v6 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 192LL))(a2, &v11);
  sub_1800DEF18((__int64)(a1 + 145), *v6, a3);
  v7 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v13);
  sub_1800DF270((__int64)(a1 + 579), *v7, a3);
  sub_1800DF5BC((__int64)(a1 + 1157), a3);
  sub_1800DFB00((__int64)(a1 + 1213), a3);
  sub_1800DFD48((__int64)(a1 + 1222), a3);
  v8 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v11);
  sub_1800DFF58((__int64)(a1 + 1231), *v8, a3);
  sub_1800E020C(a1 + 1809, a3);
  sub_1800E04A8((__int64)(a1 + 1817), v12);
  sub_1800E0650((__int64)(a1 + 1828), v12);
  result = a1;
  *a1 = &Spectre::Engine::CommandListState::`vftable';
  a1[8] = &Spectre::Engine::CommandListState::`vftable';
  a1[145] = &Spectre::Engine::CommandListState::`vftable';
  a1[579] = &Spectre::Engine::CommandListState::`vftable';
  a1[1157] = &Spectre::Engine::CommandListState::`vftable';
  a1[1213] = &Spectre::Engine::CommandListState::`vftable';
  a1[1222] = &Spectre::Engine::CommandListState::`vftable';
  a1[1231] = &Spectre::Engine::CommandListState::`vftable';
  a1[1809] = &Spectre::Engine::CommandListState::`vftable';
  a1[1817] = &Spectre::Engine::CommandListState::`vftable';
  a1[1828] = &Spectre::Engine::CommandListState::`vftable';
  return result;
}
