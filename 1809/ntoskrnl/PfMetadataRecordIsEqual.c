/*
 * XREFs of PfMetadataRecordIsEqual @ 0x14065DB98
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC6C (PfSnOpenVolumesForPrefetch.c)
 *     PfVerifyScenarioBuffer @ 0x140668B10 (PfVerifyScenarioBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
