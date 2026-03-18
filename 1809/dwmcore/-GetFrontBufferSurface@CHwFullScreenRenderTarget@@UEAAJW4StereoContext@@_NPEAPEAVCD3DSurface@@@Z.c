/*
 * XREFs of ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180067F20
 * Callers:
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180207150 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 * Callees:
 *     ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x180067F84 (-GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180093E68 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetFrontBufferSurface(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int LogicalFrontBuffer; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ID3D11Texture2D **); // rcx
  int v11; // eax
  unsigned int v12; // ecx
  int ViewOfTexture; // eax
  unsigned int v14; // ecx
  struct ID3D11Texture2D *v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  if ( a3 && (v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **))(a1 + 568)) != 0LL )
  {
    v11 = (**v10)(v10, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v15);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x321u);
    }
    else
    {
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                        (struct CD3DResourceManager *)(*(_QWORD *)(a1 + 216) + 864LL),
                        v15,
                        0LL,
                        0,
                        a4);
      v8 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, ViewOfTexture, 0x32Du);
    }
  }
  else
  {
    LogicalFrontBuffer = CSwapChainBase::GetLogicalFrontBuffer(*(CSwapChainBase **)(a1 + 240), a4);
    v8 = LogicalFrontBuffer;
    if ( LogicalFrontBuffer < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, LogicalFrontBuffer, 0x331u);
  }
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v15->lpVtbl->Release)(v15);
  return v8;
}
