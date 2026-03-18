/*
 * XREFs of ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14070F7A0
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryRaiseUMExceptionOnInvalidHandleClose(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 0x10) != 0;
}
