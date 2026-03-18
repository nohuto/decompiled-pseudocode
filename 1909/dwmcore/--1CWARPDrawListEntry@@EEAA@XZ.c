/*
 * XREFs of ??1CWARPDrawListEntry@@EEAA@XZ @ 0x1801B90B4
 * Callers:
 *     ??_GCWARPDrawListEntry@@EEAAPEAXI@Z @ 0x1801B9170 (--_GCWARPDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CWARPDrawListEntry::~CWARPDrawListEntry(CWARPDrawListEntry *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 280);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 25);
  wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)this + 17);
}
