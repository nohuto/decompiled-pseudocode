/*
 * XREFs of sub_18010BC54 @ 0x18010BC54
 * Callers:
 *     sub_1800E286C @ 0x1800E286C (sub_1800E286C.c)
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_18012404C @ 0x18012404C (sub_18012404C.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010BC54(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  volatile signed __int32 *v15; // rdi
  __int128 v17; // [rsp+28h] [rbp-30h] BYREF
  struct _Mtx_internal_imp_t *v18; // [rsp+60h] [rbp+8h]

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v18 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v7 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v9 = *a3;
    v17 = 0LL;
    v10 = *(_QWORD *)(a1 + 40);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v8 = *(_QWORD *)(a1 + 32);
      v10 = *(_QWORD *)(a1 + 40);
      v6 = v18;
    }
    *(_QWORD *)&v17 = v8;
    *((_QWORD *)&v17 + 1) = v10;
    (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 8LL))(v9, a2, &v17);
    v11 = Mtx_unlock(v6);
    if ( v11 )
      std::_Throw_C_error(v11);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) == v12 )
    {
      sub_18000FC30((char **)a1, (char *)v12, a3);
    }
    else
    {
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      v13 = a3[1];
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v6 = v18;
      }
      *(_QWORD *)v12 = *a3;
      *(_QWORD *)(v12 + 8) = a3[1];
      *(_QWORD *)(a1 + 8) += 16LL;
    }
    sub_18012404C(a2, v12);
    v14 = Mtx_unlock(v6);
    if ( v14 )
      std::_Throw_C_error(v14);
  }
  v15 = (volatile signed __int32 *)a3[1];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return a2;
}
