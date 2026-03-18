/*
 * XREFs of ExQueryHandleExceptions @ 0x14090AEA0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryHandleExceptions(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 2) != 0;
}
