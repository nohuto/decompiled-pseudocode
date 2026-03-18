/*
 * XREFs of ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C013FB78
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B70 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0006714 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C013F5AC (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C013F628 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C014FCD8 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ApiSetEditionDestroyEdgePalmRejectionZones @ 0x1C01614D0 (ApiSetEditionDestroyEdgePalmRejectionZones.c)
 */

void __fastcall CTouchProcessor::OnRimDeviceClosed(CTouchProcessor *this, void *a2)
{
  CTouchProcessor *v3; // rcx
  CTouchProcessor *v4; // rcx
  DelayZonePalmRejection *Instance; // rax
  CInpLockGuard *v6[8]; // [rsp+30h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v6,
    (struct CInpLockGuard *)&WPP_MAIN_CB.Queue.ListEntry.Blink[3].Blink,
    0LL);
  v3 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x147u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( CTouchProcessor::IsTouchDevice(v3, (unsigned __int64)a2) )
    ApiSetEditionDestroyEdgePalmRejectionZones(a2);
  if ( !CTouchProcessor::IsTouchpadDevice(v4, (unsigned __int64)a2) )
  {
    Instance = DelayZonePalmRejection::GetInstance();
    if ( Instance )
      DelayZonePalmRejection::OnDeviceRemoval(Instance, a2);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x148u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v6);
}
