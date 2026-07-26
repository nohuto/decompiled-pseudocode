/*
 * XREFs of ndisSetSystemPower @ 0x1C00B8930
 * Callers:
 *     ndisSetPower @ 0x1C00B887C (ndisSetPower.c)
 * Callees:
 *     NdisResetEvent @ 0x1C0008E20 (NdisResetEvent.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010508 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C0010E90 (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C00112B0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisCancelWaitWake @ 0x1C0011794 (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     WPP_SF_LqZ @ 0x1C0049B34 (WPP_SF_LqZ.c)
 *     ndisSendSystemPowerStateIndication @ 0x1C0069D10 (ndisSendSystemPowerStateIndication.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B8D00 (ndisRequestDeviceLowPower.c)
 *     ndisPowerSaveStop @ 0x1C00B8DB0 (ndisPowerSaveStop.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00BE278 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisMPowerPolicy @ 0x1C010AA50 (ndisMPowerPolicy.c)
 *     ndisMShutdownMiniport @ 0x1C0119B2C (ndisMShutdownMiniport.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(PIRP Irp, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v15; // rax
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v18[2]; // [rsp+40h] [rbp-38h] BYREF
  enum _NDIS_DEVICE_POWER_STATE v19; // [rsp+88h] [rbp+10h]

  v3 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a3 + 1332) = v3;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_LqZ(0x5Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v3, a3, *(_QWORD *)(a3 + 3888));
  if ( *(_DWORD *)(a3 + 2264) != 1 || *(_DWORD *)(a3 + 1520) == 1 )
  {
    if ( v3 == 1 )
    {
      if ( (*(_DWORD *)(a3 + 124) & 0x800) == 0 )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 3u )
          WPP_SF_q(0x5Du, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
        ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3);
      }
      ndisMPowerPolicy((NDIS_HANDLE)a3, 0);
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(0x5Eu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
      if ( (byte_1C00A2083 & 4) != 0 )
        McTemplateK0jqxqd(
          v13,
          &MiniportPowerStates,
          (const GUID *)(a3 + 4040),
          a3 + 4040,
          *(_DWORD *)(a3 + 4088),
          *(_QWORD *)(a3 + 4056),
          1,
          v19);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      v15[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetSystemPowerOnComplete;
      v15[-1].Context = (void *)a3;
      v15[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3872), Irp);
    }
    else
    {
      if ( v3 <= 1 )
        return v7;
      if ( v3 > 5 )
      {
        if ( v3 == 6 )
        {
          if ( (unsigned __int8)byte_1C00A025D >= 4u )
            WPP_SF_qD(0x5Cu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, 6);
          if ( (byte_1C00A2083 & 4) != 0 )
            McTemplateK0jqxqd(
              (__int64)Irp,
              &MiniportPowerSystemState,
              (const GUID *)(a3 + 4040),
              a3 + 4040,
              *(_DWORD *)(a3 + 4088),
              *(_QWORD *)(a3 + 4056),
              0,
              6);
          ndisSendSystemPowerStateIndication((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
          if ( !ndisAllowWakeFromS5 )
            ndisCancelWaitWake(a3);
          ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3);
          ndisInvokeMiniportSysPowerNotify(
            (struct _NDIS_MINIPORT_BLOCK *)a3,
            (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(a2 + 8) >> 8) & 0xF),
            (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(a2 + 8) >> 12));
          if ( (*(_BYTE *)(*(_QWORD *)(a3 + 3792) + 26LL) & 1) == 0 )
            ndisMShutdownMiniport(a3);
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Status = 0;
          return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3872), Irp);
        }
        return v7;
      }
      KeWaitForSingleObject((PVOID)(a3 + 4256), Executive, 0, 0, 0LL);
      ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3);
      ndisInvokeMiniportSysPowerNotify(
        (struct _NDIS_MINIPORT_BLOCK *)a3,
        (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(a2 + 8) >> 8) & 0xF),
        (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(a2 + 8) >> 12));
      if ( (unsigned int)ndisMPowerPolicy((NDIS_HANDLE)a3, 0) == -2147483633 )
      {
        Irp->IoStatus.Status = 0;
        IofCompleteRequest(Irp, 0);
        return v7;
      }
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
      {
        LODWORD(Timeout) = v19;
        WPP_SF_qdD(0x5Fu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v3, Timeout);
      }
      if ( (byte_1C00A2083 & 4) != 0 )
        McTemplateK0jqxqd(
          v8,
          &MiniportPowerStates,
          (const GUID *)(a3 + 4040),
          a3 + 4040,
          *(_DWORD *)(a3 + 4088),
          *(_QWORD *)(a3 + 4056),
          v3,
          v19);
      NdisResetEvent((PNDIS_EVENT)(a3 + 3760));
      LOBYTE(v9) = 1;
      ndisCancelInitModeTimeoutTimer(a3, v9);
      ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a3, v19);
      LOWORD(Timeout) = 1;
      Irp->Tail.Overlay.CurrentStackLocation[-1].DeviceObject = *(_DEVICE_OBJECT **)(a3 + 3856);
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v10 = ndisRequestDeviceLowPower(a3, (unsigned int)v19, ndisRequestedDevicePowerIrpComplete, Irp, (_DWORD)Timeout);
      if ( v10 != 259 )
      {
        v16 = *(struct _MCGEN_TRACE_CONTEXT **)(a3 + 3864);
        LODWORD(v18[0]) = v10;
        v18[1] = 0LL;
        LOBYTE(v11) = 2;
        ndisRequestedDevicePowerIrpComplete(v16, v11, (unsigned int)v19, (__int64)Irp, (const unsigned int *)v18);
      }
    }
    return 259;
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = 0;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3872), Irp);
}
