/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802648F8
 * Callers:
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180263F90 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRect.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180264100 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180042D00 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180263D44 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x180264AF4 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  struct _LUID v1; // rdx
  unsigned int v3; // r15d
  signed int D3DDevice; // eax
  __int64 v5; // rcx
  struct CD3DDeviceLevel1 *v6; // r13
  signed int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rdi
  signed int v11; // eax
  char v13; // [rsp+20h] [rbp-58h]
  unsigned int v14; // [rsp+20h] [rbp-58h]
  struct CD3DDeviceLevel1 *v15; // [rsp+80h] [rbp+8h] BYREF

  v1 = (struct _LUID)*((_QWORD *)this + 36);
  v15 = 0LL;
  v3 = 87;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v1, &v15);
  v6 = v15;
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v14 = 216;
    goto LABEL_16;
  }
  if ( *((int *)v15 + 185) >= 40960 && IsDXGIColorSpaceRec2020(*((_DWORD *)this + 49)) )
    v3 = 10;
  D3DDevice = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(this);
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v14 = 224;
    goto LABEL_16;
  }
  v8 = *((_QWORD *)this + 51);
  v9 = *((_QWORD *)this + 18);
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 48LL))(
    this,
    &v15);
  (*(void (__fastcall **)(char *))(v9 + 104))((char *)this + 144);
  D3DDevice = CDecodeBitmap::EnsureTargetBitmap(v8, *((unsigned int *)this + 61), *((unsigned int *)this + 62), v3);
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v14 = 231;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, D3DDevice, v14, 0LL);
    goto LABEL_17;
  }
  v10 = *((_QWORD *)this + 51);
  v7 = 0;
  if ( !*(_BYTE *)(v10 + 205) )
  {
    v13 = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, char *, int, char *))(**(_QWORD **)(v10 + 160)
                                                                                               + 248LL))(
            *(_QWORD *)(v10 + 160),
            *(_QWORD *)(*((_QWORD *)this + 53) + 120LL),
            *((unsigned int *)this + 74),
            *((unsigned int *)this + 49),
            v13,
            (char *)this + 200,
            1,
            (char *)this + 252);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v11, 0x2Fu, 0LL);
    else
      *(_BYTE *)(v10 + 205) = 1;
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v7, 0xF4u, 0LL);
LABEL_17:
  if ( v6 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v6 + 496));
  return (unsigned int)v7;
}
