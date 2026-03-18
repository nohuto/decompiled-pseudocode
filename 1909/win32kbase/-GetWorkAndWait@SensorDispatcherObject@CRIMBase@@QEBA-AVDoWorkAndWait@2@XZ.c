/*
 * XREFs of ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C0058BC0
 * Callers:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0058AFC (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::GetWorkAndWait(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rsi
  __int64 v8; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v7 = *(void **)(a1 + 48);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(a1 + 20) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    *(_QWORD *)a2 = v7;
    *(_QWORD *)(a2 + 8) = v8;
    ObfReferenceObject(v7);
    ObfReferenceObject(*(PVOID *)(a2 + 8));
  }
  else
  {
LABEL_7:
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
