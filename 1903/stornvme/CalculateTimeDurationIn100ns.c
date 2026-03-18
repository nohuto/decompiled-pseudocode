/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x1C0004430
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0003C80 (NVMeCompletionDpcRoutine.c)
 *     NVMeHwAdapterControl @ 0x1C00046D0 (NVMeHwAdapterControl.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C0004EA8 (NVMeIsAllowedWithinThrottleLimit.c)
 *     RecordCommandTimingHistory @ 0x1C0018EA4 (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalculateTimeDurationIn100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  if ( !a2 )
    return 0LL;
  if ( a2 == 10000000 )
  {
    v2 = a1 / 0x989680;
    v3 = a1 % 0x989680;
  }
  else
  {
    v3 = a1 % a2;
    v2 = a1 / a2;
  }
  v4 = 1000 * v3;
  if ( a2 == 10000000 )
  {
    v5 = v4 / 0x989680;
    v6 = v4 % 0x989680;
  }
  else
  {
    v6 = v4 % a2;
    v5 = 1000 * v3 / a2;
  }
  v7 = 10000 * v6;
  if ( a2 == 10000000 )
    v8 = v7 / 0x989680;
  else
    v8 = v7 / a2;
  return v8 + 10000 * (v5 + 1000 * v2);
}
