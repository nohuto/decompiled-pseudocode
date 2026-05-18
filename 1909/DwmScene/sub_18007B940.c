/*
 * XREFs of sub_18007B940 @ 0x18007B940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180072B94 @ 0x180072B94 (sub_180072B94.c)
 *     sub_18007B834 @ 0x18007B834 (sub_18007B834.c)
 *     sub_18007FE70 @ 0x18007FE70 (sub_18007FE70.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18007B940(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  int v3; // eax
  __int128 *i; // rax
  int v5; // eax
  __int64 v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  _BYTE v9[16]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h]

  v8 = -2LL;
  v7 = 0LL;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 1280);
  v6[1] = a1 + 1280;
  v3 = Mtx_lock((_Mtx_t)(a1 + 1280));
  if ( v3 )
    std::_Throw_C_error(v3);
  LOBYTE(v7) = 1;
  v6[0] = *(int *)(a1 + 1200);
  for ( i = (__int128 *)sub_180072B94((__int64)v9, v6); ; i = (__int128 *)sub_180072B94((__int64)v9, v6) )
  {
    v10 = *i;
    sub_18007FE70((_Cnd_t)(a1 + 1208));
    if ( *(_BYTE *)(a1 + 1360) )
      break;
    sub_18007B834(a1);
    v6[0] = *(int *)(a1 + 1200);
  }
  v5 = Mtx_unlock(v2);
  if ( v5 )
    std::_Throw_C_error(v5);
}
