/*
 * XREFs of sub_1800425C8 @ 0x1800425C8
 * Callers:
 *     sub_1800218F0 @ 0x1800218F0 (sub_1800218F0.c)
 *     sub_180025710 @ 0x180025710 (sub_180025710.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800425C8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  v2 = a1[18];
  if ( v2 )
  {
    a1[18] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800D1624(a1);
}
