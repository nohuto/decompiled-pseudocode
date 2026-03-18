/*
 * XREFs of HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C001243C
 * Callers:
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C00126E4 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_SyncCompletionRoutine @ 0x1C0014250 (HUBPDO_SyncCompletionRoutine.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C00201A0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C00287E4 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C0029368 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_GetUSBDErrorFromNTStatus(int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax

  switch ( a1 )
  {
    case -1073741810:
      return (unsigned int)-1073713152;
    case -1073741670:
      return (unsigned int)-1073737728;
    case -1073741637:
      return (unsigned int)-1073738240;
    case -1073741536:
      return (unsigned int)-1073676288;
    default:
      v2 = 0;
      if ( a1 )
      {
        v2 = -2147482880;
        if ( a1 != -1073741811 && a1 != -1073741823 )
        {
          v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 WdfDriverGlobals->Driver,
                 off_1C005F130);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v3 + 64),
            2u,
            2u,
            0xAu,
            (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
            a1);
        }
      }
      break;
  }
  return v2;
}
