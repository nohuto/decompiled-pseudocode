/*
 * XREFs of ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C016C3B4
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C00A62D0 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0035C58 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C016BED4 (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0180968 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     IsTouchpadDevice @ 0x1C018230C (IsTouchpadDevice.c)
 *     ApiSetEditionDestroyEdgePalmRejectionZones @ 0x1C01995CC (ApiSetEditionDestroyEdgePalmRejectionZones.c)
 */

void __fastcall CTouchProcessor::OnRimDeviceClosed(CTouchProcessor *this, void *a2)
{
  void *v2; // rbx
  int v3; // edx
  DelayZonePalmRejection *Instance; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        331,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
  if ( CTouchProcessor::IsTouchDevice(this, (unsigned __int64)v2) )
    ApiSetEditionDestroyEdgePalmRejectionZones(v2);
  if ( !(unsigned __int8)IsTouchpadDevice(v2) )
  {
    Instance = DelayZonePalmRejection::GetInstance();
    if ( Instance )
      DelayZonePalmRejection::OnDeviceRemoval(Instance, v2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        7,
        332,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
}
