/*
 * XREFs of ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1800C2160
 * Callers:
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180165120 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180048B94 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetFrontBufferSurface(
        _QWORD *a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  _QWORD *v6; // rbx
  struct CD3DSurface *v7; // rcx
  unsigned int v8; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ID3D11Texture2D **); // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int ViewOfTexture; // eax
  __int64 v14; // rcx
  struct ID3D11Texture2D *v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  if ( a3 && (v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct ID3D11Texture2D **))a1[63]) != 0LL )
  {
    v11 = (**v10)(v10, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v15);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x35Eu, 0LL);
    }
    else
    {
      ViewOfTexture = CD3DSurface::CreateViewOfTexture((struct CD3DResourceManager *)(a1[19] + 896LL), v15, 0LL, 0, a4);
      v8 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, ViewOfTexture, 0x36Au, 0LL);
    }
  }
  else
  {
    v6 = (_QWORD *)a1[22];
    v7 = *(struct CD3DSurface **)(v6[48] + 8LL * (*(unsigned int (__fastcall **)(_QWORD *))(*v6 + 360LL))(v6));
    *a4 = v7;
    (**(void (__fastcall ***)(struct CD3DSurface *))v7)(v7);
    v8 = 0;
  }
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v15->lpVtbl->Release)(v15);
  return v8;
}
