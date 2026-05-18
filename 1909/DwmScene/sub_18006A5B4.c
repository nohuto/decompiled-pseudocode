/*
 * XREFs of sub_18006A5B4 @ 0x18006A5B4
 * Callers:
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 *     sub_1800F975C @ 0x1800F975C (sub_1800F975C.c)
 * Callees:
 *     sub_18006CE18 @ 0x18006CE18 (sub_18006CE18.c)
 *     sub_18006CF84 @ 0x18006CF84 (sub_18006CF84.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006A5B4(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  signed __int32 v11; // eax
  __int128 v13; // [rsp+28h] [rbp-18h]

  v3 = a1[15];
  if ( v3 )
    LODWORD(v3) = *(_DWORD *)(v3 + 8);
  if ( (_DWORD)v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v4 = a1[15];
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    *a2 = a1[14];
    a2[1] = a1[15];
  }
  else
  {
    v13 = 0LL;
    v5 = a1[10];
    if ( v5 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v5 + 8);
        if ( !v11 )
          break;
        if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v11 + 1, v11) )
        {
          v7 = a1[9];
          v6 = a1[10];
          *((_QWORD *)&v13 + 1) = v6;
          goto LABEL_9;
        }
      }
    }
    v6 = 0LL;
    v7 = 0LL;
LABEL_9:
    if ( v7 && (unsigned int)sub_18006CF84(v7) )
    {
      v8 = sub_18006CE18(v7);
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 184LL))(v8);
      *a2 = 0LL;
      a2[1] = 0LL;
      v10 = v9[1];
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
        v6 = *((_QWORD *)&v13 + 1);
      }
      *a2 = *v9;
      a2[1] = v9[1];
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
      }
    }
  }
  return a2;
}
