/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800D3BF0
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800491F4 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x180048F38 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180061E70 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18006B304 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  unsigned int *v4; // r8
  signed int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-59h] BYREF
  HGDIOBJ ho; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-49h] BYREF
  HGDIOBJ *p_ho; // [rsp+50h] [rbp-39h]
  int *v12; // [rsp+80h] [rbp-9h] BYREF
  int v13; // [rsp+88h] [rbp-1h] BYREF

  v1 = 0;
  ho = 0LL;
  memset_0(v10, 0, 0x38uLL);
  v3 = *((_QWORD *)this + 10);
  p_ho = &ho;
  v8 = 56;
  if ( (int)CRedirectedGDISurface::GetInformation(v3, 0, &v8, (__int64)v10) >= 0 )
  {
    if ( !ho )
      return v1;
    v13 = 0;
    v12 = &v13;
    CRegion::SetHRGN((CRegion *)&v12, (HRGN)ho, v4);
    v5 = CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v12, (*((_BYTE *)this + 116) & 0x40) != 0);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x339u, 0LL);
    FastRegion::CRegion::FreeMemory((void **)&v12);
  }
  if ( ho )
    DeleteObject(ho);
  return v1;
}
