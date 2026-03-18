/*
 * XREFs of PiCslInitialize @ 0x140A3B64C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExRegisterCallback @ 0x14017F130 (ExRegisterCallback.c)
 *     PipCslCreateCallback @ 0x1409ED290 (PipCslCreateCallback.c)
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
