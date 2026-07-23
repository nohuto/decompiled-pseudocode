/*
 * XREFs of RtlWaitOnAddress @ 0x180006390
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007424 @ 0x180007424 (sub_180007424.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  return sub_180007424((_DWORD)Address, (_DWORD)CompareAddress, AddressSize, (_DWORD)Timeout, dword_180163B6C);
}
