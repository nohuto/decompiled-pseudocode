/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01009D4
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C00ACAB0 (EtwTraceTouchPadConfidenceCleared.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01068F0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0106DCC (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, int *a2, int a3)
{
  __int64 result; // rax
  BOOL v7; // esi
  int IsContactDeliveringPointerData; // eax

  if ( a3 || (result = *(unsigned int *)(a1 + 276), (result & 0x10) != 0) && (a2[601] & 0x4000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
    {
      v7 = (a2[601] & 4) != 0 && (a2[655] & 4) == 0;
      IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(a2);
      EtwTraceTouchPadConfidenceCleared(*a2, v7, IsContactDeliveringPointerData);
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      37 - (a3 != 0),
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
      *a2);
    result = RIMCmAddContactSuppressionReasons(a1, a2, 16LL);
    a2[601] |= 0x8000u;
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = (unsigned int)a2[2];
    if ( (result & 0x10) != 0 )
    {
      result = a2[601] & 0x1004000;
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
