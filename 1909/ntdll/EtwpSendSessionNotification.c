/*
 * XREFs of EtwpSendSessionNotification @ 0x180005D10
 * Callers:
 *     EtwpStartUmLogger @ 0x1800059B8 (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x18006D190 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x18006D2DC (EtwpFlushActiveBuffers.c)
 *     EtwpStopLoggerInstance @ 0x180087534 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int128 v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _QWORD v9[12]; // [rsp+30h] [rbp-29h] BYREF

  v8 = *(unsigned __int16 *)(a1 + 20);
  BYTE3(v8) = 1;
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[3]) = -1;
  v6 = *(_OWORD *)(a1 + 56);
  *(_OWORD *)&v9[5] = SessionNotificationGuid;
  v9[0] = 0x6000000007LL;
  *(_OWORD *)&v9[7] = v6;
  v9[10] = v8;
  v9[9] = __PAIR64__(a3, a2);
  HIDWORD(v9[4]) = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(v9);
}
