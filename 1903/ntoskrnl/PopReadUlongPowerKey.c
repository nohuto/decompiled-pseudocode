/*
 * XREFs of PopReadUlongPowerKey @ 0x140180AE4
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x14072474C (PopEnableSystemSleepCheckpoint.c)
 *     PopUpdatePowerActionWatchdogTimeoutsFromRegistry @ 0x140725BC0 (PopUpdatePowerActionWatchdogTimeoutsFromRegistry.c)
 *     PopBatteryInitPhaseTwo @ 0x140A22264 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x140180B5C (PopReadRegKeyValue.c)
 */

__int64 __fastcall PopReadUlongPowerKey(
        PCWSTR a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 result; // rax
  unsigned int v10; // ecx

  result = PopReadRegKeyValue(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power", a1, 4uLL, a2);
  if ( (int)result < 0 )
  {
    *a2 = a3;
    return result;
  }
  v10 = *a2;
  if ( *a2 != a6 )
  {
    if ( v10 < a4 )
    {
      *a2 = a4;
    }
    else
    {
      if ( v10 <= a5 )
        return result;
      *a2 = a5;
    }
    return 3221226034LL;
  }
  return result;
}
