/*
 * XREFs of ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A9370
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180170170 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRect.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180170C4C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A94C4 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTop(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        bool a4)
{
  double v4; // xmm2_8
  char v5; // bp
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx

  v5 = 0;
  if ( !*((_QWORD *)this + 23)
    || *((_BYTE *)this + 860)
    || (v5 = 1, v10 = CDrawingContext::PushStereoContext((__int64)a2, 1, 0), v12 = v10, v10 >= 0) )
  {
    v13 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA65u, 0LL);
    }
    else if ( v5 )
    {
      v15 = CDrawingContext::PopStereoContext((__int64)a2, 0LL, v4);
      v12 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xA6Bu, 0LL);
      }
      else
      {
        v17 = CDrawingContext::PushStereoContext((__int64)a2, 2, 0);
        v12 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xA71u, 0LL);
        }
        else
        {
          v19 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
          v12 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xA75u, 0LL);
          }
          else
          {
            v21 = CDrawingContext::PopStereoContext((__int64)a2, 0LL, v4);
            v12 = v21;
            if ( v21 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xA77u, 0LL);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA5Eu, 0LL);
  }
  return v12;
}
