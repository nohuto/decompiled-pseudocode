/*
 * XREFs of RtlWaitOnAddress @ 0x18005C620
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x18005EBE8 (RtlpWaitOnAddress.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  return RtlpWaitOnAddress(
           (_DWORD)Address,
           (_DWORD)CompareAddress,
           AddressSize,
           (_DWORD)Timeout,
           RtlpWaitOnAddressSpinCount);
}
