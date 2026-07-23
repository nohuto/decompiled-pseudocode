/*
 * XREFs of ZwCallEnclave @ 0x1401B94D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Routine);
}
