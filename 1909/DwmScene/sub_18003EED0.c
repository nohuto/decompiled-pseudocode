/*
 * XREFs of sub_18003EED0 @ 0x18003EED0
 * Callers:
 *     sub_18001C740 @ 0x18001C740 (sub_18001C740.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_180066AE4 @ 0x180066AE4 (sub_180066AE4.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18003EED0(__int64 a1, _OWORD *a2, __int64 *a3, __int64 *a4)
{
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v10; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  _OWORD v14[2]; // [rsp+50h] [rbp-28h] BYREF

  v10 = *a4;
  v11 = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v12 = *a3;
  v13 = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v14[0] = *a2;
  v14[1] = a2[1];
  sub_180066AE4(a1, v14, &v12, &v10, -2LL, v10, v11, v12, v13);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::`vftable';
  *(_BYTE *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 552) = sub_180041D90(a1 + 552);
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a4[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a1;
}
