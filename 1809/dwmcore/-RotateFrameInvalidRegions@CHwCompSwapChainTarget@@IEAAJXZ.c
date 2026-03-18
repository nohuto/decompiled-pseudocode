/*
 * XREFs of ?RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ @ 0x1802010E4
 * Callers:
 *     ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x180200EB0 (-Present@CHwCompSwapChainTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::RotateFrameInvalidRegions(void **this)
{
  void **v1; // rsi
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v1 = this + 47;
  v3 = FastRegion::CRegion::Copy(this + 56, this + 47);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x13Eu);
  }
  else
  {
    v6 = FastRegion::CRegion::Copy(v1, this + 38);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x13Fu);
    else
      *(_DWORD *)this[38] = 0;
  }
  return v5;
}
