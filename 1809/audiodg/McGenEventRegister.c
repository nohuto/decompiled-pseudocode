/*
 * XREFs of McGenEventRegister @ 0x1400141D8
 * Callers:
 *     WinMain @ 0x140014070 (WinMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventRegister()
{
  __int64 result; // rax

  result = 0LL;
  if ( !AUDIO_EVENT_PROVIDER_Context )
    return EtwEventRegister(
             &AUDIO_EVENT_PROVIDER,
             McGenControlCallbackV2,
             &AUDIO_EVENT_PROVIDER_Context,
             &AUDIO_EVENT_PROVIDER_Context);
  return result;
}
