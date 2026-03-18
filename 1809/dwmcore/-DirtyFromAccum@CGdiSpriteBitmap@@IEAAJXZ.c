/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x180091978
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x180093504 (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x180093374 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A5348 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x1800A9970 (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  int v7; // [rsp+30h] [rbp-59h] BYREF
  HGDIOBJ ho; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-49h] BYREF
  HGDIOBJ *p_ho; // [rsp+50h] [rbp-39h]
  int *v11; // [rsp+80h] [rbp-9h] BYREF
  int v12; // [rsp+88h] [rbp-1h] BYREF

  v1 = 0;
  ho = 0LL;
  memset_0(v9, 0, 0x38uLL);
  v3 = *((_QWORD *)this + 10);
  p_ho = &ho;
  v7 = 56;
  if ( (int)CRedirectedGDISurface::GetInformation(v3, 0LL, &v7, v9) >= 0 )
  {
    if ( !ho )
      return v1;
    v12 = 0;
    v11 = &v12;
    CRegion::SetHRGN((CRegion *)&v11, (HRGN)ho);
    v4 = CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v11);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x34Bu);
    FastRegion::CRegion::FreeMemory((void **)&v11);
  }
  if ( ho )
    DeleteObject(ho);
  return v1;
}
