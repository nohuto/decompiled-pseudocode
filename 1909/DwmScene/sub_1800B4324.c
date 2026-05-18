/*
 * XREFs of sub_1800B4324 @ 0x1800B4324
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 * Callees:
 *     sub_18006E4D8 @ 0x18006E4D8 (sub_18006E4D8.c)
 *     sub_1800B5208 @ 0x1800B5208 (sub_1800B5208.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800B4324(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  _QWORD *v5; // r8
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  struct _Mtx_internal_imp_t *v8; // [rsp+20h] [rbp-38h]
  _QWORD v9[3]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[2] = -2LL;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v4 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(_QWORD **)(a1 + 40);
  if ( v5 != *(_QWORD **)(a1 + 48) )
  {
    do
    {
      if ( *v5 == *a2 )
        break;
      v5 += 2;
    }
    while ( v5 != *(_QWORD **)(a1 + 48) );
    if ( v5 != *(_QWORD **)(a1 + 48) )
    {
      sub_18006E4D8(a1 + 40, v10, (__int64)v5);
      v6 = (volatile signed __int32 *)a2[1];
      if ( v6 )
      {
        _InterlockedIncrement(v6 + 3);
        v6 = (volatile signed __int32 *)a2[1];
      }
      v9[0] = *a2;
      v9[1] = v6;
      sub_1800B5208(a1 + 88, v9);
      if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = Mtx_unlock(v8);
  if ( v7 )
    std::_Throw_C_error(v7);
}
