/*
 * XREFs of ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18003C250
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18008D64C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?ProcessNotifyDirty@CGdiSpriteBitmap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x1800D9614 (-ProcessNotifyDirty@CGdiSpriteBitmap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_NOT.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18003C34C (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18003CFD0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18008D894 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::NotifyDirty(CGdiSpriteBitmap *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx
  void *v8; // r10
  unsigned int v10; // [rsp+30h] [rbp-69h] BYREF
  HRGN hrgn; // [rsp+38h] [rbp-61h] BYREF
  int v12; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v13[7]; // [rsp+48h] [rbp-51h] BYREF
  int *v14; // [rsp+80h] [rbp-19h] BYREF
  int v15; // [rsp+88h] [rbp-11h] BYREF

  v2 = 0;
  hrgn = 0LL;
  v10 = 0;
  memset_0(v13, 0, sizeof(v13));
  v5 = *((_QWORD *)this + 10);
  v13[1] = &hrgn;
  v12 = 56;
  v13[0] = a2;
  if ( (int)CRedirectedGDISurface::GetInformation(v5, 0LL, &v12, v13) >= 0 && hrgn )
  {
    v15 = 0;
    v14 = &v15;
    CRegion::SetHRGN((CRegion *)&v14, hrgn);
    v6 = CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v14, 1);
    v10 = v6;
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802C19A8, 4u, v6, 0xCCu, 0LL);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v14);
  }
  TranslateDXGIorD3DErrorInContext(v2, 12LL, &v10);
  if ( v8 )
    DeleteObject(v8);
  return v10;
}
