/*
 * XREFs of ??_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0168030
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0171BE4 (--1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCompositionCubeMapMarshaler *__fastcall DirectComposition::CCompositionCubeMapMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        char a2)
{
  DirectComposition::CCompositionCubeMapMarshaler::~CCompositionCubeMapMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
