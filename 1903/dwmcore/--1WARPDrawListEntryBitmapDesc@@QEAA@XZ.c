/*
 * XREFs of ??1WARPDrawListEntryBitmapDesc@@QEAA@XZ @ 0x1801AF370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc(WARPDrawListEntryBitmapDesc *this)
{
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this);
}
