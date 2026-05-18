/*
 * XREFs of sub_180013F00 @ 0x180013F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18008C058 @ 0x18008C058 (sub_18008C058.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180013F00(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  if ( a2 )
  {
    v9 = -2LL;
    v3 = *(_QWORD *)(a1 + 32);
    v10 = 0LL;
    v4 = *(_QWORD *)(v3 + 80);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v4 + 8);
        if ( !v5 )
          break;
        if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
        {
          v10 = *(_OWORD *)(v3 + 72);
          break;
        }
      }
    }
    v11 = 0LL;
    v12 = 0LL;
    sub_1800632D0(v10 + 16, &v11);
    v8 = 0LL;
    v6 = *(_QWORD *)(a2 + 40);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)&v8 = *(_QWORD *)(a2 + 32);
    *((_QWORD *)&v8 + 1) = v6;
    sub_18008C058(v10, &v8);
    if ( (_BYTE)v12 )
      sub_180063778(v11);
    if ( *((_QWORD *)&v10 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v7 = *((_QWORD *)&v10 + 1);
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
}
