/*
 * XREFs of ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x18002BCEC
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800990E0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x18002BC70 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ResetRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  int v2; // r9d
  char v3; // al
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  char v8; // [rsp+28h] [rbp-20h]
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_DWORD *)this + 85);
  v8 = *((_BYTE *)this + 377);
  v3 = *((_BYTE *)this + 360);
  v9 = *(_OWORD *)((char *)this + 344);
  v4 = CHwndRenderTarget::ResetRenderTarget((__int64)a2, (__int64)this, &v9, v2, v3, v8);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x187u, 0LL);
  return v6;
}
