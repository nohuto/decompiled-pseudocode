/*
 * XREFs of sub_1800421D8 @ 0x1800421D8
 * Callers:
 *     sub_1800219D0 @ 0x1800219D0 (sub_1800219D0.c)
 *     sub_180025810 @ 0x180025810 (sub_180025810.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800421D8(_QWORD *a1)
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
  return sub_1800CEA90(a1);
}
