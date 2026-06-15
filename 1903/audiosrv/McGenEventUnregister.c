/*
 * XREFs of McGenEventUnregister @ 0x180112DF8
 * Callers:
 *     ?MyServiceTerminate@@YAXXZ @ 0x180112A94 (-MyServiceTerminate@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !AUDIO_EVENT_PROVIDER_Context )
    return 0LL;
  result = EtwEventUnregister(AUDIO_EVENT_PROVIDER_Context);
  AUDIO_EVENT_PROVIDER_Context = 0LL;
  return result;
}
