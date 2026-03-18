/*
 * XREFs of ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x1800286F4
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800285B8 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PubSebRegisterRpc @ 0x1800DE830 (PubSebRegisterRpc.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureWNFHandles(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx

  v1 = 0;
  if ( *((_QWORD *)this + 109) || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK), v1 = v4, v4 >= 0) )
  {
    if ( !*((_QWORD *)this + 110) )
    {
      v6 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK);
      v1 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BE894, 1u, v6, 0x227u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BE894, 1u, v4, 0x221u, 0LL);
  }
  return v1;
}
