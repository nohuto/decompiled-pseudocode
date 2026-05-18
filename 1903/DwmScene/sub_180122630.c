/*
 * XREFs of sub_180122630 @ 0x180122630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180121AAC @ 0x180121AAC (sub_180121AAC.c)
 *     sub_180122800 @ 0x180122800 (sub_180122800.c)
 *     sub_180124548 @ 0x180124548 (sub_180124548.c)
 *     sub_1801246AC @ 0x1801246AC (sub_1801246AC.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180122630(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebp
  char *v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  _QWORD v13[4]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v14[5]; // [rsp+48h] [rbp-40h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v5 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = 0;
  if ( a2[2] )
  {
    v7 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v14, a2);
    sub_180121AAC((__int64 **)(a1 + 144), (__int64)v13, v7);
    v8 = v13[0];
    unknown_libname_116(v14);
    v9 = a2;
    if ( a2[3] >= 8uLL )
      v9 = (_QWORD *)*a2;
    if ( (unsigned __int8)sub_1801246AC(v8 + 64, v9) )
    {
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_18001110C(v13, (__int64)a2);
      v10 = sub_180124548(v8 + 64, v13);
      v6 = sub_180122800(a1, v10);
    }
  }
  v11 = Mtx_unlock(v4);
  if ( v11 )
    std::_Throw_C_error(v11);
  return v6;
}
