/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0128FE8
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0128D14 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C00E8160 (EtwTraceTouchPadConfidenceCleared.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C012E7A0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C012EC70 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, int *a2, int a3)
{
  __int64 result; // rax
  BOOL v7; // esi
  int IsContactDeliveringPointerData; // eax
  unsigned __int16 v9; // r9

  if ( a3 || (result = *(unsigned int *)(a1 + 308), (result & 0x10) != 0) && (a2[605] & 0x4000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
    {
      v7 = (a2[605] & 4) != 0 && (a2[659] & 4) == 0;
      IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(a2);
      EtwTraceTouchPadConfidenceCleared(*a2, v7, IsContactDeliveringPointerData);
    }
    v9 = 41;
    if ( !a3 )
      v9 = 42;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, v9, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, *a2);
    result = RIMCmAddContactSuppressionReasons(a1, a2, 16LL);
    a2[605] |= 0x8000u;
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = (unsigned int)a2[2];
    if ( (result & 0x10) != 0 )
    {
      result = a2[605] & 0x1004000;
      if ( (_DWORD)result == 16793600 )
      {
        result = (unsigned int)a2[8];
        if ( (result & 1) == 0 )
          return RIMCmRemoveContactSuppressionReasons(a1, a2, 16LL);
      }
    }
  }
  return result;
}
