/*
 * XREFs of MiFreePoolPagesLeft @ 0x1400EF544
 * Callers:
 *     MmRaisePoolQuota @ 0x140130B70 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14066CFFC (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x1409BD640 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140438A58;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_14043AF88;
    v2 = qword_14043AF98;
  }
  return v2 - v1;
}
