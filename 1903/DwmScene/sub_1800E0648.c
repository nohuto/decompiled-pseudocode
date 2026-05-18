/*
 * XREFs of sub_1800E0648 @ 0x1800E0648
 * Callers:
 *     sub_18006A05C @ 0x18006A05C (sub_18006A05C.c)
 * Callees:
 *     sub_1800DE7C8 @ 0x1800DE7C8 (sub_1800DE7C8.c)
 *     sub_1800DE9B8 @ 0x1800DE9B8 (sub_1800DE9B8.c)
 *     sub_1800DEE08 @ 0x1800DEE08 (sub_1800DEE08.c)
 *     sub_1800DF160 @ 0x1800DF160 (sub_1800DF160.c)
 *     sub_1800DF4AC @ 0x1800DF4AC (sub_1800DF4AC.c)
 *     sub_1800DF9F0 @ 0x1800DF9F0 (sub_1800DF9F0.c)
 *     sub_1800DFC38 @ 0x1800DFC38 (sub_1800DFC38.c)
 *     sub_1800DFE48 @ 0x1800DFE48 (sub_1800DFE48.c)
 *     sub_1800E00FC @ 0x1800E00FC (sub_1800E00FC.c)
 *     sub_1800E0398 @ 0x1800E0398 (sub_1800E0398.c)
 *     sub_1800E0540 @ 0x1800E0540 (sub_1800E0540.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_1800E0648(_QWORD *a1, __int64 a2, __int64 a3)
{
  int *v6; // rax
  int *v7; // rax
  int *v8; // rax
  _QWORD *result; // rax
  char v11; // [rsp+88h] [rbp+10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h]
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v12 = a3;
  sub_1800DE7C8((__int64)a1, a3);
  sub_1800DE9B8((__int64)(a1 + 8), a3);
  v6 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 192LL))(a2, &v11);
  sub_1800DEE08((__int64)(a1 + 145), *v6, a3);
  v7 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v13);
  sub_1800DF160((__int64)(a1 + 579), *v7, a3);
  sub_1800DF4AC((__int64)(a1 + 1157), a3);
  sub_1800DF9F0((__int64)(a1 + 1213), a3);
  sub_1800DFC38((__int64)(a1 + 1222), a3);
  v8 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v11);
  sub_1800DFE48((__int64)(a1 + 1231), *v8, a3);
  sub_1800E00FC(a1 + 1809, a3);
  sub_1800E0398((__int64)(a1 + 1817), v12);
  sub_1800E0540((__int64)(a1 + 1828), v12);
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
