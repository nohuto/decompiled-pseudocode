/*
 * XREFs of RtlCopyExtendedContext @ 0x1800F21C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F2254 @ 0x1800F2254 (sub_1800F2254.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return sub_1800F2254((_DWORD)Destination, (_DWORD)Destination, (_DWORD)Source, ContextFlags, (__int64)Source);
}
