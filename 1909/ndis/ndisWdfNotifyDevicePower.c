/*
 * XREFs of ndisWdfNotifyDevicePower @ 0x1C00A7114
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C009EF90 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001295C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00143F4 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015150 (WPP_RECORDER_SF_LqZ.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     ndisWdfDevicePowerDown @ 0x1C00A5954 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5BE0 (ndisWdfDevicePowerOn.c)
 *     ndisWdfPowerResumeComplete @ 0x1C00BA78C (ndisWdfPowerResumeComplete.c)
 *     ndisWdfSendPmParametersForSuspend @ 0x1C00BA7D8 (ndisWdfSendPmParametersForSuspend.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BB018 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BB110 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00BCB00 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BD96C (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C00BD9B8 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00FF708 (ndisSetDeviceInterfaceState.c)
 */

void __fastcall ndisWdfNotifyDevicePower(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  enum _NDIS_DEVICE_POWER_STATE v3; // esi
  int v4; // ebp
  struct _NDIS_MINIPORT_AOAC *v6; // rcx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx

  v3 = (int)a3;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x69u,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a3,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( (byte_1C00E8081 & 8) != 0 )
    McTemplateK0jqxqd(
      (__int64)a1,
      &MiniportPowerDeviceState,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      1,
      v3);
  NDIS_COUNT_POWER_TRANSITION(a1, v3);
  if ( v3 == NdisDeviceStateD0 )
  {
    AoAc = a1->AoAc;
    if ( AoAc )
    {
      ndisAoAcResumeRefTimeAccumulation(AoAc);
      a1->AoAc->WakeIrpStartTime = KeQueryUnbiasedInterruptTime();
    }
    if ( !v4 )
    {
      if ( a1->AoAc && ndisWdfIsAoAcPowerTransition(a1) )
      {
        ndisWdfRequestNicActive(a1, RunAsynchronous, NdisAoAcTempRefWake);
      }
      else if ( a1->SelectiveSuspend )
      {
        ndisWdfPowerResumeComplete(a1);
        return;
      }
    }
    ndisWdfDevicePowerOn(a1);
  }
  else if ( (unsigned int)(v3 - 2) <= 2 )
  {
    v6 = a1->AoAc;
    if ( v6 )
      ndisAoAcPauseRefTimeAccumulation(v6);
    if ( !v4 )
    {
      if ( a1->AoAc && ndisWdfIsAoAcPowerTransition(a1) )
      {
        ndisNicQuietRequestComplete(0LL, 2u, (POWER_STATE)v3, a1, 0LL);
      }
      else if ( a1->SelectiveSuspend )
      {
        ndisWdfSendPmParametersForSuspend((char)a1);
        return;
      }
    }
    if ( (a1->PnPFlags & 0x800) != 0
      || (KeClearEvent(&a1->OpenReadyEvent.Event), ndisPrepForLowPowerCommon(a1, v3), (a1->PnPFlags & 0x800) != 0) )
    {
      ndisSetDeviceInterfaceState(a1, 0LL);
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
    }
    ndisWdfDevicePowerDown((__int64)a1, v3);
  }
}
