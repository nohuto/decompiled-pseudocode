/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14000668C
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x14067A7C4 (PspWritePebAffinityInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 444);
}
