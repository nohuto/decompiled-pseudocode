/*
 * XREFs of ?wil_details_CaptureReportedUsageCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18004D400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_CaptureReportedUsageCallback(union wil_details_FeaturePropertyCache *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax

  *a2 = *(_DWORD *)a1;
  v2 = *(_DWORD *)a1 ^ (*(_DWORD *)a1 ^ (16 * *(_DWORD *)a1)) & 0x100000;
  v3 = v2 ^ (v2 ^ (16 * v2)) & 0x200000 ^ (v2 ^ (v2 ^ (16 * v2)) & 0x200000 ^ (16 * (v2 ^ (v2 ^ (16 * v2)) & 0x200000))) & 0x400000;
  *(_DWORD *)a1 = v3 & 0x807F8037 | (16 * (v3 & 0x80000));
  return 1LL;
}
