/*
 * XREFs of KeQueryGroupMaskProcess @ 0x1400F119C
 * Callers:
 *     PspWritePebAffinityInfo @ 0x14066CE30 (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) >> 10) & 0xFFFFF;
}
