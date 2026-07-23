/*
 * XREFs of EtwpSendSessionNotification @ 0x140659F28
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405C1F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1405C22F0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpFlushBuffer @ 0x1405C2D14 (EtwpFlushBuffer.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 *     EtwpStopLoggerInstance @ 0x1406CCAF4 (EtwpStopLoggerInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rcx
  __int128 v8; // xmm1
  _QWORD v10[12]; // [rsp+20h] [rbp-88h] BYREF

  v3 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 )
    v3 = -1;
  memset(v10, 0, sizeof(v10));
  v7 = *(_QWORD *)(a1 + 1080);
  v8 = *(_OWORD *)(a1 + 292);
  *(GUID *)&v10[5] = SessionNotificationGuid;
  *(_OWORD *)&v10[7] = v8;
  v10[0] = 0x6000000007LL;
  v10[10] = v3;
  v10[9] = __PAIR64__(a3, a2);
  return EtwpNotifyGuid(v7, (__int64)v10, 0);
}
