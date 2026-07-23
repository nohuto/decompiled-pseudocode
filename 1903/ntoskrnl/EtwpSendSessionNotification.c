/*
 * XREFs of EtwpSendSessionNotification @ 0x1406B6324
 * Callers:
 *     EtwpFlushBuffer @ 0x14062FCC0 (EtwpFlushBuffer.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406B759C (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406B7B00 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406B7D7C (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
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
  v7 = *(_QWORD *)(a1 + 1112);
  v8 = *(_OWORD *)(a1 + 292);
  *(GUID *)&v10[5] = SessionNotificationGuid;
  *(_OWORD *)&v10[7] = v8;
  v10[0] = 0x6000000007LL;
  v10[10] = v3;
  v10[9] = __PAIR64__(a3, a2);
  return EtwpNotifyGuid(v7, v10, 0LL);
}
