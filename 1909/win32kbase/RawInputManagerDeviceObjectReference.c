/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C0062540
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0062114 (RIMStartDeviceSpecificRead.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0062340 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C00623F0 (HMCreateHandleForObject.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00A49D8 (RIMHandleTTMDeviceArrival.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BD3F8 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0141150 (RIMFindSiblingMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C0143B70 (RIMFindTouchDigitizerWithSize.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C014E5F0 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
