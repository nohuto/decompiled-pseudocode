/*
 * XREFs of sub_18011D5B4 @ 0x18011D5B4
 * Callers:
 *     sub_18011D7AC @ 0x18011D7AC (sub_18011D7AC.c)
 * Callees:
 *     sub_18006DF24 @ 0x18006DF24 (sub_18006DF24.c)
 *     sub_18006E354 @ 0x18006E354 (sub_18006E354.c)
 *     sub_18011CB2C @ 0x18011CB2C (sub_18011CB2C.c)
 *     sub_18011D098 @ 0x18011D098 (sub_18011D098.c)
 *     sub_18011D230 @ 0x18011D230 (sub_18011D230.c)
 *     sub_18011D2B4 @ 0x18011D2B4 (sub_18011D2B4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180127508 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18011D5B4(__int64 a1, int a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // r10
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  _BYTE *v13; // rdx
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  _QWORD v18[2]; // [rsp+40h] [rbp-61h] BYREF
  __int128 v19; // [rsp+50h] [rbp-51h] BYREF
  _QWORD *v20[2]; // [rsp+60h] [rbp-41h] BYREF
  struct _Mtx_internal_imp_t *v21; // [rsp+70h] [rbp-31h] BYREF
  int v22; // [rsp+78h] [rbp-29h]
  _BYTE v23[56]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE *v24; // [rsp+B8h] [rbp+17h]

  v18[1] = -2LL;
  v19 = 0LL;
  *(_QWORD *)&v19 = sub_18006DF24();
  v6 = (struct _Mtx_internal_imp_t *)sub_18011D2B4();
  v21 = v6;
  v7 = Mtx_lock(v6);
  if ( v7 )
    std::_Throw_C_error(v7);
  v20[0] = 0LL;
  v20[1] = 0LL;
  sub_18011D230();
  sub_18011CB2C(v20);
  sub_18011D098(&v19, v20);
  sub_18006E354(v20, v18, *(_QWORD **)v20[0], v20[0]);
  j_j__o_free(v20[0]);
  v8 = Mtx_unlock(v6);
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = (__int64 *)v19;
  v10 = *(__int64 **)v19;
  if ( *(_QWORD *)v19 == (_QWORD)v19 )
  {
LABEL_21:
    sub_18006E354((_QWORD **)&v19, v18, (_QWORD *)*v9, v9);
    return j_j__o_free(v19);
  }
  else
  {
    while ( 1 )
    {
      v22 = *((_DWORD *)v10 + 8);
      v18[0] = v23;
      v11 = 0LL;
      v24 = 0LL;
      v12 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))v10[12];
      if ( v12 )
      {
        v11 = (**v12)(v12, v23);
        v24 = (_BYTE *)v11;
      }
      LODWORD(v21) = a2;
      if ( !v11 )
        break;
      (*(void (__fastcall **)(__int64, __int64, struct _Mtx_internal_imp_t **, __int64))(*(_QWORD *)v11 + 16LL))(
        v11,
        a1,
        &v21,
        a3);
      if ( v24 )
      {
        v13 = v23;
        LOBYTE(v13) = v24 != v23;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v13);
      }
      v14 = (__int64 **)v10[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v10 = i;
        v10 = i;
      }
      else
      {
        v10 = (__int64 *)v10[2];
        for ( j = *v14; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v10 = j;
      }
      if ( v10 == v9 )
      {
        v9 = (__int64 *)v19;
        goto LABEL_21;
      }
    }
    std::_Xbad_function_call();
    return sub_18011D7AC();
  }
}
