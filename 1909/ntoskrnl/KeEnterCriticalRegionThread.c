/*
 * XREFs of KeEnterCriticalRegionThread @ 0x140053A10
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeEnterCriticalRegionThread(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
}
