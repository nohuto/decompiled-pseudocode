/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074
 * Callers:
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BAE78 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC818 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisRequestDeviceLowPower @ 0x1C001483C (ndisRequestDeviceLowPower.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ndisRequestWaitWake @ 0x1C0032E7C (ndisRequestWaitWake.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005F150 (WPP_RECORDER_SF_qdD_ea_1C005F150.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00BA880 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD598 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00FC6F0 (ndisMInvokeDevicePowerNotify.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C011C674 (-ndisDisconnectInStandby@@YA_NXZ.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011D330 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // r14
  _DEVICE_POWER_STATE DeviceWake; // r15d
  char v6; // di
  bool v7; // bp
  int v8; // edx
  int v9; // edx
  int v10; // eax
  char v11; // di
  int v12; // eax
  unsigned int v13; // edi

  AoAc = a1->AoAc;
  DeviceWake = PowerDeviceD3;
  ndisCancelWaitWake((__int64)a1);
  v6 = (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2;
  v7 = a1->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
    && *((_WORD *)&a1->NetLuid.Info + 3) != 281
    && ndisDisconnectInStandby();
  v8 = 14;
  if ( v6 && AoAc->RemoteWakeEnabled )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        14,
        33,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        (char)a1);
    }
    DeviceWake = a1->DeviceCaps.DeviceWake;
    ndisMInvokeDevicePowerNotify((__int64)a1, DeviceWake);
    if ( v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          14,
          35,
          (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
          (char)a1);
      }
    }
    else
    {
      ndisWdmSendOidPmParametersForAoAc(a1);
      v10 = ndisRequestWaitWake((__int64)a1, (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
      v11 = v10;
      if ( v10 != 259 )
      {
        NdisUnexpectedAoAcError(a1, 5u, v10);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x22u,
            (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
            v11,
            a1);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      14,
      0xEu,
      0x24u,
      (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
      (char)a1,
      v6,
      AoAc->RemoteWakeEnabled);
  }
  ndisUpdateMiniportCsTrafficStatistics(a1, 1);
  v12 = ndisRequestDeviceLowPower(
          (__int64)a1,
          (POWER_STATE)DeviceWake,
          (PREQUEST_POWER_COMPLETE)ndisNicQuietRequestComplete,
          a1,
          2u);
  v13 = v12;
  if ( v12 == 259 )
  {
    v13 = 0;
    if ( a2 )
      KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  }
  else
  {
    NdisUnexpectedAoAcError(a1, 6u, v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x25u,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        v13,
        a1);
  }
  return v13;
}
