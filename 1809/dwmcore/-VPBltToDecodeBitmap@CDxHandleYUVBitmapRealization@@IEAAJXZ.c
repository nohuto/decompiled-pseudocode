/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802296A8
 * Callers:
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180228D40 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRect.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180228EA0 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C5C4 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180228B14 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1802298C8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  struct _LUID v1; // rdx
  unsigned int v3; // ebp
  int D3DDevice; // eax
  __int64 v5; // rcx
  struct CD3DDeviceLevel1 *v6; // r15
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdi
  int v10; // eax
  char v12; // [rsp+20h] [rbp-38h]
  unsigned int v13; // [rsp+20h] [rbp-38h]
  struct CD3DDeviceLevel1 *v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct _LUID)*((_QWORD *)this + 36);
  v14 = 0LL;
  v3 = 87;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v1, &v14);
  v6 = v14;
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v13 = 213;
    goto LABEL_16;
  }
  if ( *((int *)v14 + 185) >= 40960 && IsDXGIColorSpaceRec2020(*((_DWORD *)this + 49)) )
    v3 = 10;
  D3DDevice = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(this);
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v13 = 221;
    goto LABEL_16;
  }
  v8 = *((_QWORD *)this + 18);
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 48LL))(
    this,
    &v14);
  (*(void (__fastcall **)(char *))(v8 + 104))((char *)this + 144);
  D3DDevice = CDecodeBitmap::EnsureTargetBitmap(
                *((_QWORD *)this + 51),
                *((unsigned int *)this + 61),
                *((unsigned int *)this + 62),
                v3);
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v13 = 228;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, D3DDevice, v13);
    goto LABEL_17;
  }
  v9 = *((_QWORD *)this + 51);
  v7 = 0;
  if ( !*(_BYTE *)(v9 + 205) )
  {
    v12 = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, char *, char *))(**(_QWORD **)(v9 + 160)
                                                                                          + 248LL))(
            *(_QWORD *)(v9 + 160),
            *(_QWORD *)(*((_QWORD *)this + 53) + 120LL),
            *((unsigned int *)this + 74),
            *((unsigned int *)this + 49),
            v12,
            (char *)this + 200,
            (char *)this + 252);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v10, 0x30u);
    else
      *(_BYTE *)(v9 + 205) = 1;
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v7, 0xEAu);
LABEL_17:
  if ( v6 )
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v6 + 496));
  return (unsigned int)v7;
}
