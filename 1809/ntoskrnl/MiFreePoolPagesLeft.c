/*
 * XREFs of MiFreePoolPagesLeft @ 0x1400EF5E4
 * Callers:
 *     MmRaisePoolQuota @ 0x140130C60 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14066E19C (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x1409BE640 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140439B18;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_14043C048;
    v2 = qword_14043C058;
  }
  return v2 - v1;
}
