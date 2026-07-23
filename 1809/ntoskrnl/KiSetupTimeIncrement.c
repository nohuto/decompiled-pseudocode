/*
 * XREFs of KiSetupTimeIncrement @ 0x140190494
 * Callers:
 *     KeInitializeClock @ 0x1409D9C58 (KeInitializeClock.c)
 * Callees:
 *     RtlGenerateQpcToIncrementConstants @ 0x14016AF54 (RtlGenerateQpcToIncrementConstants.c)
 *     RtlpComputeFraction @ 0x14016AF88 (RtlpComputeFraction.c)
 */

__int64 __fastcall KiSetupTimeIncrement(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v3; // r9d
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = 156250;
  v4 = a2;
  if ( a2 <= 0x1388 )
    v4 = 5000;
  v5 = KiMinDynamicTickDuration;
  KeMinimumIncrement = v4;
  if ( a1 < 0x2625A )
    v3 = a1;
  KeMaximumIncrement = v3;
  if ( a2 > KiMinDynamicTickDuration )
  {
    v5 = a2;
    KiMinDynamicTickDuration = a2;
  }
  v6 = KiMaxDynamicTickDuration;
  if ( a1 < KiMaxDynamicTickDuration )
  {
    v6 = a1;
    KiMaxDynamicTickDuration = a1;
  }
  if ( v6 < v5 )
    KiMaxDynamicTickDuration = v5;
  KiTickOffset = v3;
  KiMaximumIncrementReciprocal = RtlpComputeFraction(1u, v3, &v12);
  KeNumberProcessorsGroup0[1] = -v12;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  KeTimeAdjustmentFrequency = PerformanceFrequency.QuadPart;
  v8 = v7;
  v9 = RtlGenerateQpcToIncrementConstants(PerformanceFrequency.LowPart, &v12);
  MEMORY[0xFFFFF78000000300] = PerformanceFrequency.QuadPart;
  MEMORY[0xFFFFF78000000360] = v9;
  MEMORY[0xFFFFF78000000369] = v12;
  MEMORY[0xFFFFF78000000358] = v9;
  MEMORY[0xFFFFF78000000368] = v12;
  MEMORY[0xFFFFF78000000348] = v8.QuadPart;
  MEMORY[0xFFFFF78000000350] = v8.QuadPart;
  result = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerPeriod = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerCount = 0x989680 / KeMaximumIncrement;
  return result;
}
