/*
 * XREFs of ??_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A4FE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01B03A8 (--1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCompositionMipmapSurfaceMarshaler *__fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        char a2)
{
  DirectComposition::CCompositionMipmapSurfaceMarshaler::~CCompositionMipmapSurfaceMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
