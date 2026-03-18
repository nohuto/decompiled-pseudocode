/*
 * XREFs of ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1802072F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007C730 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180093E68 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1802075F0 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Init(CHwStereoFullScreenRenderTarget *this, CDisplay *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  int ViewOfTexture; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  _DWORD v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = CHwFullScreenRenderTarget::Init(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x26u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 96LL))(*((_QWORD *)this + 30));
    v8 = *((_QWORD *)this + 27);
    *((_BYTE *)this + 616) = v7;
    v9 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 75) = v9;
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(v8 + 864),
                      *(struct ID3D11Texture2D **)(v9 + 128),
                      0LL,
                      1u,
                      (struct CD3DSurface **)this + 76);
    v6 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ViewOfTexture, 0x3Cu);
    }
    else
    {
      v12 = *(_QWORD *)(*((_QWORD *)a2 + 19) + 16LL);
      v15[0] = *((_DWORD *)this + 66);
      v15[1] = *((_DWORD *)this + 80);
      v13 = *((_DWORD *)this + 81);
      *((_QWORD *)this + 78) = v12;
      v15[2] = v13;
      CHwStereoFullScreenRenderTarget::UpdatePixelFormatInfo(this, (const struct PixelFormatInfo *)v15);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_SWAPCHAINCREATEEVENT,
          *((_QWORD *)this + 78));
    }
  }
  return v6;
}
