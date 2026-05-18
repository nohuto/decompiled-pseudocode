/*
 * XREFs of sub_1800E286C @ 0x1800E286C
 * Callers:
 *     sub_180091020 @ 0x180091020 (sub_180091020.c)
 *     sub_180099F28 @ 0x180099F28 (sub_180099F28.c)
 * Callees:
 *     sub_1800E209C @ 0x1800E209C (sub_1800E209C.c)
 *     sub_1800E25F0 @ 0x1800E25F0 (sub_1800E25F0.c)
 *     sub_18010B7E8 @ 0x18010B7E8 (sub_18010B7E8.c)
 *     sub_18010BA58 @ 0x18010BA58 (sub_18010BA58.c)
 *     sub_18010BB94 @ 0x18010BB94 (sub_18010BB94.c)
 *     sub_18010BC00 @ 0x18010BC00 (sub_18010BC00.c)
 *     sub_18010BC54 @ 0x18010BC54 (sub_18010BC54.c)
 *     sub_18012404C @ 0x18012404C (sub_18012404C.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800E286C(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // eax
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  struct _Mtx_internal_imp_t *v21; // [rsp+20h] [rbp-A9h]
  __int128 v22; // [rsp+28h] [rbp-A1h] BYREF
  __int128 v23; // [rsp+38h] [rbp-91h] BYREF
  __int64 v24; // [rsp+48h] [rbp-81h]
  _QWORD *v25; // [rsp+50h] [rbp-79h]
  _BYTE v26[192]; // [rsp+60h] [rbp-69h] BYREF

  v24 = -2LL;
  v25 = a4;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v21 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v9 = Mtx_lock((_Mtx_t)(a1 + 24));
  if ( v9 )
    std::_Throw_C_error(v9);
  v10 = sub_1800E25F0(a1, a3);
  v11 = *(_QWORD *)a1;
  v12 = *(_QWORD *)(a1 + 8);
  while ( v11 != v12 && sub_18010BC00(v11) != v10 )
    v11 += 128LL;
  v13 = a4[1];
  if ( v11 == *(_QWORD *)(a1 + 8) )
  {
    v23 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = a4[1];
      v8 = v21;
    }
    *(_QWORD *)&v23 = *a4;
    *((_QWORD *)&v23 + 1) = v13;
    v16 = sub_18010BA58(v26, v10, &v23);
    v17 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) == v17 )
    {
      sub_1800E209C((__int64 *)a1, *(_QWORD *)(a1 + 8));
    }
    else
    {
      sub_18010B7E8(v17, v16);
      *(_QWORD *)(a1 + 8) += 128LL;
    }
    sub_18010BB94(v26);
    sub_18012404C(a2, v18);
    v19 = Mtx_unlock(v8);
    if ( v19 )
      std::_Throw_C_error(v19);
    v15 = (volatile signed __int32 *)a4[1];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          goto LABEL_26;
      }
    }
  }
  else
  {
    v22 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = a4[1];
      v8 = v21;
    }
    *(_QWORD *)&v22 = *a4;
    *((_QWORD *)&v22 + 1) = v13;
    sub_18010BC54(v11, a2, &v22);
    v14 = Mtx_unlock(v8);
    if ( v14 )
      std::_Throw_C_error(v14);
    v15 = (volatile signed __int32 *)a4[1];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
LABEL_26:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  return a2;
}
