/*
 * XREFs of ??1WARPDrawListEntryBitmapDesc@@QEAA@XZ @ 0x180181A90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc(WARPDrawListEntryBitmapDesc *this)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this);
}
