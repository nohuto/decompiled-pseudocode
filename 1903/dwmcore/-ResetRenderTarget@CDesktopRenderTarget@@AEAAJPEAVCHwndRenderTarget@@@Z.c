/*
 * XREFs of ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800AF5A8
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180093420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800AF604 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 */

__int64 __fastcall CDesktopRenderTarget::ResetRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char v6; // [rsp+28h] [rbp-20h]
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v6 = *((_BYTE *)this + 377);
  v2 = CHwndRenderTarget::ResetRenderTarget(
         (_DWORD)a2,
         (_DWORD)this,
         (unsigned int)&v7,
         *((_DWORD *)this + 85),
         *((_BYTE *)this + 360),
         v6,
         *((_QWORD *)this + 43),
         *((_QWORD *)this + 44));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x187u, 0LL);
  return v4;
}
