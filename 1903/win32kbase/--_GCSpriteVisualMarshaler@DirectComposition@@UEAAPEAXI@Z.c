/*
 * XREFs of ??_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C000FC38 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

DirectComposition::CSpriteVisualMarshaler *__fastcall DirectComposition::CSpriteVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CSpriteVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSpriteVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
