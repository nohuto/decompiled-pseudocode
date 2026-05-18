/*
 * XREFs of sub_180122740 @ 0x180122740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180121BBC @ 0x180121BBC (sub_180121BBC.c)
 *     sub_180122910 @ 0x180122910 (sub_180122910.c)
 *     sub_180124658 @ 0x180124658 (sub_180124658.c)
 *     sub_1801247BC @ 0x1801247BC (sub_1801247BC.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180122740(__int64 a1, _QWORD *a2)
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
    sub_180121BBC((__int64 **)(a1 + 144), (__int64)v13, v7);
    v8 = v13[0];
    unknown_libname_116(v14);
    v9 = a2;
    if ( a2[3] >= 8uLL )
      v9 = (_QWORD *)*a2;
    if ( (unsigned __int8)sub_1801247BC(v8 + 64, v9) )
    {
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_18001115C(v13, (__int64)a2);
      v10 = sub_180124658(v8 + 64, v13);
      v6 = sub_180122910(a1, v10);
    }
  }
  v11 = Mtx_unlock(v4);
  if ( v11 )
    std::_Throw_C_error(v11);
  return v6;
}
