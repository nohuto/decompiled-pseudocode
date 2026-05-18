/*
 * XREFs of sub_1800E2694 @ 0x1800E2694
 * Callers:
 *     sub_18006D6F0 @ 0x18006D6F0 (sub_18006D6F0.c)
 * Callees:
 *     sub_18002B9F4 @ 0x18002B9F4 (sub_18002B9F4.c)
 *     sub_18010BA84 @ 0x18010BA84 (sub_18010BA84.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800E2694(__int64 *a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v3 = Mtx_lock((_Mtx_t)(a1 + 3));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = Mtx_lock((_Mtx_t)(a1 + 13));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = a1[1];
  v6 = *a1;
  if ( *a1 != v5 )
  {
    do
    {
      sub_18010BA84(v6);
      v6 += 128LL;
    }
    while ( v6 != v5 );
    v6 = *a1;
  }
  a1[1] = v6;
  sub_18002B9F4(a1 + 23);
  sub_18002B9F4(a1 + 25);
  v7 = Mtx_unlock((_Mtx_t)(a1 + 13));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = Mtx_unlock(v2);
  if ( v8 )
    std::_Throw_C_error(v8);
}
