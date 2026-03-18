/*
 * XREFs of ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C005469C
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0054650 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0054B78 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherObjectByName(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = 0LL;
  if ( CRIMBase::SensorDispatcherObject::IsValid((CRIMBase::SensorDispatcherObject *)(a1 + 792)) )
  {
    if ( *(_DWORD *)(a1 + 808) != 10 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    return *(_QWORD *)(a1 + 840);
  }
  return v2;
}
