/*
 * XREFs of sub_18010B948 @ 0x18010B948
 * Callers:
 *     sub_1800E2478 @ 0x1800E2478 (sub_1800E2478.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     sub_18010B758 @ 0x18010B758 (sub_18010B758.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18010B948(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rsi
  int v10; // eax
  volatile signed __int32 *v11; // rbx

  sub_18010B758((_QWORD *)a1, 0x10uLL);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
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
  v10 = Mtx_unlock((_Mtx_t)(a1 + 48));
  if ( v10 )
    std::_Throw_C_error(v10);
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a1;
}
