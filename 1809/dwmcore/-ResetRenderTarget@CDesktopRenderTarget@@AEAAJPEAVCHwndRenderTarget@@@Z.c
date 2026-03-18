/*
 * XREFs of ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800EA920
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800C8740 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800EA97C (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 */

__int64 __fastcall CDesktopRenderTarget::ResetRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char v6; // [rsp+28h] [rbp-20h]
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v6 = *((_BYTE *)this + 329);
  v2 = CHwndRenderTarget::ResetRenderTarget(
         (_DWORD)a2,
         (_DWORD)this,
         (unsigned int)&v7,
         *((_DWORD *)this + 73),
         *((_BYTE *)this + 312),
         v6,
         *((_QWORD *)this + 37),
         *((_QWORD *)this + 38));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x17Bu);
  return v4;
}
