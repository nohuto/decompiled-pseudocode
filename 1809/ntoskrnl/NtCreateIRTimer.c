/*
 * XREFs of NtCreateIRTimer @ 0x140720430
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x14068B710 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, Reserved, 0LL, 2u, DesiredAccess);
}
