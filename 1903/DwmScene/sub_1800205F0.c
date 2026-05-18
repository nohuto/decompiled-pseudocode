/*
 * XREFs of sub_1800205F0 @ 0x1800205F0
 * Callers:
 *     sub_180021860 @ 0x180021860 (sub_180021860.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800205F0(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = -2LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  v2 = sub_18006CDB8(a1);
  sub_18011D988(&unk_180258058, 3LL, "RenderDeviceD3D11 destructor -- RenderDeviceID=%d", v2);
  sub_18011D988(&unk_180258058, 3LL, "-------------------------------------------------");
  v3 = *(_QWORD *)(a1 + 4640);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 4640) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  unknown_libname_116((__int64 *)(a1 + 4600));
  v4 = *(_QWORD *)(a1 + 4280);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 4280) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 4272);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 4272) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)(a1 + 4264);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 4264) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(a1 + 4256);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 4256) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 4168));
  sub_180026554(a1 + 4152, v9, **(_QWORD **)(a1 + 4152), *(_QWORD *)(a1 + 4152));
  j_j__o_free(*(_QWORD *)(a1 + 4152));
  sub_180026554(a1 + 4136, v9, **(_QWORD **)(a1 + 4136), *(_QWORD *)(a1 + 4136));
  j_j__o_free(*(_QWORD *)(a1 + 4136));
  return sub_18006C250(a1);
}
