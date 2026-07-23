/*
 * XREFs of KiUpdateSystemTime @ 0x14016AE28
 * Callers:
 *     KeSetTimeAdjustment @ 0x14016831C (KeSetTimeAdjustment.c)
 *     KiSetSystemTimeDpc @ 0x14016FB00 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x14056C040 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KiComputeNewSystemTime @ 0x140117A6C (KiComputeNewSystemTime.c)
 *     RtlWriteAcquireTickLock @ 0x140117AE0 (RtlWriteAcquireTickLock.c)
 */

__int64 __fastcall KiUpdateSystemTime(__int64 a1, __int64 a2, char a3)
{
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v7; // r11
  __int64 result; // rax
  __int16 v9; // [rsp+30h] [rbp-8h]

  _disable();
  RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = KiComputeNewSystemTime(PerformanceCounter.QuadPart);
  if ( a1 )
  {
    KiSystemTimeErrorAccumulator = 0LL;
    v7 = a1 + MEMORY[0xFFFFF78000000014];
  }
  MEMORY[0xFFFFF78000000348] = PerformanceCounter.QuadPart;
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v7);
  MEMORY[0xFFFFF78000000014] = v7;
  if ( a2 )
  {
    MEMORY[0xFFFFF78000000358] = *(_QWORD *)a2;
    MEMORY[0xFFFFF78000000368] = *(_BYTE *)(a2 + 8);
  }
  result = ++MEMORY[0xFFFFF78000000340];
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) != 0 )
    {
      KeBootTimeBias = 0LL;
      KeBootTime.QuadPart = v7;
    }
    else
    {
      KeBootTime.QuadPart += a1;
      KeBootTimeBias += a1;
    }
  }
  if ( (v9 & 0x200) != 0 )
    _enable();
  return result;
}
