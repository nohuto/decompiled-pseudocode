/*
 * XREFs of MiFreePoolPagesLeft @ 0x1400DA16C
 * Callers:
 *     MmRaisePoolQuota @ 0x1400D9E80 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406738A0 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x1409F1AE0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_1404641C8;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_1404666A8;
    v2 = qword_1404666B8;
  }
  return v2 - v1;
}
