/*
 * XREFs of ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180202500
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18009845C (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 */

void __fastcall CD2DBitmap::SetAlphaMode(CD2DBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  if ( *((_DWORD *)this + 29) != a2 )
  {
    *((_DWORD *)this + 29) = a2;
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 6);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 7);
    CD2DBitmap::InitializeBitmaps((CD2DBitmap *)((char *)this - 104));
  }
}
