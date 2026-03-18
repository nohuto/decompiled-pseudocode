/*
 * XREFs of ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18015B0CC
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18015B2EC (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18015B5A8 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18008FFC8 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18009004C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::NotifyRenderedRect(__int64 a1, _DWORD *a2, char a3)
{
  double v3; // xmm2_8
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-28h] BYREF

  if ( !a2 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 176) + 168LL))(*(_QWORD *)(a1 + 176), 0LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x972u);
      return v7;
    }
    goto LABEL_8;
  }
  if ( a3 )
    CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, 1, (__int64)a2, &v11);
  else
    v11 = *(_OWORD *)PixelAlign((__int64)v12, a2, v3);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 176) + 168LL))(*(_QWORD *)(a1 + 176), &v11);
  v7 = v5;
  if ( v5 >= 0 )
  {
LABEL_8:
    *(_BYTE *)(a1 + 858) = 1;
    return v7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x96Eu);
  return v7;
}
