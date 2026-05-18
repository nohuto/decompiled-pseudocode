/*
 * XREFs of sub_180083F00 @ 0x180083F00
 * Callers:
 *     sub_1800848F4 @ 0x1800848F4 (sub_1800848F4.c)
 *     sub_180085384 @ 0x180085384 (sub_180085384.c)
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 *     sub_1800C540C @ 0x1800C540C (sub_1800C540C.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_180102120 @ 0x180102120 (sub_180102120.c)
 *     sub_180107F40 @ 0x180107F40 (sub_180107F40.c)
 *     sub_180108188 @ 0x180108188 (sub_180108188.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 * Callees:
 *     sub_180084480 @ 0x180084480 (sub_180084480.c)
 *     sub_180086B60 @ 0x180086B60 (sub_180086B60.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180083F00(__int64 a1, __int64 a2)
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

  sub_180087450(a1);
  sub_180087450(a1);
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
    sub_180087450(a1);
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
    v9 = (_OWORD *)sub_180084480(v11, v14);
  }
  else
  {
    v13[0] = xmmword_18025EFE0;
    v13[1] = xmmword_18025EFF0;
    v13[2] = xmmword_18025F000;
    v13[3] = xmmword_18025F010;
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
  sub_180086B60(a2, a1 + 144, v15);
  return a2;
}
