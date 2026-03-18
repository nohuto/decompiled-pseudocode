/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C5CC (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B068 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180160094 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180160760 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180177458 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18004BE94 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800643B0 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18017A024 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this)
{
  int v2; // r15d
  int v3; // eax
  int v4; // r14d
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  unsigned int i; // esi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int j; // esi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 result; // rax
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  __int64 v46; // rsi
  unsigned int v47; // ecx
  unsigned __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rsi
  unsigned int v51; // edx
  unsigned int v52; // ecx
  unsigned __int64 v53; // rax
  SIZE_T v54; // r8
  LPVOID v55; // rdi
  int v56; // r9d
  SIZE_T v57; // r8
  LPVOID v58; // rdi
  int v59; // r9d
  __int64 v60; // rcx
  SIZE_T v61; // r8
  LPVOID v62; // rdi
  int v63; // r9d
  SIZE_T v64; // r8
  LPVOID v65; // rsi
  int v66; // r9d
  SIZE_T v67; // r8
  LPVOID v68; // rsi
  int v69; // r9d
  SIZE_T v70; // r8
  LPVOID v71; // rdi
  __int64 v72; // [rsp+60h] [rbp+8h] BYREF

  *((_QWORD *)this + 787) = 0LL;
  v2 = 0;
  *((_DWORD *)this + 112) = 0;
  v3 = *((_DWORD *)this + 114);
  v4 = -2147024882;
  v5 = 64LL;
  if ( v3 != 10 )
  {
    v6 = v3 + 1;
    goto LABEL_3;
  }
  v45 = *((_DWORD *)this + 118);
  v46 = 64LL;
  v47 = -1;
  if ( v45 > 0x40 )
    v46 = v45;
  v48 = 3 * v46;
  if ( (unsigned __int64)(3 * v46) <= 0xFFFFFFFF )
    v47 = 3 * v46;
  if ( v48 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v48 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v47 <= *((_DWORD *)this + 113) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v46 <= 0x10 )
    {
      v56 = -2147024809;
    }
    else
    {
      v54 = 16LL * (unsigned int)v46;
      if ( !v54 )
        v54 = 1LL;
      v55 = HeapAlloc(WPF::g_processHeap, 0, v54);
      if ( v55 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 58));
        *((_QWORD *)this + 58) = v55;
        *((_DWORD *)this + 113) = v46;
        goto LABEL_71;
      }
      v56 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v56, 0x100u);
  }
LABEL_71:
  *((_DWORD *)this + 118) = 0;
  v6 = 0;
LABEL_3:
  *((_DWORD *)this + 114) = v6;
  v7 = 8LL;
  *((_DWORD *)this + 120) = 0;
  v8 = *((_DWORD *)this + 122);
  if ( v8 == 8 )
  {
    v31 = *((_DWORD *)this + 126);
    v32 = 8LL;
    v33 = -1;
    if ( v31 > 8 )
      v32 = v31;
    v34 = v32;
    v35 = 3 * v32;
    if ( (unsigned __int64)(3 * v32) <= 0xFFFFFFFF )
      v33 = 3 * v32;
    if ( v35 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v35 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
    else if ( v33 <= *((_DWORD *)this + 121) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 <= 0x44 )
      {
        v59 = -2147024809;
      }
      else
      {
        v57 = 68LL * (unsigned int)v32;
        if ( !v57 )
          v57 = 1LL;
        v58 = HeapAlloc(WPF::g_processHeap, 0, v57);
        if ( v58 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 62));
          *((_QWORD *)this + 62) = v58;
          *((_DWORD *)this + 121) = v32;
          goto LABEL_47;
        }
        v59 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v59, 0x100u);
    }
LABEL_47:
    *((_DWORD *)this + 126) = 0;
    v9 = 0;
    goto LABEL_5;
  }
  v9 = v8 + 1;
LABEL_5:
  *((_DWORD *)this + 122) = v9;
  *((_DWORD *)this + 128) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 512);
  while ( *((_DWORD *)this + 142) )
    CDrawingContext::PopLayerInternal(this);
  for ( i = 0; i < *((_DWORD *)this + 174); ++i )
  {
    v60 = *(_QWORD *)(*((_QWORD *)this + 84) + 16LL * i);
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  }
  *((_DWORD *)this + 174) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 672, 16LL);
  v11 = *((_QWORD *)this + 97);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *((_QWORD *)this + 97) = 0LL;
  }
  *((_DWORD *)this + 220) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 856, 8LL);
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 244) = 0;
  v12 = *((_DWORD *)this + 246);
  if ( v12 != 10 )
  {
    v13 = v12 + 1;
    goto LABEL_12;
  }
  v49 = *((_DWORD *)this + 250);
  v50 = 64LL;
  v51 = -1;
  if ( v49 > 0x40 )
    v50 = v49;
  v52 = v50;
  v53 = 3 * v50;
  if ( (unsigned __int64)(3 * v50) <= 0xFFFFFFFF )
    v51 = 3 * v50;
  if ( v53 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v53 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v51 <= *((_DWORD *)this + 245) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v50 <= 0x1C )
    {
      v63 = -2147024809;
    }
    else
    {
      v61 = 28LL * (unsigned int)v50;
      if ( !v61 )
        v61 = 1LL;
      v62 = HeapAlloc(WPF::g_processHeap, 0, v61);
      if ( v62 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 124));
        *((_QWORD *)this + 124) = v62;
        *((_DWORD *)this + 245) = v50;
        goto LABEL_78;
      }
      v63 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v63, 0x100u);
  }
LABEL_78:
  *((_DWORD *)this + 250) = 0;
  v13 = 0;
LABEL_12:
  *((_DWORD *)this + 246) = v13;
  *((_DWORD *)this + 258) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1008, 80LL);
  *((_DWORD *)this + 808) = 0;
  v15 = *((_DWORD *)this + 810);
  if ( v15 != 8 )
  {
    v16 = v15 + 1;
    goto LABEL_14;
  }
  v36 = *((_DWORD *)this + 814);
  v14 = 0xFFFFFFFFLL;
  if ( v36 > 8 )
    v7 = v36;
  v37 = 3 * v7;
  if ( (unsigned __int64)(3 * v7) <= 0xFFFFFFFF )
    v14 = (unsigned int)v37;
  if ( v37 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v37 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( (unsigned int)v14 <= *((_DWORD *)this + 809) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 0x10 )
    {
      v66 = -2147024809;
    }
    else
    {
      v64 = 16LL * (unsigned int)v7;
      if ( !v64 )
        v64 = 1LL;
      v65 = HeapAlloc(WPF::g_processHeap, 0, v64);
      if ( v65 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 406));
        *((_QWORD *)this + 406) = v65;
        *((_DWORD *)this + 809) = v7;
        goto LABEL_54;
      }
      v66 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v66, 0x100u);
  }
LABEL_54:
  *((_DWORD *)this + 814) = 0;
  v16 = 0;
LABEL_14:
  *((_DWORD *)this + 810) = v16;
  for ( j = 0; j < *((_DWORD *)this + 466); ++j )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v14,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 230) + 136LL * j));
  *((_DWORD *)this + 466) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1840, 136LL);
  *((_DWORD *)this + 816) = 0;
  v18 = *((_DWORD *)this + 818);
  if ( v18 != 10 )
  {
    v19 = v18 + 1;
    goto LABEL_17;
  }
  v38 = *((_DWORD *)this + 822);
  v39 = 64LL;
  if ( v38 > 0x40 )
    v39 = v38;
  v40 = 3 * v39;
  if ( (unsigned __int64)(3 * v39) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v40 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else
  {
    v41 = 3 * v39;
    if ( (unsigned int)v40 <= *((_DWORD *)this + 817) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v39 <= 4 )
      {
        v69 = -2147024809;
      }
      else
      {
        v67 = 4LL * (unsigned int)v39;
        if ( !v67 )
          v67 = 1LL;
        v68 = HeapAlloc(WPF::g_processHeap, 0, v67);
        if ( v68 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 410));
          *((_QWORD *)this + 410) = v68;
          *((_DWORD *)this + 817) = v39;
          goto LABEL_59;
        }
        v69 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v69, 0x100u);
    }
  }
LABEL_59:
  *((_DWORD *)this + 822) = 0;
  v19 = 0;
LABEL_17:
  *((_DWORD *)this + 818) = v19;
  *((_DWORD *)this + 870) = 0;
  v20 = *((_DWORD *)this + 872);
  if ( v20 != 10 )
  {
    v21 = v20 + 1;
    goto LABEL_19;
  }
  v42 = *((_DWORD *)this + 876);
  if ( v42 > 0x40 )
    v5 = v42;
  v43 = 3 * v5;
  if ( (unsigned __int64)(3 * v5) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v43 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else
  {
    v44 = 3 * v5;
    if ( (unsigned int)v43 <= *((_DWORD *)this + 871) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v5 <= 0x10 )
      {
        v4 = -2147024809;
      }
      else
      {
        v70 = 16LL * (unsigned int)v5;
        if ( !v70 )
          v70 = 1LL;
        v71 = HeapAlloc(WPF::g_processHeap, 0, v70);
        if ( v71 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 437));
          *((_QWORD *)this + 437) = v71;
          *((_DWORD *)this + 871) = v5;
          goto LABEL_64;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v4, 0x100u);
    }
  }
LABEL_64:
  *((_DWORD *)this + 876) = 0;
  v21 = 0;
LABEL_19:
  *((_DWORD *)this + 872) = v21;
  *((_DWORD *)this + 824) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 3296);
  if ( *((_QWORD *)this + 44) )
  {
    v22 = *((_QWORD *)this + 48);
    v72 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, (char *)this + 8, &v72);
    v2 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x23BBu);
    if ( g_LockAndReadD2DTarget )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 44) + 216LL))(
        *((_QWORD *)this + 44),
        0LL,
        0LL);
    v25 = *((_QWORD *)this + 44);
    if ( v25 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      *((_QWORD *)this + 44) = 0LL;
    }
    v26 = *((_QWORD *)this + 46);
    if ( v26 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      *((_QWORD *)this + 46) = 0LL;
    }
    v27 = v72;
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    *((_BYTE *)this + 6345) = 1;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v2, 0x1DDu);
  }
  v28 = *((_QWORD *)this + 48);
  if ( v28 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    *((_QWORD *)this + 48) = 0LL;
  }
  v29 = *((_QWORD *)this + 465);
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    *((_QWORD *)this + 465) = 0LL;
  }
  *((_BYTE *)this + 6348) = 0;
  if ( !*((_QWORD *)this + 45) && !*((_QWORD *)this + 787) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
  result = (unsigned int)v2;
  *((_QWORD *)this + 439) = 0LL;
  return result;
}
