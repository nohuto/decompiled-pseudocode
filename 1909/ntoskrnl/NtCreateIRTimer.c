/*
 * XREFs of NtCreateIRTimer @ 0x140749EF0
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x1406811A0 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, Reserved, 0LL, 2u, DesiredAccess);
}
