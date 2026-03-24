/*
 * XREFs of PpmGetPerfPolicyClass @ 0x1401130C8
 * Callers:
 *     PpmPerfApplyDomainState @ 0x140112920 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x14013F16C (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140174070 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfResizeHistory @ 0x14086B19C (PpmPerfResizeHistory.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmGetPerfPolicyClass(__int64 a1)
{
  char v1; // dl
  char v2; // al
  __int64 v4; // r8

  v1 = 1;
  if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses > 1u )
  {
    v4 = *(_QWORD *)(a1 + 24176);
    v2 = 0;
    if ( v4 )
      v2 = *(_BYTE *)(v4 + 205);
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 24224);
  }
  if ( !v2 )
    return 0;
  return v1;
}
