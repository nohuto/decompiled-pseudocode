/*
 * XREFs of ??_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2CB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01ACEDC (--1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ.c)
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
