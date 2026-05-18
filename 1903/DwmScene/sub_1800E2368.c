/*
 * XREFs of sub_1800E2368 @ 0x1800E2368
 * Callers:
 *     sub_18006C908 @ 0x18006C908 (sub_18006C908.c)
 * Callees:
 *     sub_1800E1F8C @ 0x1800E1F8C (sub_1800E1F8C.c)
 *     sub_18010B6D8 @ 0x18010B6D8 (sub_18010B6D8.c)
 *     sub_18010B838 @ 0x18010B838 (sub_18010B838.c)
 *     sub_18010BA84 @ 0x18010BA84 (sub_18010BA84.c)
 *     sub_18010BAF0 @ 0x18010BAF0 (sub_18010BAF0.c)
 *     sub_18010BCA0 @ 0x18010BCA0 (sub_18010BCA0.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800E2368(__int64 a1, _QWORD *a2, __int64 a3)
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
  while ( v8 != v9 && sub_18010BAF0(v8) != a3 )
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
    v11 = sub_18010B838(v20, a3, &v17);
    v12 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) == v12 )
    {
      sub_1800E1F8C((__int64 *)a1, *(_QWORD *)(a1 + 8));
    }
    else
    {
      sub_18010B6D8(v12, v11);
      *(_QWORD *)(a1 + 8) += 128LL;
    }
    sub_18010BA84(v20);
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
    sub_18010BCA0(v8, &v15);
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
