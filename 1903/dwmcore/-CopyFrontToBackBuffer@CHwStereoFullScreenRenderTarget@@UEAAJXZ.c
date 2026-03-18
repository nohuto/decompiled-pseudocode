/*
 * XREFs of ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801663F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18008CF88 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x180166BD0 (-SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyFrontToBackBuffer(CHwStereoFullScreenRenderTarget *this)
{
  unsigned int v1; // r14d
  char *v2; // rsi
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx

  v1 = *((_DWORD *)this + 96);
  v2 = (char *)this + 376;
  v4 = CHwStereoFullScreenRenderTarget::SetStereoContext((char *)this + 376, 1LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1A2u, 0LL);
  }
  else
  {
    v7 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((_DWORD *)this - 36, 1u, *((_BYTE *)this + 409) != 0);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1A6u, 0LL);
    }
    else if ( !*((_BYTE *)this + 409) )
    {
      v9 = CHwStereoFullScreenRenderTarget::SetStereoContext(v2, 2LL);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1AAu, 0LL);
      }
      else
      {
        v11 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((_DWORD *)this - 36, 2u, 1);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1ACu, 0LL);
      }
    }
  }
  CHwStereoFullScreenRenderTarget::SetStereoContext(v2, v1);
  return v6;
}
