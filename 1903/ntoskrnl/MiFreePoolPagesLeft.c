/*
 * XREFs of MiFreePoolPagesLeft @ 0x1400F1C2C
 * Callers:
 *     MmRaisePoolQuota @ 0x1400F1940 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x1409F1BD0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_1404644C8;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_1404669A8;
    v2 = qword_1404669B8;
  }
  return v2 - v1;
}
