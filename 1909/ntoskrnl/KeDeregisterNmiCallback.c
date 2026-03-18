/*
 * XREFs of KeDeregisterNmiCallback @ 0x1402A5580
 * Callers:
 *     <none>
 * Callees:
 *     KiDeregisterNmiSxCallback @ 0x1402A5980 (KiDeregisterNmiSxCallback.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  return KiDeregisterNmiSxCallback(Handle);
}
