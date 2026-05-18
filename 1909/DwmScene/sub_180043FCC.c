/*
 * XREFs of sub_180043FCC @ 0x180043FCC
 * Callers:
 *     sub_180044050 @ 0x180044050 (sub_180044050.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043FCC(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  v2 = a1[13];
  if ( v2 )
  {
    a1[13] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800CDC40(a1);
}
