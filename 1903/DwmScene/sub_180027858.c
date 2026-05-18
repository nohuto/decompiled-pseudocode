/*
 * XREFs of sub_180027858 @ 0x180027858
 * Callers:
 *     sub_18000E4F4 @ 0x18000E4F4 (sub_18000E4F4.c)
 *     sub_180027A18 @ 0x180027A18 (sub_180027A18.c)
 *     sub_180027B34 @ 0x180027B34 (sub_180027B34.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180027D8C @ 0x180027D8C (sub_180027D8C.c)
 * Callees:
 *     sub_18002B69C @ 0x18002B69C (sub_18002B69C.c)
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_1800669D4 @ 0x1800669D4 (sub_1800669D4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180027858(__int64 a1, _OWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int128 v13; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  _OWORD v16[2]; // [rsp+50h] [rbp-28h] BYREF

  v14 = *a4;
  v15 = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v13 = 0LL;
  v7 = a3[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a3[1];
  }
  *(_QWORD *)&v13 = *a3;
  *((_QWORD *)&v13 + 1) = v7;
  v16[0] = *a2;
  v16[1] = a2[1];
  sub_1800669D4(a1, v16, &v13, &v14, -2LL, v13, v7, v14, v15);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  v8 = a1 + 520;
  v9 = 20LL;
  do
  {
    *(_QWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = -1;
    *(_DWORD *)(v8 + 12) = -1;
    *(_DWORD *)(v8 + 16) = 0;
    *(_BYTE *)(v8 + 48) = 0;
    v8 += 56LL;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  *(_QWORD *)(a1 + 1648) = sub_18002B6D4(a1 + 1648, 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1664) = sub_18002B69C(a1 + 1664);
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1680) = sub_18002B69C(a1 + 1680);
  v10 = (volatile signed __int32 *)a3[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a4[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a1;
}
