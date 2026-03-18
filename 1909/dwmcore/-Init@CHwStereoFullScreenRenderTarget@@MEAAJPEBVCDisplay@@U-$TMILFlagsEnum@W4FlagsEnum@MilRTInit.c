/*
 * XREFs of ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801652C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180048B94 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800E3960 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1801655E0 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Init(CHwStereoFullScreenRenderTarget *this, CDisplay *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  signed int ViewOfTexture; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  _DWORD v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = CHwFullScreenRenderTarget::Init(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x24u, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 96LL))(*((_QWORD *)this + 22));
    v8 = *((_QWORD *)this + 19);
    *((_BYTE *)this + 552) = v7;
    v9 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 67) = v9;
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(v8 + 896),
                      *(struct ID3D11Texture2D **)(v9 + 128),
                      0LL,
                      1u,
                      (struct CD3DSurface **)this + 68);
    v6 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ViewOfTexture, 0x3Au, 0LL);
    }
    else
    {
      v12 = *(_QWORD *)(*((_QWORD *)a2 + 19) + 16LL);
      v15[0] = *((_DWORD *)this + 50);
      v15[1] = *((_DWORD *)this + 64);
      v13 = *((_DWORD *)this + 65);
      *((_QWORD *)this + 70) = v12;
      v15[2] = v13;
      CHwStereoFullScreenRenderTarget::UpdatePixelFormatInfo(this, (const struct PixelFormatInfo *)v15);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_SWAPCHAINCREATEEVENT,
          *((_QWORD *)this + 70));
    }
  }
  return v6;
}
