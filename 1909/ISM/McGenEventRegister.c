/*
 * XREFs of McGenEventRegister @ 0x18002A960
 * Callers:
 *     _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x18002A938 (_anonymous_namespace_--EtwLogRegistrar--EtwLogRegistrar.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !MICROSOFT_WINDOWSPHONE_INPUT_Context )
    return EventRegister(
             &MICROSOFT_WINDOWSPHONE_INPUT,
             McGenControlCallbackV2,
             &MICROSOFT_WINDOWSPHONE_INPUT_Context,
             &MICROSOFT_WINDOWSPHONE_INPUT_Context);
  return result;
}
