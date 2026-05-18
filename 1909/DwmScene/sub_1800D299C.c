/*
 * XREFs of sub_1800D299C @ 0x1800D299C
 * Callers:
 *     sub_180094B88 @ 0x180094B88 (sub_180094B88.c)
 * Callees:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800D299C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 128) )
  {
    v3 = **(_QWORD **)(a1 + 120);
    v4 = *(volatile signed __int32 **)(v3 + 48);
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 2);
      v4 = *(volatile signed __int32 **)(v3 + 48);
    }
    v5 = *(_QWORD *)(v3 + 40);
    v10 = v5;
    v11 = 0LL;
    v12 = 0LL;
    v9 = 0LL;
    v6 = *(_QWORD *)(v5 + 80);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( !v7 )
          break;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
        {
          v9 = *(_OWORD *)(v5 + 72);
          break;
        }
      }
    }
    sub_1800632D0(v9 + 24, &v11);
    if ( *((_QWORD *)&v9 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
      }
    }
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 40LL))(v10, a2);
    if ( (_BYTE)v12 )
      sub_180063778(v11);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
