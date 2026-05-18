/*
 * XREFs of sub_1800426D8 @ 0x1800426D8
 * Callers:
 *     sub_180021A00 @ 0x180021A00 (sub_180021A00.c)
 *     sub_180025820 @ 0x180025820 (sub_180025820.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800426D8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  v2 = a1[18];
  if ( v2 )
  {
    a1[18] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800D1734(a1);
}
