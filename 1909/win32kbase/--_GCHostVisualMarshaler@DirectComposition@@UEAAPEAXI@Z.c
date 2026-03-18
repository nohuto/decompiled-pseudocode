/*
 * XREFs of ??_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00853B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0010C08 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CHostVisualMarshaler *__fastcall DirectComposition::CHostVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CHostVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CHostVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
