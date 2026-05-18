/*
 * XREFs of sub_180083DF0 @ 0x180083DF0
 * Callers:
 *     sub_1800847E4 @ 0x1800847E4 (sub_1800847E4.c)
 *     sub_180085274 @ 0x180085274 (sub_180085274.c)
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 *     sub_1800C52FC @ 0x1800C52FC (sub_1800C52FC.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_180102010 @ 0x180102010 (sub_180102010.c)
 *     sub_180107E30 @ 0x180107E30 (sub_180107E30.c)
 *     sub_180108078 @ 0x180108078 (sub_180108078.c)
 *     sub_18010C688 @ 0x18010C688 (sub_18010C688.c)
 * Callees:
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_180086A50 @ 0x180086A50 (sub_180086A50.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180083DF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  char v6; // bl
  __int64 v7; // rdx
  signed __int32 v8; // eax
  _OWORD *v9; // rax
  __int128 v11; // [rsp+30h] [rbp-D8h]
  __int128 v12; // [rsp+40h] [rbp-C8h]
  _OWORD v13[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v14[64]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v15[4]; // [rsp+D8h] [rbp-30h] BYREF

  sub_180087340(a1);
  sub_180087340(a1);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v12 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v6 = 2;
  if ( (_QWORD)v12 )
  {
    sub_180087340(a1);
    v11 = 0LL;
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
        {
          v11 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v6 = 7;
    v9 = (_OWORD *)sub_180084370(v11, v14);
  }
  else
  {
    v13[0] = xmmword_18025DFE0;
    v13[1] = xmmword_18025DFF0;
    v13[2] = xmmword_18025E000;
    v13[3] = xmmword_18025E010;
    v9 = v13;
  }
  v15[0] = *v9;
  v15[1] = v9[1];
  v15[2] = v9[2];
  v15[3] = v9[3];
  if ( (v6 & 1) != 0 )
  {
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL)) )
      {
        (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL)) )
    {
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  sub_180086A50(a2, a1 + 144, v15);
  return a2;
}
