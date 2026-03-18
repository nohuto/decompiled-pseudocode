/*
 * XREFs of ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18005B6F4
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180022B7C (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18003F558 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x18005C870 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007C35C (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AF1C0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016E9E0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18016EA90 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRect.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18016F56C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A80AC (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAnd.c)
 */

__int64 __fastcall CHwndRenderTarget::DrawVisualTree(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8)
{
  CDisplay *v10; // rcx
  char v12; // r15
  char v13; // si
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  _DWORD v38[10]; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-41h] BYREF
  struct D2D_RECT_F v40; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-21h] BYREF

  v10 = *(CDisplay **)(a1 + 168);
  v12 = 0;
  v13 = 0;
  if ( v10 )
  {
    if ( CDisplay::HasVirtualModeScale(v10) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1) )
    {
      v19 = *(_QWORD *)(a1 + 848);
      if ( v19 )
        v13 = *(_BYTE *)(v19 + 13439) == 0;
    }
  }
  memset_0(v38, 0, sizeof(v38));
  if ( *(_QWORD *)(a1 + 184) && !*(_BYTE *)(a1 + 860) )
  {
    LOBYTE(v14) = 1;
    v20 = CDrawingContext::PushStereoContext(a2, 1LL, v14);
    v17 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x430u, 0LL);
      return v17;
    }
    v12 = 1;
  }
  if ( v13
    && (v38[0] = 3,
        v38[1] = 6,
        v38[4] = 1,
        v22 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v38, 1),
        v17 = v22,
        v22 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x43Bu, 0LL);
  }
  else
  {
    v15 = CDrawingContext::DrawVisualTree(a2, a4, a5, v13, a6, 0LL, a8, 0);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x446u, 0LL);
    }
    else
    {
      if ( v13 )
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
      if ( v12 )
      {
        v24 = CDrawingContext::PopStereoContext(a2, v39);
        v17 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v24, 0x459u, 0LL);
        }
        else
        {
          if ( *(_BYTE *)(a1 + 862) )
          {
            v39[1] = 0LL;
            v39[0] = 0LL;
          }
          CHwndRenderTarget::RenderTargetRectToDesktopRect(a1, v25, v39, &v40);
          if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a3, &v40)
            || (CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, 1, a3, &v41),
                CDrawingContext::FlushD2D(a2),
                v27 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD *))(**(_QWORD **)(a1 + 184) + 24LL))(
                        *(_QWORD *)(a1 + 184),
                        &v41,
                        v39),
                v17 = v27,
                v27 >= 0) )
          {
            if ( !IsEmpty(&v40) )
            {
              v29 = CDrawingContext::PushStereoContext(a2, 2LL, 0LL);
              v17 = v29;
              if ( v29 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x491u, 0LL);
              }
              else
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                  McTemplateU0(
                    &Microsoft_Windows_Dwm_Core_Provider_Context,
                    &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Start);
                if ( v13
                  && (v31 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v38, 1),
                      v17 = v31,
                      v31 < 0) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x497u, 0LL);
                }
                else
                {
                  v33 = CDrawingContext::DrawVisualTree(a2, a4, a5, v13, a6, 0LL, a8, 0);
                  v17 = v33;
                  if ( v33 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x4A2u, 0LL);
                  }
                  else
                  {
                    if ( v13 )
                      CDrawingContext::PopRenderOptionsInternal(a2, 1);
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                      McTemplateU0(
                        &Microsoft_Windows_Dwm_Core_Provider_Context,
                        &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Stop);
                    v35 = CDrawingContext::PopStereoContext(a2, 0LL);
                    v17 = v35;
                    if ( v35 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x4ABu, 0LL);
                  }
                }
              }
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x484u, 0LL);
          }
        }
      }
    }
  }
  return v17;
}
