/*
 * XREFs of ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800905E8
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x1800905D0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x180206CC0 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x180090804 (-CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800AB504 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(_DWORD *a1, unsigned int a2, char a3)
{
  int v3; // eax
  _DWORD *v7; // rax
  unsigned int v8; // edi
  struct CD3DSurface *v10; // rcx
  int v11; // eax
  struct CD3DSurface *v12; // rcx
  unsigned int RectangleCount; // edi
  unsigned int v14; // esi
  unsigned int v15; // r14d
  const struct CRegion *v16; // r10
  unsigned int v17; // eax
  unsigned int v18; // r15d
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct CD3DSurface *v22; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DSurface *v23; // [rsp+88h] [rbp+58h] BYREF

  v3 = a1[83];
  v23 = 0LL;
  v22 = 0LL;
  if ( (v3 & 0x408) == 0x408
    && !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 304LL))(a1)
    && a1[72] > 1u
    && (**((_DWORD **)a1 + 51) || **((_DWORD **)a1 + 60)) )
  {
    v10 = v23;
    v23 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = (*(__int64 (__fastcall **)(_DWORD *, struct CD3DSurface **))(*((_QWORD *)a1 + 26) + 528LL))(a1 + 52, &v23);
    v8 = v11;
    if ( v11 < 0 )
    {
      v19 = 661LL;
    }
    else
    {
      v12 = v22;
      v22 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v12 + 8LL))(v12);
      v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, struct CD3DSurface **))(*(_QWORD *)a1 + 264LL))(
              a1,
              a2,
              0LL,
              &v22);
      v8 = v11;
      if ( v11 >= 0 )
      {
        if ( g_LockAndReadCopyOfSwapChainBuffers )
          DebugInspectTexture(*((struct ID3D11Texture2D **)v22 + 16), 0);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
        RectangleCount = 0;
        v14 = 0;
        if ( **((_DWORD **)a1 + 51) )
        {
          RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 102));
          v14 = CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
                  (CHwFullScreenRenderTarget *)a1,
                  v22,
                  (const struct CRegion *)(a1 + 102),
                  v23);
        }
        if ( a1[72] == 3 && **((_DWORD **)a1 + 60) )
        {
          v15 = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 120));
          v17 = CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
                  (CHwFullScreenRenderTarget *)a1,
                  v22,
                  v16,
                  v23);
          v18 = v17;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFERDELTAEVENT,
              v15,
              v17);
          RectangleCount += v15;
          v14 += v18;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
            RectangleCount,
            v14);
        if ( g_LockAndReadCopyOfSwapChainBuffers )
          DebugInspectTexture(*((struct ID3D11Texture2D **)v23 + 16), 0);
        goto LABEL_6;
      }
      v19 = 664LL;
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
    if ( a1[72] == 3 )
      v7 = (_DWORD *)*((_QWORD *)a1 + 60);
    else
      v7 = (_DWORD *)*((_QWORD *)a1 + 51);
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
