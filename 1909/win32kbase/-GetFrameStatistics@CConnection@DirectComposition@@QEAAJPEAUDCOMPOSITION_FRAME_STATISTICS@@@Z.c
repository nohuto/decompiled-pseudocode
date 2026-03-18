/*
 * XREFs of ?GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1C000C630
 * Callers:
 *     NtDCompositionGetFrameStatistics @ 0x1C000C4E0 (NtDCompositionGetFrameStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::GetFrameStatistics(
        DirectComposition::CConnection *this,
        union _LARGE_INTEGER *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD v7; // edx
  LARGE_INTEGER v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 21);
  do
  {
    v5 = v2;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v7 = *((_DWORD *)this + 44);
    v8 = PerformanceCounter;
    a2[1].LowPart = v7;
    a2->QuadPart = v2;
    a2[1].HighPart = *((_DWORD *)this + 45);
    a2[2] = PerformanceCounter;
    a2[3] = DirectComposition::CConnection::s_qpcFrequency;
    if ( v7 )
    {
      v9 = DirectComposition::CConnection::s_qpcFrequency.QuadPart * (unsigned __int64)*((unsigned int *)this + 45) / v7;
      if ( v9 )
      {
        v10 = -1LL;
        if ( v8.QuadPart >= v2 )
          v10 = (v8.QuadPart - v2) / v9;
        v8.QuadPart = v2 + v9 * (v10 + 2);
      }
    }
    a2[4] = v8;
    v2 = *((_QWORD *)this + 21);
  }
  while ( v5 != v2 );
  return 0LL;
}
