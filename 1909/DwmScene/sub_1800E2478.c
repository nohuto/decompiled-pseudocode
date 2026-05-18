/*
 * XREFs of sub_1800E2478 @ 0x1800E2478
 * Callers:
 *     sub_18006CA18 @ 0x18006CA18 (sub_18006CA18.c)
 * Callees:
 *     sub_1800E209C @ 0x1800E209C (sub_1800E209C.c)
 *     sub_18010B7E8 @ 0x18010B7E8 (sub_18010B7E8.c)
 *     sub_18010B948 @ 0x18010B948 (sub_18010B948.c)
 *     sub_18010BB94 @ 0x18010BB94 (sub_18010BB94.c)
 *     sub_18010BC00 @ 0x18010BC00 (sub_18010BC00.c)
 *     sub_18010BDB0 @ 0x18010BDB0 (sub_18010BDB0.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800E2478(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  volatile signed __int32 *v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-99h] BYREF
  struct _Mtx_internal_imp_t *v16; // [rsp+30h] [rbp-89h]
  __int128 v17; // [rsp+38h] [rbp-81h] BYREF
  __int64 v18; // [rsp+48h] [rbp-71h]
  _QWORD *v19; // [rsp+50h] [rbp-69h]
  _BYTE v20[176]; // [rsp+60h] [rbp-59h] BYREF

  v18 = -2LL;
  v19 = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v16 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v7 = Mtx_lock((_Mtx_t)(a1 + 24));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = *(_QWORD *)a1;
  v9 = *(_QWORD *)(a1 + 8);
  while ( v8 != v9 && sub_18010BC00(v8) != a3 )
    v8 += 128LL;
  v10 = a2[1];
  if ( v8 == *(_QWORD *)(a1 + 8) )
  {
    v17 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a2[1];
      v6 = v16;
    }
    *(_QWORD *)&v17 = *a2;
    *((_QWORD *)&v17 + 1) = v10;
    v11 = sub_18010B948(v20, a3, &v17);
    v12 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) == v12 )
    {
      sub_1800E209C((__int64 *)a1, *(_QWORD *)(a1 + 8));
    }
    else
    {
      sub_18010B7E8(v12, v11);
      *(_QWORD *)(a1 + 8) += 128LL;
    }
    sub_18010BB94(v20);
  }
  else
  {
    v15 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a2[1];
      v6 = v16;
    }
    *(_QWORD *)&v15 = *a2;
    *((_QWORD *)&v15 + 1) = v10;
    sub_18010BDB0(v8, &v15);
  }
  v13 = Mtx_unlock(v6);
  if ( v13 )
    std::_Throw_C_error(v13);
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
    if ( !_InterlockedDecrement(v14 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  }
}
