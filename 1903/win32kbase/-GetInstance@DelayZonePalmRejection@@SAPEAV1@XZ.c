/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0036778
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0036724 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C01169A0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0116B30 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C016E5A4 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C016FE30 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017EB80 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017EBC0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017F530 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     AddEdgePalmRejectionZone @ 0x1C01838C0 (AddEdgePalmRejectionZone.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C0183920 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C005C0CC (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 */

struct DelayZonePalmRejection *DelayZonePalmRejection::GetInstance(void)
{
  struct DelayZonePalmRejection *result; // rax
  DelayZonePalmRejection *v1; // rcx

  if ( DelayZonePalmRejection::s_instance )
    return DelayZonePalmRejection::s_instance;
  result = (struct DelayZonePalmRejection *)Win32AllocPoolZInit(0xA8uLL, 2053403477LL);
  DelayZonePalmRejection::s_instance = result;
  if ( result )
  {
    DelayZonePalmRejection::Initialize(v1);
    return DelayZonePalmRejection::s_instance;
  }
  return result;
}
