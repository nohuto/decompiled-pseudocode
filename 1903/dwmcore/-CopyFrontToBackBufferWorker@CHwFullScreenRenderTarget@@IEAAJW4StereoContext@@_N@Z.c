/*
 * XREFs of ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18008CF88
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18008CF70 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801663F0 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x18008D1A8 (-CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18008EBF8 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021BE8C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(_DWORD *a1, unsigned int a2, char a3)
{
  int v3; // eax
  _DWORD *v7; // rax
  unsigned int v8; // edi
  __int64 (__fastcall *v10)(_DWORD *, struct CD3DSurface **); // rsi
  int v11; // eax
  __int64 (__fastcall *v12)(_DWORD *, _QWORD, _QWORD, struct CD3DSurface **); // rdi
  unsigned int RectangleCount; // edi
  unsigned int v14; // esi
  unsigned int v15; // r14d
  const struct CRegion *v16; // r10
  unsigned int v17; // eax
  unsigned int v18; // r15d
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct CD3DSurface *v22; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DSurface *v23; // [rsp+78h] [rbp+48h] BYREF

  v3 = a1[67];
  v23 = 0LL;
  v22 = 0LL;
  if ( (v3 & 0x408) == 0x408
    && !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 304LL))(a1)
    && a1[56] > 1u
    && (**((_DWORD **)a1 + 43) || **((_DWORD **)a1 + 52)) )
  {
    v10 = *(__int64 (__fastcall **)(_DWORD *, struct CD3DSurface **))(*((_QWORD *)a1 + 18) + 536LL);
    if ( v23 )
      (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v23 + 8LL))(v23);
    v11 = v10(a1 + 36, &v23);
    v8 = v11;
    if ( v11 < 0 )
    {
      v19 = 722LL;
    }
    else
    {
      v12 = *(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, struct CD3DSurface **))(*(_QWORD *)a1 + 264LL);
      if ( v22 )
        (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v22 + 8LL))(v22);
      v11 = v12(a1, a2, 0LL, &v22);
      v8 = v11;
      if ( v11 >= 0 )
      {
        if ( g_LockAndReadCopyOfSwapChainBuffers )
          DebugInspectTexture(*((struct ID3D11Texture2D **)v22 + 16), 0);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
        RectangleCount = 0;
        v14 = 0;
        if ( **((_DWORD **)a1 + 43) )
        {
          RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 86));
          v14 = CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
                  (CHwFullScreenRenderTarget *)a1,
                  v22,
                  (const struct CRegion *)(a1 + 86),
                  v23);
        }
        if ( a1[56] == 3 && **((_DWORD **)a1 + 52) )
        {
          v15 = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 104));
          v17 = CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
                  (CHwFullScreenRenderTarget *)a1,
                  v22,
                  v16,
                  v23);
          v18 = v17;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFERDELTAEVENT,
              v15,
              v17);
          RectangleCount += v15;
          v14 += v18;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qq(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
            RectangleCount,
            v14);
        if ( g_LockAndReadCopyOfSwapChainBuffers )
          DebugInspectTexture(*((struct ID3D11Texture2D **)v23 + 16), 0);
        goto LABEL_6;
      }
      v19 = 725LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
      (const char *)(unsigned int)v11,
      v20);
    goto LABEL_11;
  }
LABEL_6:
  if ( a3 )
  {
    if ( a1[56] == 3 )
      v7 = (_DWORD *)*((_QWORD *)a1 + 52);
    else
      v7 = (_DWORD *)*((_QWORD *)a1 + 43);
    *v7 = 0;
  }
  v8 = 0;
LABEL_11:
  if ( v22 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v22 + 8LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v23 + 8LL))(v23);
  return v8;
}
