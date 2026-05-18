/*
 * XREFs of sub_180010400 @ 0x180010400
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800865F0 @ 0x1800865F0 (sub_1800865F0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180010400(__int64 a1, _OWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int128 v9; // xmm2
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int v12; // ebx
  _OWORD v14[4]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v15 = 0LL;
  v16 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(v4 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v5 = *(_QWORD *)(v4 + 72);
        v6 = *(volatile signed __int32 **)(v4 + 80);
        break;
      }
    }
  }
  sub_1800632D0(v5 + 16, &v15);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v9 = a2[1];
  v10 = a2[2];
  v11 = a2[3];
  v14[0] = *a2;
  v14[1] = v9;
  v14[2] = v10;
  v14[3] = v11;
  if ( (unsigned __int8)sub_1800865F0(*(_QWORD *)(a1 + 16), v14) )
  {
    v12 = 0;
  }
  else
  {
    v12 = -2147024809;
    sub_18000C338(retaddr, 232, (__int64)"SpectreLightNode.cpp", 0x80070057);
  }
  if ( (_BYTE)v16 )
    sub_180063778(v15);
  return v12;
}
