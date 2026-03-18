/*
 * XREFs of ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x1800D88E0
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     PubSebRegisterRpc @ 0x1800D5AE8 (PubSebRegisterRpc.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureWNFHandles(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v1 = 0;
  if ( *((_QWORD *)this + 109)
    || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (_QWORD *)this + 109), v1 = v4, v4 >= 0) )
  {
    if ( !*((_QWORD *)this + 110) )
    {
      v6 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, (_QWORD *)this + 110);
      v1 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18029280C, 1u, v6, 0x222u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_18029280C, 1u, v4, 0x21Cu);
  }
  return v1;
}
