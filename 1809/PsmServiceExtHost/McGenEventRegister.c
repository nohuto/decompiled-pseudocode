/*
 * XREFs of McGenEventRegister @ 0x180042534
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180042270 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventRegister()
{
  __int64 result; // rax

  result = 0LL;
  if ( !PDC_EVENT_PROVIDER_Context )
    return EtwEventRegister(
             &PDC_EVENT_PROVIDER,
             McGenControlCallbackV2,
             &PDC_EVENT_PROVIDER_Context,
             &PDC_EVENT_PROVIDER_Context);
  return result;
}
