/*
 * XREFs of ??_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A31E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01B12E0 (--1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSpriteShapeMarshaler *__fastcall DirectComposition::CSpriteShapeMarshaler::`vector deleting destructor'(
        DirectComposition::CSpriteShapeMarshaler *this,
        char a2)
{
  DirectComposition::CSpriteShapeMarshaler::~CSpriteShapeMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
