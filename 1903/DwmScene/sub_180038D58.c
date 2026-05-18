/*
 * XREFs of sub_180038D58 @ 0x180038D58
 * Callers:
 *     sub_180038DE0 @ 0x180038DE0 (sub_180038DE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180038D58(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  v2 = a1[15];
  if ( v2 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800D2FD8(a1);
}
