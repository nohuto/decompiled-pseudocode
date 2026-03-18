/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x180179C08
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180179C40 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  CGdiSpriteBitmap *v2; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 18);
  if ( v2 )
    CGdiSpriteBitmap::Release(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
