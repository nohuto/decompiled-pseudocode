/*
 * XREFs of sub_18008D004 @ 0x18008D004
 * Callers:
 *     sub_18008D004 @ 0x18008D004 (sub_18008D004.c)
 *     sub_18008D164 @ 0x18008D164 (sub_18008D164.c)
 * Callees:
 *     sub_180012680 @ 0x180012680 (sub_180012680.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_18008D004 @ 0x18008D004 (sub_18008D004.c)
 *     sub_18009C760 @ 0x18009C760 (sub_18009C760.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18008D004(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF

  v15 = -2LL;
  v6 = *a1;
  if ( v6 )
  {
    v13 = 0LL;
    v14 = 0LL;
    sub_180012680(v6, &v13);
    if ( v13 )
      sub_18009C760(v13, a2, a3);
    v7 = *a1;
    sub_180087450(v7);
    v8 = *(_QWORD **)(v7 + 32);
    v9 = *(_QWORD **)(v7 + 40);
    while ( v8 != v9 )
    {
      v16 = 0LL;
      v10 = v8[1];
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = v8[1];
      }
      *(_QWORD *)&v16 = *v8;
      *((_QWORD *)&v16 + 1) = v10;
      sub_18008D004(&v16, a2, a3);
      v11 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
      if ( *((_QWORD *)&v16 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL)) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( !_InterlockedDecrement(v11 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
      v8 += 2;
    }
    if ( v14 && !_InterlockedDecrement(v14 + 2) )
    {
      v12 = v14;
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( !_InterlockedDecrement(v12 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
}
