/*
 * XREFs of sub_180124B80 @ 0x180124B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180124B80(__int64 a1)
{
  int v2; // eax
  char v3; // si
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 **v11; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF

  v16 = 0LL;
  *(_QWORD *)&v16 = sub_18006DE14();
  v2 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v2 )
    std::_Throw_C_error(v2);
  v3 = *(_BYTE *)(a1 + 112);
  *(_BYTE *)(a1 + 112) = 1;
  v4 = (_QWORD *)(a1 + 96);
  if ( &v16 != (__int128 *)(a1 + 96) )
  {
    v5 = v16;
    *(_QWORD *)&v16 = *v4;
    *v4 = v5;
    v6 = *((_QWORD *)&v16 + 1);
    *((_QWORD *)&v16 + 1) = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = v6;
  }
  v7 = Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (_QWORD *)v16;
  if ( !v3 )
  {
    v9 = *(_QWORD **)v16;
    if ( *(_QWORD *)v16 != (_QWORD)v16 )
    {
      do
      {
        v10 = v9[12];
        if ( !v10 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x180124CE2LL);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v11 = (__int64 **)v9[2];
        if ( *((_BYTE *)v11 + 25) )
        {
          for ( i = v9[1]; !*(_BYTE *)(i + 25) && v9 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            v9 = (_QWORD *)i;
          v9 = (_QWORD *)i;
        }
        else
        {
          v9 = (_QWORD *)v9[2];
          for ( j = *v11; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v9 = j;
        }
      }
      while ( v9 != v8 );
      v8 = (_QWORD *)v16;
    }
  }
  sub_18006E244((_QWORD **)&v16, &v15, (_QWORD *)*v8, v8);
  return j_j__o_free(v16);
}
