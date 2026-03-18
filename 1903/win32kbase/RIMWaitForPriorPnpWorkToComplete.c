/*
 * XREFs of RIMWaitForPriorPnpWorkToComplete @ 0x1C015158C
 * Callers:
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C0150C60 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00726E8 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall RIMWaitForPriorPnpWorkToComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // r9d
  __int64 result; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 39;
LABEL_7:
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq((_DWORD)gRimLog, a2, 1, v4, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids, a1, v2);
  }
  while ( 1 )
  {
    result = *(unsigned int *)(v2 + 184);
    if ( (result & 0x10) == 0 )
      break;
    ++*(_DWORD *)(a1 + 880);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq((_DWORD)gRimLog, a2, 1, 40, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids, a1, v2);
    }
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a1 + 872), UserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 104);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 41;
      goto LABEL_7;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return WPP_RECORDER_SF_qq(
             (_DWORD)gRimLog,
             a2,
             1,
             42,
             (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
             a1,
             v2);
  }
  return result;
}
