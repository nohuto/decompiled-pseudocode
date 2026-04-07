/*
 * XREFs of ?Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18002FD40
 * Callers:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FCB0 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180022658 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Initialize(CAnimatedTransitionVisual *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x8Au);
  else
    CVisual::DisablePrefiltering(this);
  return v4;
}
