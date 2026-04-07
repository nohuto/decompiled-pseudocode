/*
 * XREFs of ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18007E81C
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180023FC0 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180021A4C (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18002407C (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x18007E758 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 */

void __fastcall CButton::UpdateCrossfade(CButton *this)
{
  __int64 v2; // rcx
  float v3; // [rsp+30h] [rbp+8h] BYREF
  float v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 49) + 72LL) || (*((_BYTE *)this + 280) & 0x40) != 0 )
  {
    *((_BYTE *)this + 280) &= ~0x40u;
    CButton::DeactivateTimeline(this, (__int64 *)this + 49);
    CVisual::SetDirtyFlags(this, 0x8000);
  }
  else
  {
    CButton::ComputeFadeValues(this, &v3, &v4);
    CAtlasedImage::SetOpacity(*(CAtlasedImage **)(v2 + 288), v3);
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), v4);
  }
}
