/*
 * XREFs of PopRecordSleepCheckpoint @ 0x1406E027C
 * Callers:
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x1409DE374 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlpSystemBootStatusRequest @ 0x14071D774 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpoint(char a1)
{
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  v4 = 16;
  v5 = &PopBsdPowerTransitionExtension;
  v6 = 32;
  v2 = ((__int64 (__fastcall *)(__int64, int *, __int64, _QWORD))RtlpSystemBootStatusRequest)(32LL, &v4, 1LL, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  return v2;
}
