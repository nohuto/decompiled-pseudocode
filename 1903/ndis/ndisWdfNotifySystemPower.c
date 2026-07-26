/*
 * XREFs of ndisWdfNotifySystemPower @ 0x1C00A7128
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C009EDC0 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001295C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015150 (WPP_RECORDER_SF_LqZ.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00A56CC (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     ndisWdfSendPmParametersForSx @ 0x1C00A5FC0 (ndisWdfSendPmParametersForSx.c)
 *     ndisSelectiveSuspendStop @ 0x1C00B95C8 (ndisSelectiveSuspendStop.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00FF774 (ndisCancelInitModeTimeoutTimer.c)
 */

void __fastcall ndisWdfNotifySystemPower(__int64 a1, __int64 a2, __int64 a3)
{
  enum _NDIS_DEVICE_POWER_STATE v3; // ebp
  int v4; // esi
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // [rsp+38h] [rbp-10h]

  v3 = (int)a3;
  v4 = a2;
  v5 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x65u,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a2,
      a1,
      *(unsigned __int16 **)(a1 + 3856));
  if ( v4 == 1 )
  {
    if ( byte_1C00E8043 < 0 )
      McTemplateK0jqxq(
        a1,
        &PowerWakeUpDevice,
        &v5->InterfaceGuid,
        (__int64)&v5->InterfaceGuid,
        v5->IfIndex,
        v5->NetLuid.Value,
        1);
    v5->PnPFlags &= ~0x800u;
    a1 = MEMORY[0xFFFFF78000000014] - v5->LastSystemSleepTime.QuadPart;
    v6 = a1 / 10000;
    v5->TotalSystemSleepTimeMs += a1 / 10000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        14,
        102,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)v5);
    }
  }
  else if ( v4 > 1 )
  {
    if ( v4 <= 5 )
    {
      if ( v5->SelectiveSuspend )
        ndisSelectiveSuspendStop(v5, 6);
      v5->PnPFlags |= 0x800u;
      v5->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
      ndisWdfSendPmParametersForSx((__int64)v5);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v7) = v3;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x67u,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)v5,
          v4,
          v7);
      }
      KeClearEvent(&v5->OpenReadyEvent.Event);
      ndisCancelInitModeTimeoutTimer((char)v5);
      ndisPrepForLowPowerCommon(v5, v3);
    }
    else if ( v4 == 6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          14,
          104,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)v5,
          6);
      }
      if ( (byte_1C00E8043 & 4) != 0 )
        McTemplateK0jqxqd(
          a1,
          &MiniportPowerSystemState,
          &v5->InterfaceGuid,
          (__int64)&v5->InterfaceGuid,
          v5->IfIndex,
          v5->NetLuid.Value,
          6,
          6);
      ndisSendSystemPowerStateIndication(v5, PowerSystemShutdown);
    }
  }
  if ( (byte_1C00E8043 & 4) != 0 )
    McTemplateK0jqxqd(
      a1,
      &MiniportPowerStates,
      &v5->InterfaceGuid,
      (__int64)&v5->InterfaceGuid,
      v5->IfIndex,
      v5->NetLuid.Value,
      v4,
      v3);
}
