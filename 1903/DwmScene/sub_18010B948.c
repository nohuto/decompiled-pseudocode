/*
 * XREFs of sub_18010B948 @ 0x18010B948
 * Callers:
 *     sub_1800E275C @ 0x1800E275C (sub_1800E275C.c)
 * Callees:
 *     sub_18000FBE0 @ 0x18000FBE0 (sub_18000FBE0.c)
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 *     sub_18010B648 @ 0x18010B648 (sub_18010B648.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18010B948(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  volatile signed __int32 *v12; // rbx

  sub_18010B648((_QWORD *)a1, 0x10uLL);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v7 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != v8 )
  {
    do
    {
      unknown_libname_115(v9, 0);
      v9 += 16LL;
    }
    while ( v9 != v8 );
    v9 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v9;
  if ( *(_QWORD *)(a1 + 16) == v9 )
  {
    sub_18000FBE0((char **)a1, (char *)v9, a3);
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    v10 = a3[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
    }
    *(_QWORD *)v9 = *a3;
    *(_QWORD *)(v9 + 8) = a3[1];
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  v11 = Mtx_unlock(v6);
  if ( v11 )
    std::_Throw_C_error(v11);
  v12 = (volatile signed __int32 *)a3[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
