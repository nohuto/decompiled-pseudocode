/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C006F750
 * Callers:
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006F2B0 (RIMStartDeviceSpecificRead.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F4E0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C006F600 (HMCreateHandleForObject.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00A5A28 (RIMHandleTTMDeviceArrival.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BF498 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMFindSiblingMouseDevice @ 0x1C01437C0 (RIMFindSiblingMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C01461E0 (RIMFindTouchDigitizerWithSize.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C0150C60 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  __int64 v4; // r8

  v3 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v3 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v4);
  return (unsigned int)v3;
}
