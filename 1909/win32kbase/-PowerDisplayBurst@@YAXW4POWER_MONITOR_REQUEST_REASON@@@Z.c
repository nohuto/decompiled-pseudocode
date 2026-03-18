/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0104910
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00648AC (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C0065410 (QueuePowerRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerDisplayBurst(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  DWORD1(v4) = 0;
  v3 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 6:
      qword_1C0212760 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 5:
    case 0x10:
      qword_1C0212768 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 0x19:
      qword_1C0212770 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      break;
  }
  if ( !dword_1C02127CC )
  {
    LODWORD(v4) = 4;
    *((_QWORD *)&v4 + 1) = v3;
    QueuePowerRequest(&v4, 0);
  }
}
