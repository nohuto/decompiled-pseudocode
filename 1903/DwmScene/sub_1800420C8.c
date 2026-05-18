/*
 * XREFs of sub_1800420C8 @ 0x1800420C8
 * Callers:
 *     sub_1800218C0 @ 0x1800218C0 (sub_1800218C0.c)
 *     sub_180025700 @ 0x180025700 (sub_180025700.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800420C8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  v2 = a1[13];
  if ( v2 )
  {
    a1[13] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return sub_1800CE980(a1);
}
