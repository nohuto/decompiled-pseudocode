/*
 * XREFs of ??1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01AEE7C
 * Callers:
 *     ??_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A4F70 (--_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
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
