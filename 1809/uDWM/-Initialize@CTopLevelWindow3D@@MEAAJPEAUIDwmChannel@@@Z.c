/*
 * XREFs of ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x180022620
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180022740 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180022658 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::Initialize(CTopLevelWindow3D *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x56u);
  else
    CVisual::DisablePrefiltering(this);
  return v4;
}
