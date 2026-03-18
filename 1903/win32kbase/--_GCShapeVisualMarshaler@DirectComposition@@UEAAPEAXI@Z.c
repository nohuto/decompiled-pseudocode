/*
 * XREFs of ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A5430
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C000FC38 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

DirectComposition::CShapeVisualMarshaler *__fastcall DirectComposition::CShapeVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CShapeVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CShapeVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
