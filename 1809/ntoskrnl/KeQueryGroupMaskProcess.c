/*
 * XREFs of KeQueryGroupMaskProcess @ 0x1400F123C
 * Callers:
 *     PspWritePebAffinityInfo @ 0x14066DFD0 (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) >> 10) & 0xFFFFF;
}
