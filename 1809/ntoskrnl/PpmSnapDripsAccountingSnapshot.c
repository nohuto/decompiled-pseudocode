/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x1402D5DD0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopDiagTraceDripsHistogram @ 0x1402E0480 (PopDiagTraceDripsHistogram.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x1408792B4 (PpmEventTraceDripsAccountingSnapshot.c)
 */

__int64 __fastcall PpmSnapDripsAccountingSnapshot(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  char v6; // r15
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // r9d
  _QWORD v13[26]; // [rsp+30h] [rbp-108h] BYREF

  result = (unsigned int)dword_14043D580;
  v5 = 0LL;
  v6 = PopWnfCsEnterScenarioId;
  if ( PpmPlatformStates && dword_14043D580 != -1 )
  {
    v8 = 26LL;
    v9 = (_QWORD *)(1008LL * (unsigned int)dword_14043D580 + *(_QWORD *)(PpmPlatformStates + 48) + 200LL);
    do
    {
      v13[v5] = PpmConvertTime(
                  *v9 - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v5 * 8),
                  PopQpcFrequency,
                  0x989680uLL);
      ++v5;
      v9 += 4;
      --v8;
    }
    while ( v8 );
    PpmEventTraceDripsAccountingSnapshot(v10, v13);
    LOBYTE(v11) = v6;
    return PopDiagTraceDripsHistogram(v11, a2, a3, v12, (__int64)v13);
  }
  return result;
}
