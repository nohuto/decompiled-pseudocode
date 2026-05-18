/*
 * XREFs of sub_18002E2DC @ 0x18002E2DC
 * Callers:
 *     sub_18002E900 @ 0x18002E900 (sub_18002E900.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002E2DC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *a1 = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  v2 = a1[21];
  if ( v2 )
  {
    a1[21] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[23];
  if ( v3 )
  {
    a1[23] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[22];
  if ( v4 )
  {
    a1[22] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[21];
  if ( v5 )
  {
    a1[21] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = a1[20];
  if ( v6 )
  {
    a1[20] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return sub_18009D5D4(a1);
}
