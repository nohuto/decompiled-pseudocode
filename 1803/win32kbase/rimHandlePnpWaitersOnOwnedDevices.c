/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C00FCCD8
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00FC47C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00BCCB8 (WPP_RECORDER_SF_qqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 *i; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v7 = *(unsigned __int8 *)(((unsigned __int64)(i + 8) & -(__int64)(i != (__int64 *)16)) + 0x30);
    if ( (v7 == a2 || a2 == 2 && (_BYTE)v7 == 3)
      && *(_QWORD *)(((unsigned __int64)(i + 8) & -(__int64)(i != (__int64 *)16)) + 0x150) == a1
      && (*(_DWORD *)(((unsigned __int64)(i + 8) & -(__int64)(i != (__int64 *)16)) + 0xB8) & 0x10) != 0 )
    {
      v8 = *(_QWORD *)(((unsigned __int64)(i + 8) & -(__int64)(i != (__int64 *)16)) + 0x138);
      if ( !v8 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i + 8, v4);
        v8 = *(_QWORD *)(((unsigned __int64)(i + 8) & -(__int64)(i != (__int64 *)16)) + 0x138);
      }
      WPP_RECORDER_SF_qqq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x36u,
        (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
        a1,
        *(_QWORD *)(((unsigned __int64)(i + 8) & -(__int64)(i != (__int64 *)16)) + 0x20),
        v8);
      v6 = (unsigned __int64)(i + 8) & -(__int64)(i != (__int64 *)16);
      *(_DWORD *)(v6 + 184) &= ~0x10u;
      KeSetEvent(*(PRKEVENT *)(v6 + 0x160), 1, 0);
    }
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
