/*
 * XREFs of ndisSetSystemPower @ 0x1C00131C8
 * Callers:
 *     ndisSetPower @ 0x1C0013948 (ndisSetPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012910 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0013050 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisRequestDeviceLowPower @ 0x1C001483C (ndisRequestDeviceLowPower.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C00148EC (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015150 (WPP_RECORDER_SF_LqZ.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00A56CC (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00FF774 (ndisCancelInitModeTimeoutTimer.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013B1C4 (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(_IO_STATUS_BLOCK *Context, __int64 a2, __int64 a3)
{
  enum _SYSTEM_POWER_STATE v3; // ebp
  int v4; // esi
  __int64 v6; // r15
  const struct _GUID *v8; // rcx
  int v9; // edx
  int v10; // ecx
  POWER_STATE v11; // r14d
  int v12; // eax
  __int64 v13; // rdx
  int v15; // edx
  int v16; // ecx
  unsigned __int64 Information; // rax
  unsigned __int64 v18; // rax
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx
  _IO_STATUS_BLOCK IoStatus; // [rsp+40h] [rbp-38h] BYREF
  POWER_STATE PowerState; // [rsp+88h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 24);
  v4 = 0;
  HIDWORD(IoStatus.Pointer) = 0;
  v6 = a2;
  *(_DWORD *)(a3 + 1332) = v3;
  v8 = &WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      96,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v3,
      a3,
      *(_QWORD *)(a3 + 3856));
    v8 = &WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids;
  }
  if ( *(_DWORD *)(a3 + 2248) != 1 || *(_DWORD *)(a3 + 1520) == 1 )
  {
    if ( v3 == PowerSystemWorking )
    {
      if ( (*(_DWORD *)(a3 + 124) & 0x800) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            14,
            98,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            a3);
        }
        ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
      }
      ndisMPowerPolicy(
        (struct _NDIS_MINIPORT_BLOCK *)a3,
        PowerSystemWorking,
        (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(v6 + 8) >> 8) & 0xF),
        (enum _DEVICE_POWER_STATE *)&PowerState,
        0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          14,
          99,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          a3);
      }
      if ( (byte_1C00E8043 & 4) != 0 )
        McTemplateK0jqxqd(
          v16,
          (unsigned int)&MiniportPowerStates,
          a3 + 4008,
          a3 + 4008,
          *(_DWORD *)(a3 + 4056),
          *(_QWORD *)(a3 + 4024),
          1,
          PowerState.SystemState);
      Information = Context[11].Information;
      *(_OWORD *)(Information - 72) = *(_OWORD *)Information;
      *(_OWORD *)(Information - 56) = *(_OWORD *)(Information + 16);
      *(_OWORD *)(Information - 40) = *(_OWORD *)(Information + 32);
      *(_QWORD *)(Information - 24) = *(_QWORD *)(Information + 48);
      *(_BYTE *)(Information - 69) = 0;
      v18 = Context[11].Information;
      *(_QWORD *)(v18 - 16) = ndisSetSystemPowerOnComplete;
      *(_QWORD *)(v18 - 8) = a3;
      *(_BYTE *)(v18 - 69) = -32;
      *(_BYTE *)(Context[11].Information + 3) |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3840), (PIRP)Context);
    }
    else
    {
      if ( v3 <= PowerSystemWorking )
        return v4;
      if ( v3 > PowerSystemHibernate )
      {
        if ( v3 == PowerSystemShutdown )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a2) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              a2,
              14,
              97,
              (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
              a3,
              6);
          }
          if ( (byte_1C00E8043 & 4) != 0 )
            McTemplateK0jqxqd(
              (_DWORD)v8,
              (unsigned int)&MiniportPowerSystemState,
              a3 + 4008,
              a3 + 4008,
              *(_DWORD *)(a3 + 4056),
              *(_QWORD *)(a3 + 4024),
              0,
              6);
          ndisSendSystemPowerStateIndication((struct _NDIS_MINIPORT_BLOCK *)a3, PowerSystemShutdown);
          if ( !ndisAllowWakeFromS5 )
            ndisCancelWaitWake(a3);
          ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
          ndisInvokeMiniportSysPowerNotify(
            (struct _NDIS_MINIPORT_BLOCK *)a3,
            (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(v6 + 8) >> 8) & 0xF),
            (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(v6 + 8) >> 12));
          if ( (*(_BYTE *)(*(_QWORD *)(a3 + 3760) + 26LL) & 1) == 0 )
            ndisMShutdownMiniport((struct _NDIS_MINIPORT_BLOCK *)a3);
          ++BYTE3(Context[4].Pointer);
          Context[11].Information += 72LL;
          Context[3].Status = 0;
          return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3840), (PIRP)Context);
        }
        return v4;
      }
      KeWaitForSingleObject((PVOID)(a3 + 4216), Executive, 0, 0, 0LL);
      ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
      ndisInvokeMiniportSysPowerNotify(
        (struct _NDIS_MINIPORT_BLOCK *)a3,
        (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(v6 + 8) >> 8) & 0xF),
        (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(v6 + 8) >> 12));
      if ( (unsigned int)ndisMPowerPolicy(
                           (struct _NDIS_MINIPORT_BLOCK *)a3,
                           v3,
                           (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(v6 + 8) >> 8) & 0xF),
                           (enum _DEVICE_POWER_STATE *)&PowerState,
                           0) == -2147483633 )
      {
        Context[3].Status = 0;
        IofCompleteRequest((PIRP)Context, 0);
        return v4;
      }
      v11.SystemState = PowerState.SystemState;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          14,
          100,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          a3,
          v3,
          PowerState.SystemState);
      }
      if ( (byte_1C00E8043 & 4) != 0 )
        McTemplateK0jqxqd(
          v10,
          (unsigned int)&MiniportPowerStates,
          a3 + 4008,
          a3 + 4008,
          *(_DWORD *)(a3 + 4056),
          *(_QWORD *)(a3 + 4024),
          v3,
          v11.SystemState);
      KeClearEvent((PRKEVENT)(a3 + 3728));
      ndisCancelInitModeTimeoutTimer(a3);
      ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a3, (enum _NDIS_DEVICE_POWER_STATE)v11.SystemState);
      *(_QWORD *)(Context[11].Information - 32) = *(_QWORD *)(a3 + 3824);
      *(_BYTE *)(Context[11].Information + 3) |= 1u;
      v12 = ndisRequestDeviceLowPower(a3, v11, (PREQUEST_POWER_COMPLETE)ndisRequestedDevicePowerIrpComplete, Context, 1);
      if ( v12 != 259 )
      {
        v19 = *(struct _MCGEN_TRACE_CONTEXT **)(a3 + 3832);
        IoStatus.Status = v12;
        IoStatus.Information = 0LL;
        LOBYTE(v13) = 2;
        ndisRequestedDevicePowerIrpComplete(v19, v13, (unsigned int)v11.SystemState, Context, &IoStatus);
      }
    }
    return 259;
  }
  ++BYTE3(Context[4].Pointer);
  Context[11].Information += 72LL;
  Context[3].Status = 0;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3840), (PIRP)Context);
}
