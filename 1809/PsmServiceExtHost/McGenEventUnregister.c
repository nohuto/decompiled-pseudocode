/*
 * XREFs of McGenEventUnregister @ 0x1800722E4
 * Callers:
 *     Pdcv2ActivationClientUnregister @ 0x18007173C (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !PDC_EVENT_PROVIDER_Context )
    return 0LL;
  result = EtwEventUnregister();
  PDC_EVENT_PROVIDER_Context = 0LL;
  return result;
}
