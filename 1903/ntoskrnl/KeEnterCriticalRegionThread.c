/*
 * XREFs of KeEnterCriticalRegionThread @ 0x140053970
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeEnterCriticalRegionThread(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
}
