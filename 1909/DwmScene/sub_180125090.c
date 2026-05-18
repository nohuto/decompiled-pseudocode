/*
 * XREFs of sub_180125090 @ 0x180125090
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025FB8 @ 0x180025FB8 (sub_180025FB8.c)
 *     sub_1801248C4 @ 0x1801248C4 (sub_1801248C4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180127508 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180125090(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-30h] BYREF

  v17 = 0;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v5 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v5 )
    std::_Throw_C_error(v5);
  v17 = ++*(_DWORD *)(a1 + 88);
  v6 = *(_BYTE *)(a1 + 112);
  if ( !v6 )
  {
    sub_1801248C4((__int64 **)(a1 + 96), (__int64)&v16, &v17);
    v8 = v16 + 40;
    if ( v16 + 40 != a2 )
    {
      v9 = *(_QWORD *)(v16 + 96);
      if ( v9 )
      {
        LOBYTE(v7) = v9 != v8;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
        *(_QWORD *)(v8 + 56) = 0LL;
      }
      sub_180025FB8(v8, a2);
    }
  }
  v10 = Mtx_unlock(v4);
  if ( v10 )
    std::_Throw_C_error(v10);
  if ( v6 )
  {
    v12 = *(_QWORD *)(a2 + 56);
    if ( !v12 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1801251BBLL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v17;
  v14 = *(_QWORD *)(a2 + 56);
  if ( v14 )
  {
    LOBYTE(v11) = v14 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v11);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v13;
}
