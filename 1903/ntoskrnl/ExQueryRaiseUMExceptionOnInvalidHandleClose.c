/*
 * XREFs of ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14073B304
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryRaiseUMExceptionOnInvalidHandleClose(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 0x10) != 0;
}
