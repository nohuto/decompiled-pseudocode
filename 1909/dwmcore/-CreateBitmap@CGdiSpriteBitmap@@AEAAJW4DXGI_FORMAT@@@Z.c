/*
 * XREFs of ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180048CA0
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800492E8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800BE900 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x1800D51C8 (-ProcessUpdateSurface@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_U.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18004889C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x180048F38 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800490D0 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800491F4 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004AEFC (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800CD764 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800CDFC8 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateBitmap(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  bool v6; // zf
  enum DXGI_FORMAT v7; // ecx
  int v8; // edx
  int v9; // edx
  int DeviceBitmap; // eax
  unsigned int v11; // ecx
  __int64 *v12; // r8
  __int64 v13; // rdx
  __int64 **v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int SectionBitmap; // eax
  unsigned int v19; // ecx
  int v20[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  char v22[16]; // [rsp+48h] [rbp-B8h] BYREF
  void *v23; // [rsp+58h] [rbp-A8h]
  unsigned int v24; // [rsp+60h] [rbp-A0h]
  unsigned int v25; // [rsp+64h] [rbp-9Ch]
  int v26; // [rsp+68h] [rbp-98h]
  enum DXGI_FORMAT v27; // [rsp+6Ch] [rbp-94h]
  struct _LUID v28; // [rsp+78h] [rbp-88h]
  void *v29; // [rsp+80h] [rbp-80h]

  v4 = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v21 = 0;
  memset_0(v22, 0, 0x130uLL);
  v5 = *((_QWORD *)this + 10);
  v27 = a2;
  v20[0] = 312;
  if ( (int)CRedirectedGDISurface::GetInformation(v5, 2LL, v20, &v21) < 0 || !v21 )
    return v4;
  v6 = (*((_BYTE *)this + 117) & 1) == 0;
  v7 = v27;
  *((_DWORD *)this + 112) = v26;
  if ( !v6 && *((_BYTE *)this + 416) && v7 == DXGI_FORMAT_B8G8R8X8_UNORM )
    v7 = DXGI_FORMAT_B8G8R8A8_UNORM;
  *((_DWORD *)this + 22) = v7;
  *((_DWORD *)this + 23) = HasAlphaChannel(v7) ? 1 : 3;
  v9 = v8 - 1;
  if ( !v9 )
  {
    CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
    SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap(this, v23, v24, v25);
    v4 = SectionBitmap;
    if ( SectionBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, SectionBitmap, 0x129u, 0LL);
      return v4;
    }
    goto LABEL_12;
  }
  if ( v9 != 1 )
  {
LABEL_12:
    if ( *((_QWORD *)this + 57) )
    {
      v15 = CGdiSpriteBitmap::RegisterForSignaling(this);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x14Bu, 0LL);
    }
    return v4;
  }
  DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, v29, v28, v24, v25);
  v4 = DeviceBitmap;
  if ( DeviceBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DeviceBitmap, 0x136u, 0LL);
    return v4;
  }
  if ( *((_QWORD *)this + 57) )
  {
    if ( (*((_BYTE *)this + 116) & 2) == 0 )
    {
      v12 = (__int64 *)((char *)this + 152);
      v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 184LL;
      v14 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 192LL);
      if ( *v14 != (__int64 *)v13 )
        __fastfail(3u);
      *v12 = v13;
      *((_QWORD *)this + 20) = v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      *((_BYTE *)this + 116) |= 2u;
    }
    v4 = 0;
    goto LABEL_12;
  }
  return v4;
}
