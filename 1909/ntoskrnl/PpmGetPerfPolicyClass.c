/*
 * XREFs of PpmGetPerfPolicyClass @ 0x14010C8A8
 * Callers:
 *     PpmPerfApplyDomainState @ 0x14010C230 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x14015B380 (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14017DA68 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfResizeHistory @ 0x1408A6CC8 (PpmPerfResizeHistory.c)
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
