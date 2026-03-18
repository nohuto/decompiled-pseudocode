/*
 * XREFs of PopEsInStandbyEvaluate @ 0x1408B4990
 * Callers:
 *     PopEsInStandbyLowPowerEpochCallback @ 0x1408B4960 (PopEsInStandbyLowPowerEpochCallback.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x1400ED34C (PopGetPowerSettingValue.c)
 *     ExQueryWnfStateData @ 0x1406E8D40 (ExQueryWnfStateData.c)
 *     PopEsQueueStateEvaluation @ 0x140738908 (PopEsQueueStateEvaluation.c)
 *     PopTraceEsBgActivityPolicyUpdate @ 0x1408B1E48 (PopTraceEsBgActivityPolicyUpdate.c)
 */

__int64 __fastcall PopEsInStandbyEvaluate(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int PowerSettingValue; // edi
  int v4; // ebx
  int v5; // ecx
  __int64 v7; // [rsp+20h] [rbp-20h]
  __int64 v8; // [rsp+20h] [rbp-20h]
  _DWORD v9[4]; // [rsp+30h] [rbp-10h] BYREF
  char v10; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+28h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  int v13; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0;
  PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, a2, 3, &v13, v7, &v11);
  if ( PowerSettingValue >= 0 )
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v2, 3, &v12, v8, &v11);
    if ( PowerSettingValue >= 0 )
    {
      v4 = 1;
      v11 = 1;
      PowerSettingValue = ExQueryWnfStateData(PopEsWnfSubscriptionOpportunisticCs, v9, &v10, &v11);
      if ( PowerSettingValue >= 0 )
      {
        if ( !v12 || v13 != 1 || v10 || (PopAggressiveStandbyAppliedActions & 1) != 0 )
          v4 = 0;
        v5 = PopEsBgActivityPolicy;
        if ( PopEsBgActivityPolicy != v4 )
        {
          PopEsBgActivityPolicy = v4;
          PopTraceEsBgActivityPolicyUpdate(v5);
          PopEsQueueStateEvaluation(0);
        }
      }
    }
  }
  return (unsigned int)PowerSettingValue;
}
