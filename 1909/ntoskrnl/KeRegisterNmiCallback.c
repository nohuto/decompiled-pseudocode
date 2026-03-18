/*
 * XREFs of KeRegisterNmiCallback @ 0x1402A5950
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x1402A5CB4 (KiRegisterNmiSxCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  return (PVOID)KiRegisterNmiSxCallback(CallbackRoutine, Context);
}
