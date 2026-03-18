/*
 * XREFs of ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1801695E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DBitmap::SetAlphaMode(CD2DBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  if ( *((_DWORD *)this + 29) != a2 )
  {
    *((_DWORD *)this + 29) = a2;
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 6);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 7);
  }
}
