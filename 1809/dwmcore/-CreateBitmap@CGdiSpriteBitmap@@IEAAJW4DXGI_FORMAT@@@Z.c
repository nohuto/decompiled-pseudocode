/*
 * XREFs of ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180092F84
 * Callers:
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18005EFD0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x1800769A0 (-ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x180092F48 (-EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 * Callees:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x180091A50 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x1800925F0 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093130 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x180093374 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x180093504 (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18009445C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x18009DDC4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateBitmap(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  enum DXGI_FORMAT v6; // ecx
  int DeviceBitmap; // eax
  unsigned int v8; // ecx
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 **v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  int SectionBitmap; // eax
  unsigned int v16; // ecx
  int v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  char v19[16]; // [rsp+48h] [rbp-B8h] BYREF
  void *v20; // [rsp+58h] [rbp-A8h]
  unsigned int v21; // [rsp+60h] [rbp-A0h]
  unsigned int v22; // [rsp+64h] [rbp-9Ch]
  int v23; // [rsp+68h] [rbp-98h]
  enum DXGI_FORMAT v24; // [rsp+6Ch] [rbp-94h]
  struct _LUID v25; // [rsp+78h] [rbp-88h]
  void *v26; // [rsp+80h] [rbp-80h]

  v4 = 0;
  v18 = 0;
  memset_0(v19, 0, 0x130uLL);
  v5 = *((_QWORD *)this + 10);
  v17[0] = 312;
  v24 = a2;
  if ( (int)CRedirectedGDISurface::GetInformation(v5, 2LL, v17, &v18) < 0 || !v18 )
  {
    CGdiSpriteBitmap::ReleaseBitmapResources(this);
    return v4;
  }
  v6 = v24;
  *((_DWORD *)this + 112) = v23;
  if ( *((char *)this + 116) < 0 && *((_BYTE *)this + 416) && v6 == DXGI_FORMAT_B8G8R8X8_UNORM )
    v6 = DXGI_FORMAT_B8G8R8A8_UNORM;
  *((_DWORD *)this + 22) = v6;
  *((_DWORD *)this + 23) = (unsigned int)HasAlphaChannel(v6) != 0 ? 1 : 3;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  if ( v18 == 1 )
  {
    CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
    SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap((HANDLE *)this, v20, v21, v22);
    v4 = SectionBitmap;
    if ( SectionBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, SectionBitmap, 0x122u);
      return v4;
    }
    goto LABEL_12;
  }
  if ( v18 != 2 )
  {
LABEL_12:
    if ( *((_QWORD *)this + 57) )
    {
      v12 = CGdiSpriteBitmap::RegisterForSignaling(this);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x144u);
    }
    return v4;
  }
  DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, v26, v25, v21, v22);
  v4 = DeviceBitmap;
  if ( DeviceBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DeviceBitmap, 0x12Fu);
    return v4;
  }
  if ( *((_QWORD *)this + 57) )
  {
    if ( (*((_BYTE *)this + 116) & 2) == 0 )
    {
      v9 = (__int64 *)((char *)this + 152);
      v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 176LL;
      v11 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 184LL);
      if ( *v11 != (__int64 *)v10 )
        __fastfail(3u);
      *v9 = v10;
      *((_QWORD *)this + 20) = v11;
      *v11 = v9;
      *(_QWORD *)(v10 + 8) = v9;
      *((_BYTE *)this + 116) |= 2u;
    }
    v4 = 0;
    goto LABEL_12;
  }
  return v4;
}
