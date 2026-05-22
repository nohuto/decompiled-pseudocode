/*
 * XREFs of ?OnTryDemote@MPCMouseProcessor@@MEAA_NXZ @ 0x18013B680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::OnTryDemote(MPCMouseProcessor *this)
{
  bool result; // al
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart - *((_QWORD *)this + 789) <= *((_QWORD *)this + 800) )
    return 0;
  *((_DWORD *)this + 1585) = 0;
  result = 1;
  *((_DWORD *)this + 1565) = 0;
  return result;
}
