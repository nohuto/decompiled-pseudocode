/*
 * XREFs of KeSetTimeAdjustment @ 0x14016F8D8
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x140111D10 (ExpUpdateTimerConfigurationWorker.c)
 * Callees:
 *     KiUpdateSystemTime @ 0x14017562C (KiUpdateSystemTime.c)
 *     RtlGenerateQpcToIncrementConstants @ 0x140175758 (RtlGenerateQpcToIncrementConstants.c)
 */

__int64 __fastcall KeSetTimeAdjustment(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 == KeTimeAdjustmentFrequency )
    return 0LL;
  if ( !a1 )
    return 3221225620LL;
  if ( (unsigned __int64)(a1 - 2) <= 0xFFFFFFFD )
  {
    v3 = RtlGenerateQpcToIncrementConstants((unsigned int)a1, &v5);
    LOBYTE(v4) = v5;
    KeTimeAdjustmentFrequency = a1;
    KiUpdateSystemTime(0LL, &v3, 0LL);
    return 0LL;
  }
  return 3221225621LL;
}
