/*
 * XREFs of ??1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01ACEDC
 * Callers:
 *     ??_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2CB0 (--_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CCompositionCubeMapMarshaler::~CCompositionCubeMapMarshaler(
        DirectComposition::CCompositionCubeMapMarshaler *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
}
