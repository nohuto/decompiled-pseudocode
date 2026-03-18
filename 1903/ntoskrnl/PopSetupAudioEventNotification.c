/*
 * XREFs of PopSetupAudioEventNotification @ 0x14078A774
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14063F220 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAudioEventNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange((int)&v1, (int)&WNF_SEB_AUDIO_ACTIVITY, 1, 0, (__int64)PopWnfAudioCallback, 0LL);
}
