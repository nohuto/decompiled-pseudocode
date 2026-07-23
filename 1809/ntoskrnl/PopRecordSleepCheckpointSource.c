/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x1408673E0
 * Callers:
 *     PopCheckShutdownMarker @ 0x1409DE374 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlpSystemBootStatusRequest @ 0x14071D774 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall PopRecordSleepCheckpointSource(char a1)
{
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v4 = 16;
  v6 = 32;
  BYTE1(PopBsdPowerTransitionExtension) ^= (BYTE1(PopBsdPowerTransitionExtension) ^ (4 * a1)) & 0xC;
  v5 = &PopBsdPowerTransitionExtension;
  v2 = RtlpSystemBootStatusRequest(0x20u, (__int64)&v4, 1u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  return v2;
}
