/*
 * XREFs of ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180035CA0
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D9C0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180022D28 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyFlagCallback(union wil_details_FeaturePropertyCache *a1, _DWORD *a2)
{
  int v3; // eax

  **(_DWORD **)a2 = 0;
  if ( (a2[2] & *(_DWORD *)a1) == a2[2] )
    return 0LL;
  v3 = a2[2] | *(_DWORD *)a1;
  *(_DWORD *)a1 = v3;
  if ( !a2[3] && (v3 & 8) == 0 )
  {
    *(_DWORD *)a1 = v3 | 8;
    **(_DWORD **)a2 = 1;
  }
  return 1LL;
}
