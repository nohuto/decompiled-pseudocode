/*
 * XREFs of PopSetupFullScrenVideoNotification @ 0x140764F3C
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406BD710 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupFullScrenVideoNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK,
           1,
           0,
           (__int64)PopWnfFullscreenVideoCallback,
           0LL);
}
