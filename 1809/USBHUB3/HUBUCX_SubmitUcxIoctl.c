/*
 * XREFs of HUBUCX_SubmitUcxIoctl @ 0x1C00209F4
 * Callers:
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C001AF00 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C001B080 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C001BD40 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C001CE00 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x1C001EB50 (HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C0020030 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x1C0020C44 (HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C0020CE8 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0020E98 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C00210E4 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C002120C (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0021478 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0021638 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C00231F4 (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C00232A8 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C002335C (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C002340C (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C001243C (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_SubmitUcxIoctl(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int v11; // ebx
  int USBDErrorFromNTStatus; // eax
  int v14; // [rsp+28h] [rbp-60h]
  _DWORD v15[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 416);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v15[3] = 0;
  v16 = 0LL;
  v15[1] = 0;
  v15[2] = 0;
  v15[0] = 24;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v4,
         v15);
  if ( v6 < 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005F130);
    v14 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v7 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
      v14);
  }
  v8 = *(_QWORD *)(a1 + 432);
  v9 = *(_QWORD *)(a1 + 416);
  *(_DWORD *)(a1 + 440) = a2;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v5,
          v9,
          a2,
          v8,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v11 = v10;
  if ( v10 < 0 )
    goto LABEL_6;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 416),
    HUBUCX_UCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 416),
          v5,
          0LL) )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 416));
    v11 = v10;
LABEL_6:
    *(_DWORD *)(a1 + 1560) = v10;
    if ( v10 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v10);
    *(_DWORD *)(a1 + 1564) = USBDErrorFromNTStatus;
  }
  if ( v11 < 0 )
    HUBSM_AddEvent(a1 + 504, 4020);
  return (unsigned int)v11;
}
