/*
 * XREFs of PopPowerRequestFindEntryById @ 0x14069FA34
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400EC750 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PopPowerRequestFindEntryById(unsigned int a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  Buffer[0] = 0LL;
  return RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
}
