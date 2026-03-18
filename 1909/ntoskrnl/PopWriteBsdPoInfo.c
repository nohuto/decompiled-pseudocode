/*
 * XREFs of PopWriteBsdPoInfo @ 0x1401BF628
 * Callers:
 *     PopBsdUpdateWorker @ 0x1405B1710 (PopBsdUpdateWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceBsdWriteTime @ 0x1401BFF3C (PopDiagTraceBsdWriteTime.c)
 *     PopQpcTimeInMs @ 0x1405960BC (PopQpcTimeInMs.c)
 *     RtlSetSystemBootStatus @ 0x1407599B0 (RtlSetSystemBootStatus.c)
 */

__int64 __fastcall PopWriteBsdPoInfo(unsigned int a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // eax
  LARGE_INTEGER v9; // [rsp+40h] [rbp+18h] BYREF
  LARGE_INTEGER v10; // [rsp+48h] [rbp+20h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = 7LL;
  v10 = PerformanceCounter;
  if ( a1 == 7 )
    goto LABEL_9;
  if ( a1 != 14 )
  {
    v5 = 16LL;
    if ( a1 != 16 )
    {
      v6 = -1073741811;
      goto LABEL_10;
    }
LABEL_9:
    v6 = RtlSetSystemBootStatus(v5, a2, 32LL);
    goto LABEL_10;
  }
  v6 = RtlSetSystemBootStatus(14LL, a2, 48LL);
  if ( v6 < 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    if ( HIWORD(xmmword_140467AE8) != 0xFFFF )
      ++HIWORD(xmmword_140467AE8);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
LABEL_10:
  v9 = KeQueryPerformanceCounter(0LL);
  v7 = PopQpcTimeInMs(&v10, &v9);
  return PopDiagTraceBsdWriteTime(a1, v7, (unsigned int)v6);
}
