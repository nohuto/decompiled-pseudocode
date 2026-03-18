/*
 * XREFs of ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C00B76CC
 * Callers:
 *     CleanupPowerRequestList @ 0x1C00B7660 (CleanupPowerRequestList.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CleanupPowerWatchdog(void **a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    memset(InputBuffer, 0, 0x60uLL);
    *a1 = 0LL;
    LODWORD(InputBuffer[0]) = 21;
    LOBYTE(InputBuffer[11]) = 1;
    InputBuffer[1] = v1;
    if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  }
}
