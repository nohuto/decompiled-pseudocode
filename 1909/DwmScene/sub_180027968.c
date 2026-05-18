/*
 * XREFs of sub_180027968 @ 0x180027968
 * Callers:
 *     sub_18000E544 @ 0x18000E544 (sub_18000E544.c)
 *     sub_180027B28 @ 0x180027B28 (sub_180027B28.c)
 *     sub_180027C44 @ 0x180027C44 (sub_180027C44.c)
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_180027E9C @ 0x180027E9C (sub_180027E9C.c)
 * Callees:
 *     sub_18002B7AC @ 0x18002B7AC (sub_18002B7AC.c)
 *     sub_18002B7E4 @ 0x18002B7E4 (sub_18002B7E4.c)
 *     sub_180066AE4 @ 0x180066AE4 (sub_180066AE4.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180027968(__int64 a1, _OWORD *a2, _QWORD *a3, __int64 *a4)
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
  sub_180066AE4(a1, v16, &v13, &v14, -2LL, v13, v7, v14, v15);
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
  *(_QWORD *)(a1 + 1648) = sub_18002B7E4(a1 + 1648, 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1664) = sub_18002B7AC(a1 + 1664);
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1680) = sub_18002B7AC(a1 + 1680);
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
