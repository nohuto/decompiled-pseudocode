/*
 * XREFs of EtwpSendSessionNotification @ 0x180050354
 * Callers:
 *     EtwpStopLoggerInstance @ 0x18004CF20 (EtwpStopLoggerInstance.c)
 *     EtwpStartUmLogger @ 0x18004FFC8 (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x180059EE0 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x18005A0C0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  __int128 v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _BYTE Notification[96]; // [rsp+30h] [rbp-29h] BYREF

  v8 = *(unsigned __int16 *)(a1 + 20);
  BYTE3(v8) = 1;
  memset(Notification, 0, sizeof(Notification));
  *(_DWORD *)&Notification[24] = -1;
  v6 = *(_OWORD *)(a1 + 56);
  *(_DWORD *)&Notification[4] = 96;
  *(GUID *)&Notification[40] = SessionNotificationGuid;
  *(_DWORD *)Notification = 7;
  *(_OWORD *)&Notification[56] = v6;
  *(_QWORD *)&Notification[80] = v8;
  *(_DWORD *)&Notification[72] = a2;
  *(_DWORD *)&Notification[76] = a3;
  *(_DWORD *)&Notification[36] = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock((PETW_NOTIFICATION_HEADER)Notification);
}
