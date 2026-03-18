/*
 * XREFs of ??_ECCrossChannelParentVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0004830
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0019C9C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CCrossChannelParentVisualMarshaler *__fastcall DirectComposition::CCrossChannelParentVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        char a2)
{
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
