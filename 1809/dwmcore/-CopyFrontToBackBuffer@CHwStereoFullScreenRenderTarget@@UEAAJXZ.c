/*
 * XREFs of ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x180206CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800905E8 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x1802074F0 (-SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyFrontToBackBuffer(CHwStereoFullScreenRenderTarget *this)
{
  unsigned int v1; // r14d
  char *v2; // rsi
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx

  v1 = *((_DWORD *)this + 96);
  v2 = (char *)this + 376;
  v4 = CHwStereoFullScreenRenderTarget::SetStereoContext((char *)this + 376, 1LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1A4u);
  }
  else
  {
    v7 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((_DWORD *)this - 52, 1u, *((_BYTE *)this + 409) != 0);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1A8u);
    }
    else if ( !*((_BYTE *)this + 409) )
    {
      v9 = CHwStereoFullScreenRenderTarget::SetStereoContext(v2, 2LL);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1ACu);
      }
      else
      {
        v11 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((_DWORD *)this - 52, 2u, 1);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1AEu);
      }
    }
  }
  CHwStereoFullScreenRenderTarget::SetStereoContext(v2, v1);
  return v6;
}
