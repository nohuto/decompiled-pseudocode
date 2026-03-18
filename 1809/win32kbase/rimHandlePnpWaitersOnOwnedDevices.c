/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C005234C
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0052240 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00F4580 (WPP_RECORDER_SF_qqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *i; // rbx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v7 = (__int64)(i + 15);
    if ( i == (__int64 *)16 )
      v7 = 48LL;
    v8 = *(unsigned __int8 *)v7;
    if ( v8 == a2 || (_BYTE)v8 == 3 && a2 == 2 )
    {
      v9 = (__int64)(i + 51);
      if ( i == (__int64 *)16 )
        v9 = 336LL;
      if ( *(_QWORD *)v9 == a1 )
      {
        v10 = (__int64)(i + 32);
        if ( i == (__int64 *)16 )
          v10 = 184LL;
        if ( (*(_DWORD *)v10 & 0x10) != 0 )
        {
          v11 = (__int64)(i + 48);
          if ( i == (__int64 *)16 )
            v11 = 312LL;
          v12 = *(_QWORD *)v11;
          if ( !*(_QWORD *)v11 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v4, v5);
            v12 = *(_QWORD *)v11;
          }
          v13 = 32;
          v14 = (__int64)(i + 13);
          if ( i == (__int64 *)16 )
            v14 = 32LL;
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_qqq(
            gRimLog,
            v13,
            22,
            58,
            (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
            a1,
            *(_QWORD *)v14,
            v12);
          *(_DWORD *)v10 &= ~0x10u;
          v15 = (__int64)(i + 53);
          if ( i == (__int64 *)16 )
            v15 = 352LL;
          KeSetEvent(*(PRKEVENT *)v15, 1, 0);
        }
      }
    }
  }
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
