/*
 * XREFs of HUBMISC_ControlTransfer @ 0x1C002E39C
 * Callers:
 *     HUBHTX_GetDescriptor @ 0x1C0002E7C (HUBHTX_GetDescriptor.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003240 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusUsingControlTransfer @ 0x1C0003E80 (HUBHTX_GetPortStatusUsingControlTransfer.c)
 *     HUBHTX_AckPortChangeUsingControlTransfer @ 0x1C0003FDC (HUBHTX_AckPortChangeUsingControlTransfer.c)
 *     HUBHTX_ResetPortUsingControlTransfer @ 0x1C00040F8 (HUBHTX_ResetPortUsingControlTransfer.c)
 *     HUBHTX_DisablePortUsingControlTransfer @ 0x1C0004230 (HUBHTX_DisablePortUsingControlTransfer.c)
 *     HUBHTX_SettingPortPowerUsingControlTransfer @ 0x1C0004358 (HUBHTX_SettingPortPowerUsingControlTransfer.c)
 *     HUBHTX_Suspend30PortUsingControlTransfer @ 0x1C0004494 (HUBHTX_Suspend30PortUsingControlTransfer.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C0005BB0 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C0006024 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C0006470 (HUBHTX_ClearTTBuffer.c)
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x1C00067BC (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 *     HUBHTX_SetLinkStateToRxDetectUsingControlTransfer @ 0x1C00068EC (HUBHTX_SetLinkStateToRxDetectUsingControlTransfer.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C0008690 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0008F30 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C00093C0 (HUBHSM_SettingHubDepth.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000C65C (HUBFDO_GetPortStatusForDebugging.c)
 *     HUBPSM20_InitiatingResume @ 0x1C000FFC0 (HUBPSM20_InitiatingResume.c)
 *     HUBPSM20_Suspending @ 0x1C00107F0 (HUBPSM20_Suspending.c)
 *     HUBPSM30_InitiatingResume @ 0x1C0010EE0 (HUBPSM30_InitiatingResume.c)
 *     HUBPSM30_InitiatingWarmResetPort @ 0x1C0011020 (HUBPSM30_InitiatingWarmResetPort.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C0011530 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C0011690 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPSM30_DisablingRemoteWakeOnPort @ 0x1C0011BF0 (HUBPSM30_DisablingRemoteWakeOnPort.c)
 *     HUBPSM30_EnablingRemoteWakeOnPort @ 0x1C0011D30 (HUBPSM30_EnablingRemoteWakeOnPort.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x1C001F230 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x1C001F300 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C001F3D0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C0020320 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C00209B0 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_EnablingLTM @ 0x1C0021410 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C0021500 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C0021880 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C00219A0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C0021A70 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C0021B40 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C0021DC0 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0026910 (HUBDTX_GetMsOsFeatureDescriptor.c)
 *     HUBDTX_GetDescriptor @ 0x1C002699C (HUBDTX_GetDescriptor.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C0026C2C (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C0027084 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0027BAC (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0027CC0 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C002896C (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C002951C (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C002979C (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMISC_ControlTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        char a9)
{
  _QWORD *v9; // rbx
  int v10; // esi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-71h]
  _DWORD v21[3]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+3Ch] [rbp-5Dh]
  int v23; // [rsp+44h] [rbp-55h]
  _QWORD v24[9]; // [rsp+48h] [rbp-51h] BYREF

  v9 = a4 + 3;
  v10 = 0;
  a4[4] = a2;
  *((_DWORD *)a4 + 6) = 3276936;
  v14 = 8;
  *((_DWORD *)a4 + 14) = 8;
  if ( a8 )
  {
    v14 = 10;
    *((_DWORD *)a4 + 14) = 10;
  }
  if ( *((char *)a4 + 152) < 0 )
  {
    v14 |= 1u;
    *((_DWORD *)a4 + 14) = v14;
  }
  if ( a9 )
    *((_DWORD *)a4 + 14) = v14 | 0x10;
  a4[9] = 0LL;
  *((_DWORD *)a4 + 15) = a7;
  a4[8] = a6;
  *((_DWORD *)a4 + 20) = 5000;
  *((_DWORD *)a4 + 10) = *((_DWORD *)a4 + 40);
  memset(v24, 0, sizeof(v24));
  v15 = *a4;
  LOBYTE(v24[0]) = 15;
  LODWORD(v24[3]) = 2228227;
  v24[1] = v9;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v15,
    v24);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    *a4,
    a5,
    a3);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          *a4,
          *(_QWORD *)(a1 + 32),
          0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x3Au, (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, *a4);
    if ( v10 < 0 )
    {
      v22 = 0LL;
      v23 = 0;
      v21[1] = 0;
      v21[2] = 0;
      v16 = *a4;
      v21[0] = 24;
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
              WdfDriverGlobals,
              v16,
              v21);
      if ( v17 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C0064130);
        v20 = v17;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v18 + 64),
          2u,
          2u,
          0x3Bu,
          (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
          v20);
      }
    }
  }
  return (unsigned int)v10;
}
