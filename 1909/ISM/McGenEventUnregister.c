/*
 * XREFs of McGenEventUnregister @ 0x1801086F8
 * Callers:
 *     _anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar @ 0x18002B07C (_anonymous_namespace_--EtwLogRegistrar--_EtwLogRegistrar.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister()
{
  ULONG result; // eax

  if ( !MICROSOFT_WINDOWSPHONE_INPUT_Context )
    return 0;
  result = EventUnregister(MICROSOFT_WINDOWSPHONE_INPUT_Context);
  MICROSOFT_WINDOWSPHONE_INPUT_Context = 0LL;
  return result;
}
