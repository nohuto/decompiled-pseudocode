/*
 * XREFs of ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7AB0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18016EA90 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRect.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18016F56C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7C04 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTop(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        bool a4)
{
  char v4; // bp
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx

  v4 = 0;
  if ( !*((_QWORD *)this + 23)
    || *((_BYTE *)this + 860)
    || (v4 = 1, v9 = CDrawingContext::PushStereoContext((__int64)a2, 1, 0), v11 = v9, v9 >= 0) )
  {
    v12 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA65u, 0LL);
    }
    else if ( v4 )
    {
      v14 = CDrawingContext::PopStereoContext((__int64)a2, 0LL);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xA6Bu, 0LL);
      }
      else
      {
        v16 = CDrawingContext::PushStereoContext((__int64)a2, 2, 0);
        v11 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xA71u, 0LL);
        }
        else
        {
          v18 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
          v11 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xA75u, 0LL);
          }
          else
          {
            v20 = CDrawingContext::PopStereoContext((__int64)a2, 0LL);
            v11 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xA77u, 0LL);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA5Eu, 0LL);
  }
  return v11;
}
