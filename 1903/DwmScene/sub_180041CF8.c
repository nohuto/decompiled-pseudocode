/*
 * XREFs of sub_180041CF8 @ 0x180041CF8
 * Callers:
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041CF8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  v2 = a1[23];
  if ( v2 )
  {
    a1[23] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_18009EF84(a1);
}
