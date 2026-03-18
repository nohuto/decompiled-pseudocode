/*
 * XREFs of ??_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00969E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0010C08 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CLayerVisualMarshaler *__fastcall DirectComposition::CLayerVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CLayerVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLayerVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
