/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x1402F0014
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopDiagTraceDripsHistogram @ 0x1402FCE1C (PopDiagTraceDripsHistogram.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x1408B4B20 (PpmEventTraceDripsAccountingSnapshot.c)
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

  result = (unsigned int)dword_140467D00;
  v5 = 0LL;
  v6 = PopWnfCsEnterScenarioId;
  if ( PpmPlatformStates && dword_140467D00 != -1 )
  {
    v8 = 26LL;
    v9 = (_QWORD *)(1008LL * (unsigned int)dword_140467D00 + *(_QWORD *)(PpmPlatformStates + 48) + 200LL);
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
