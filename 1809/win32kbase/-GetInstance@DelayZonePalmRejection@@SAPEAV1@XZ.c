/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0006714
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C00066C0 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C00EE510 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C00EE6A0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C013FB78 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C0141370 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C014CBF0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CEE0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C014FE10 (-PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ.c)
 *     AddEdgePalmRejectionZone @ 0x1C0150910 (AddEdgePalmRejectionZone.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C0150970 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0006758 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 */

struct DelayZonePalmRejection *DelayZonePalmRejection::GetInstance(void)
{
  struct DelayZonePalmRejection *result; // rax
  DelayZonePalmRejection *v1; // rcx

  if ( DelayZonePalmRejection::s_instance )
    return DelayZonePalmRejection::s_instance;
  result = (struct DelayZonePalmRejection *)Win32AllocPoolZInit(0x90uLL);
  DelayZonePalmRejection::s_instance = result;
  if ( result )
  {
    DelayZonePalmRejection::Initialize(v1);
    return DelayZonePalmRejection::s_instance;
  }
  return result;
}
