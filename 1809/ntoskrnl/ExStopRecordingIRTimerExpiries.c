/*
 * XREFs of ExStopRecordingIRTimerExpiries @ 0x1408CF844
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1402DE6F0 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void ExStopRecordingIRTimerExpiries()
{
  _DWORD *v0; // rbx
  int v1; // ebp
  const WCHAR **v2; // rdi
  __int64 v3; // r14
  __int16 i; // si
  int v5; // ecx

  v0 = (_DWORD *)_InterlockedExchange64(&ExpIRTimerExpiryCounts, 0LL);
  if ( v0 )
  {
    v1 = 0;
    v2 = (const WCHAR **)&unk_1403500B0;
    v3 = 15LL;
    do
    {
      for ( i = 0; (unsigned __int16)i < *(unsigned __int8 *)v2; ++i )
      {
        v5 = v0[v1];
        if ( v5 )
          PoDiagTraceIRTimerSleepStudyRundown(v5, i, *(v2 - 2));
        ++v1;
      }
      v2 += 3;
      --v3;
    }
    while ( v3 );
    ExFreePoolWithTag(v0, 0x69547845u);
  }
}
