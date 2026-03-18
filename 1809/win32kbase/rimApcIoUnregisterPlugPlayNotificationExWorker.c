/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0052240
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C0052450 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1C0125CB0 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C005234C (rimHandlePnpWaitersOnOwnedDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(unsigned int *)(a1 + 96);
  RIMLockExclusive(v1 + 104);
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)(v1 + 8 * v3 + 224));
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v8, 1, 0);
  if ( !*(_QWORD *)(v1 + 8 * v3 + 224) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  *(_QWORD *)(v1 + 8 * v3 + 224) = 0LL;
  *(_DWORD *)(v1 + 4 * v3 + 296) = 0;
  if ( *(_BYTE *)(v1 + 80) || *(_BYTE *)(v1 + 81) )
  {
    Win32FreePool(a1);
    *(_QWORD *)(v1 + 8 * v3 + 312) = 0LL;
  }
  if ( v8 && !v9 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return ObfDereferenceObject((PVOID)v1);
}
