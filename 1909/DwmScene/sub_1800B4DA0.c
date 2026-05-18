/*
 * XREFs of sub_1800B4DA0 @ 0x1800B4DA0
 * Callers:
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 * Callees:
 *     sub_1800B4084 @ 0x1800B4084 (sub_1800B4084.c)
 *     sub_1800B40EC @ 0x1800B40EC (sub_1800B40EC.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800B4DA0(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v4; // rsi
  int v5; // eax
  char v6; // bl
  int v7; // eax
  _Mtx_t v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v8 = (_Mtx_t)(a1 + 128);
  v5 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = 1;
  LOBYTE(v9) = 1;
  if ( a2 != *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36) = a2;
    if ( a2 == 1 )
    {
      sub_1800B4084(a1);
    }
    else
    {
      sub_1800B40EC(a1, &v8);
      v6 = v9;
      v4 = v8;
    }
  }
  if ( v6 )
  {
    v7 = Mtx_unlock(v4);
    if ( v7 )
      std::_Throw_C_error(v7);
  }
}
