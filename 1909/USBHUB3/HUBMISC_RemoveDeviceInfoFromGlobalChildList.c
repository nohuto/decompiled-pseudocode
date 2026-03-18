/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C002C668
 * Callers:
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001C020 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C001C0D0 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C001C6E0 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured @ 0x1C001D030 (HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured.c)
 *     HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x1C001FDB0 (HUBDSM_RequestingDeviceCycleInReportingToPnp.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C0075ED0 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 2152);
  if ( result )
    return USBD_RemoveDeviceFromGlobalList();
  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v2 + 204) & 0x200) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1336), 0xFFFFFFBF);
    result = *(_QWORD *)(a1 + 2152);
    if ( result )
      return USBD_RemoveDeviceFromGlobalList();
  }
  return result;
}
