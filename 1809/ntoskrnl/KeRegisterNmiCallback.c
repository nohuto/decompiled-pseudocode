/*
 * XREFs of KeRegisterNmiCallback @ 0x14028F030
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x14028F454 (KiRegisterNmiSxCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  return (PVOID)KiRegisterNmiSxCallback(CallbackRoutine, Context);
}
