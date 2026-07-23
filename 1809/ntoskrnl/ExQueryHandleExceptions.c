/*
 * XREFs of ExQueryHandleExceptions @ 0x1408CF120
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryHandleExceptions(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 2) != 0;
}
