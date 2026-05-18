/*
 * XREFs of sub_180020104 @ 0x180020104
 * Callers:
 *     sub_180015380 @ 0x180015380 (sub_180015380.c)
 * Callees:
 *     sub_180024AA0 @ 0x180024AA0 (sub_180024AA0.c)
 *     sub_18002554C @ 0x18002554C (sub_18002554C.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180020104(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  volatile signed __int32 *v6; // rbx
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF

  v8[0] = *a3;
  v8[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18006BC20(a1, a2, v8);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  *(_QWORD *)(a1 + 4136) = 0LL;
  *(_QWORD *)(a1 + 4144) = 0LL;
  *(_QWORD *)(a1 + 4136) = sub_18002554C(a1 + 4136);
  *(_QWORD *)(a1 + 4152) = 0LL;
  *(_QWORD *)(a1 + 4160) = 0LL;
  *(_QWORD *)(a1 + 4152) = sub_18002554C(a1 + 4152);
  Mtx_init_in_situ((_Mtx_t)(a1 + 4168), 2);
  *(_QWORD *)(a1 + 4248) = 6LL;
  *(_QWORD *)(a1 + 4256) = 0LL;
  *(_QWORD *)(a1 + 4264) = 0LL;
  *(_QWORD *)(a1 + 4272) = 0LL;
  *(_QWORD *)(a1 + 4280) = 0LL;
  *(_QWORD *)(a1 + 4616) = 0LL;
  *(_QWORD *)(a1 + 4624) = 7LL;
  *(_WORD *)(a1 + 4600) = 0;
  *(_QWORD *)(a1 + 4640) = 0LL;
  sub_18011D988(&unk_180258058, 3LL, "-------------------------------------------------");
  v5 = sub_18006CDB8(a1);
  sub_18011D988(&unk_180258058, 3LL, "RenderDeviceD3D11 constructor -- RenderDeviceID=%d", v5);
  sub_180026168((void *)(a1 + 112), L"RenderDeviceD3D11");
  sub_180026168((void *)(a1 + 80), L"<detached>");
  *(_QWORD *)(a1 + 4288) = 0LL;
  sub_180024AA0(a1);
  v6 = (volatile signed __int32 *)a3[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a1;
}
