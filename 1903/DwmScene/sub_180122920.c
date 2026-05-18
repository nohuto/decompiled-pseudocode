/*
 * XREFs of sub_180122920 @ 0x180122920
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180121AAC @ 0x180121AAC (sub_180121AAC.c)
 *     sub_1801246AC @ 0x1801246AC (sub_1801246AC.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180122920(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  char *v6; // rax
  __int64 v7; // rsi
  char v8; // di
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12[5]; // [rsp+38h] [rbp-30h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v5 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v12, a2);
  sub_180121AAC((__int64 **)(a1 + 144), (__int64)&v11, v6);
  v7 = v11;
  unknown_libname_116(v12);
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v8 = sub_1801246AC(v7 + 64, a2);
  v9 = Mtx_unlock(v4);
  if ( v9 )
    std::_Throw_C_error(v9);
  return v8;
}
