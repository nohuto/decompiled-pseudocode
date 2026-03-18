/*
 * XREFs of KeEnterCriticalRegionThread @ 0x14008FB40
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeEnterCriticalRegionThread(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
}
