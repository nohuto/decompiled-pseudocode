/*
 * XREFs of KeRegisterNmiCallback @ 0x1402A5BF0
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x1402A5F54 (KiRegisterNmiSxCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  return (PVOID)KiRegisterNmiSxCallback(CallbackRoutine, Context);
}
