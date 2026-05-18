/*
 * XREFs of sub_180020214 @ 0x180020214
 * Callers:
 *     sub_1800153F0 @ 0x1800153F0 (sub_1800153F0.c)
 * Callees:
 *     sub_180024BB0 @ 0x180024BB0 (sub_180024BB0.c)
 *     sub_18002565C @ 0x18002565C (sub_18002565C.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_18006BD30 @ 0x18006BD30 (sub_18006BD30.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180020214(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  volatile signed __int32 *v6; // rbx
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF

  v8[0] = *a3;
  v8[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18006BD30(a1, a2, v8);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  *(_QWORD *)(a1 + 4136) = 0LL;
  *(_QWORD *)(a1 + 4144) = 0LL;
  *(_QWORD *)(a1 + 4136) = sub_18002565C(a1 + 4136);
  *(_QWORD *)(a1 + 4152) = 0LL;
  *(_QWORD *)(a1 + 4160) = 0LL;
  *(_QWORD *)(a1 + 4152) = sub_18002565C(a1 + 4152);
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
  sub_18011DA98(&unk_180259058, 3LL, "-------------------------------------------------");
  v5 = sub_18006CEC8(a1);
  sub_18011DA98(&unk_180259058, 3LL, "RenderDeviceD3D11 constructor -- RenderDeviceID=%d", v5);
  sub_180026278((void *)(a1 + 112), L"RenderDeviceD3D11");
  sub_180026278((void *)(a1 + 80), L"<detached>");
  *(_QWORD *)(a1 + 4288) = 0LL;
  sub_180024BB0(a1);
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
