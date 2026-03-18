/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00FC47C
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C00FCE10 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1C00FDA30 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C00FCCD8 (rimHandlePnpWaitersOnOwnedDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(unsigned int *)(a1 + 96);
  RIMLockExclusive(v1 + 96);
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  *(_QWORD *)(v1 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 96, 0LL);
  KeLeaveCriticalRegion();
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)(v1 + 8 * v3 + 216));
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v7, 1, 0);
  if ( !*(_QWORD *)(v1 + 8 * v3 + 216) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  *(_QWORD *)(v1 + 8 * v3 + 216) = 0LL;
  *(_DWORD *)(v1 + 4 * v3 + 288) = 0;
  if ( *(_BYTE *)(v1 + 72) || *(_BYTE *)(v1 + 73) )
  {
    Win32FreePool(a1);
    *(_QWORD *)(v1 + 8 * v3 + 304) = 0LL;
  }
  if ( v7 && !v8 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return ObfDereferenceObject((PVOID)v1);
}
