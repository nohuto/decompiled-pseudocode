/*
 * XREFs of sub_1800B3F08 @ 0x1800B3F08
 * Callers:
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 * Callees:
 *     sub_18000DDE0 @ 0x18000DDE0 (sub_18000DDE0.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800B3F08(__int64 a1, __int64 *a2)
{
  int v4; // eax
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // r12
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 *v19; // [rsp+30h] [rbp-48h]
  _Mtx_t v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-38h]

  v21 = -2LL;
  v20 = (_Mtx_t)(a1 + 128);
  v4 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(__int64 **)(a1 + 72);
  v19 = v5;
  v6 = *(__int64 **)(a1 + 64);
  if ( v6 == v5 )
    goto LABEL_17;
  do
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = v6[1];
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
        {
          v7 = *v6;
          v8 = (volatile signed __int32 *)v6[1];
          break;
        }
      }
    }
    v11 = *a2;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    if ( v7 == v11 )
      break;
    v6 += 2;
  }
  while ( v6 != v5 );
  if ( v6 == v19 )
  {
LABEL_17:
    v12 = a2[1];
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
      v12 = a2[1];
    }
    v13 = *a2;
    v17 = *a2;
    v18 = v12;
    v14 = *(_QWORD **)(a1 + 72);
    if ( *(_QWORD **)(a1 + 80) == v14 )
    {
      sub_18000DDE0((_QWORD *)(a1 + 64), v14, &v17);
      v15 = v18;
    }
    else
    {
      *v14 = v13;
      v14[1] = v12;
      v15 = 0LL;
      v18 = 0LL;
      *(_QWORD *)(a1 + 72) += 16LL;
    }
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  }
  v16 = Mtx_unlock(v20);
  if ( v16 )
    std::_Throw_C_error(v16);
}
