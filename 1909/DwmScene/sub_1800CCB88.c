/*
 * XREFs of sub_1800CCB88 @ 0x1800CCB88
 * Callers:
 *     sub_1800CCA88 @ 0x1800CCA88 (sub_1800CCA88.c)
 * Callees:
 *     sub_1800CD8A0 @ 0x1800CD8A0 (sub_1800CD8A0.c)
 *     __std_type_info_hash @ 0x180125BA0 (__std_type_info_hash.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180127508 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800CCB88(__int64 *a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdi
  int v12; // eax
  struct _Mtx_internal_imp_t *v14; // [rsp+20h] [rbp-40h]
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-18h]

  v17 = -2LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v14 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v5 = Mtx_lock((_Mtx_t)(a1 + 2));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = _std_type_info_hash(&qword_180261300);
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_10;
  do
  {
    if ( v8[4] >= v6 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v7 == (__int64 *)*a1 || v6 < v7[4] )
LABEL_10:
    v7 = (__int64 *)*a1;
  if ( v7 == (__int64 *)*a1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v9 = Mtx_unlock(v4);
    if ( v9 )
      std::_Throw_C_error(v9);
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
    v10 = v7[12];
    if ( !v10 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800CCD16LL);
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 16LL))(v10, &v18);
    v15 = 0LL;
    v16 = 0LL;
    sub_1800CD8A0(&v15, &v18);
    *a2 = v15;
    a2[1] = v16;
    v11 = v19;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      v4 = v14;
    }
    v12 = Mtx_unlock(v4);
    if ( v12 )
      std::_Throw_C_error(v12);
  }
  return a2;
}
