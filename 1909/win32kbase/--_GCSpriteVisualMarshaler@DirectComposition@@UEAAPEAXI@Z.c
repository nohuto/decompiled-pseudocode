/*
 * XREFs of ??_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0010350
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0010C08 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CSpriteVisualMarshaler *__fastcall DirectComposition::CSpriteVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CSpriteVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSpriteVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
