/*
 * XREFs of ?RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ @ 0x18023ECF4
 * Callers:
 *     ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x18023EAE0 (-Present@CHwCompSwapChainTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006E3F8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::RotateFrameInvalidRegions(int **this)
{
  int **v1; // rsi
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  v1 = this + 39;
  v3 = FastRegion::CRegion::Copy(this + 48, this + 39);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x13Bu, 0LL);
  }
  else
  {
    v6 = FastRegion::CRegion::Copy(v1, this + 30);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x13Cu, 0LL);
    else
      *this[30] = 0;
  }
  return v5;
}
