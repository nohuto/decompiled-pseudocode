/*
 * XREFs of KeQueryGroupMaskProcess @ 0x1400F11BC
 * Callers:
 *     PspWritePebAffinityInfo @ 0x14066CE10 (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) >> 10) & 0xFFFFF;
}
