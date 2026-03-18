/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0155AC4
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0155808 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C015B788 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C015BBB0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C015BC58 (RIMCmRemoveContactSuppressionReasons.c)
 *     ApiSetEtwTraceTouchPadConfidenceCleared @ 0x1C019EEC8 (ApiSetEtwTraceTouchPadConfidenceCleared.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int *v4; // rbx
  __int64 result; // rax
  BOOL v7; // esi
  unsigned int IsContactDeliveringPointerData; // eax
  int v9; // r9d

  v4 = a2;
  if ( a3 || (result = *(unsigned int *)(a1 + 312), (result & 4) != 0) && (a2[605] & 0x4000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
    {
      v7 = (a2[605] & 4) != 0 && (a2[665] & 4) == 0;
      IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(a2);
      ApiSetEtwTraceTouchPadConfidenceCleared(*v4, v7, IsContactDeliveringPointerData);
    }
    if ( a3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 41;
LABEL_16:
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_D(
          (_DWORD)gRimLog,
          (_DWORD)a2,
          1,
          v9,
          (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
          *v4);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 42;
      goto LABEL_16;
    }
    result = RIMCmAddContactSuppressionReasons(a1, v4, 16LL);
    v4[605] |= 0x8000u;
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = v4[2];
    if ( (result & 0x10) != 0 )
    {
      result = v4[605] & 0x1004000;
      if ( (_DWORD)result == 16793600 )
      {
        result = v4[8];
        if ( (result & 1) == 0 )
          return RIMCmRemoveContactSuppressionReasons(a1, v4, 16LL);
      }
    }
  }
  return result;
}
