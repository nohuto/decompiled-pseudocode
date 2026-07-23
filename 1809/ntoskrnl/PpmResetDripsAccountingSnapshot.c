/*
 * XREFs of PpmResetDripsAccountingSnapshot @ 0x1402D5AC8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 PpmResetDripsAccountingSnapshot()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 *v2; // rdx
  _QWORD *v3; // rcx

  result = (unsigned int)dword_14043D580;
  if ( PpmPlatformStates && dword_14043D580 != -1 )
  {
    v1 = 26LL;
    v2 = (__int64 *)(1008LL * (unsigned int)dword_14043D580 + 200 + *(_QWORD *)(PpmPlatformStates + 48));
    v3 = &PpmDripsAccountingSnapshot;
    do
    {
      result = *v2;
      v2 += 4;
      *v3++ = result;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
