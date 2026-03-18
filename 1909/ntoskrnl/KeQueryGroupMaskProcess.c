/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14000671C
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1406800CC (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x140680874 (PspWritePebAffinityInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 444);
}
