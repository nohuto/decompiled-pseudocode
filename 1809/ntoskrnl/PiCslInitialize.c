/*
 * XREFs of PiCslInitialize @ 0x1409F626C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExRegisterCallback @ 0x14016C660 (ExRegisterCallback.c)
 *     PipCslCreateCallback @ 0x1409AADB0 (PipCslCreateCallback.c)
 */

__int64 PiCslInitialize()
{
  NTSTATUS Callback; // ebx

  PipCslConsoleLockState = 0;
  Callback = PipCslCreateCallback();
  if ( Callback >= 0 )
  {
    ExRegisterCallback((PCALLBACK_OBJECT)PipCslCallbackObject, (PCALLBACK_FUNCTION)PipCslStateChangeCallback, 0LL);
    PipCslInitialized = 1;
  }
  return (unsigned int)Callback;
}
