/*
 * XREFs of sub_180084370 @ 0x180084370
 * Callers:
 *     sub_180083644 @ 0x180083644 (sub_180083644.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_18008457C @ 0x18008457C (sub_18008457C.c)
 *     sub_1800865C4 @ 0x1800865C4 (sub_1800865C4.c)
 *     sub_180086C24 @ 0x180086C24 (sub_180086C24.c)
 *     sub_180086D28 @ 0x180086D28 (sub_180086D28.c)
 *     sub_18009A9F0 @ 0x18009A9F0 (sub_18009A9F0.c)
 *     sub_1800B1E70 @ 0x1800B1E70 (sub_1800B1E70.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 * Callees:
 *     sub_180017DE8 @ 0x180017DE8 (sub_180017DE8.c)
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_180084624 @ 0x180084624 (sub_180084624.c)
 *     sub_180087280 @ 0x180087280 (sub_180087280.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_180084370(__int64 a1, _OWORD *a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rdx
  unsigned __int128 v6; // kr00_16
  __int64 v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rdx
  signed __int32 v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  _OWORD v15[4]; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v16[4]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v17[64]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v18[64]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int128 v19; // [rsp+130h] [rbp+28h]

  sub_180087340(a1);
  v4 = sub_180084624(a1);
  if ( v4 > *(_QWORD *)(a1 + 360) )
  {
    sub_180087340(a1);
    v19 = 0LL;
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v5 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v10 + 1, v10) )
        {
          v11 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)&v19 = v11;
          v12 = *(_QWORD *)(a1 + 64);
          *((_QWORD *)&v19 + 1) = v12;
          v6 = __PAIR128__(v12, v11);
          goto LABEL_4;
        }
      }
    }
    v6 = v19;
LABEL_4:
    sub_180087340(a1);
    v7 = *(_QWORD *)(a1 + 208);
    if ( (_QWORD)v6 )
    {
      if ( *(_QWORD *)(a1 + 352) != v7 )
        sub_180087280(a1);
      v15[0] = *(_OWORD *)(a1 + 224);
      v15[1] = *(_OWORD *)(a1 + 240);
      v15[2] = *(_OWORD *)(a1 + 256);
      v15[3] = *(_OWORD *)(a1 + 272);
      v8 = (_OWORD *)sub_180084370(v6, v17);
      v9 = (_OWORD *)sub_180017DE8((__int64)v18, v15, v8);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 352) != v7 )
        sub_180087280(a1);
      v16[0] = *(_OWORD *)(a1 + 224);
      v16[1] = *(_OWORD *)(a1 + 240);
      v16[2] = *(_OWORD *)(a1 + 256);
      v16[3] = *(_OWORD *)(a1 + 272);
      v9 = v16;
    }
    sub_180081CAC((_OWORD *)(a1 + 288), v9);
    *(_QWORD *)(a1 + 360) = v4;
    if ( *((_QWORD *)&v6 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v13 = *((_QWORD *)&v19 + 1);
        (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
      }
    }
  }
  *a2 = *(_OWORD *)(a1 + 288);
  a2[1] = *(_OWORD *)(a1 + 304);
  a2[2] = *(_OWORD *)(a1 + 320);
  a2[3] = *(_OWORD *)(a1 + 336);
  return a2;
}
