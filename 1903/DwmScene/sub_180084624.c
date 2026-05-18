/*
 * XREFs of sub_180084624 @ 0x180084624
 * Callers:
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_180084624 @ 0x180084624 (sub_180084624.c)
 *     sub_1800AEDCC @ 0x1800AEDCC (sub_1800AEDCC.c)
 * Callees:
 *     sub_180084624 @ 0x180084624 (sub_180084624.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_180084624(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  signed __int32 v4; // eax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-20h]

  sub_180087340(a1);
  result = *(_QWORD *)(a1 + 216);
  if ( result != qword_180258748 )
  {
    v7 = *(_QWORD *)(a1 + 208);
    sub_180087340(a1);
    v8 = 0LL;
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 + 8);
        if ( !v4 )
          break;
        if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) )
        {
          v8 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    if ( (_QWORD)v8 )
    {
      v5 = sub_180084624(v8);
      v6 = v7;
      if ( v7 < v5 )
        v6 = v5;
      v7 = v6;
    }
    *(_QWORD *)(a1 + 216) = v7;
    if ( *((_QWORD *)&v8 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
    }
    return v7;
  }
  return result;
}
