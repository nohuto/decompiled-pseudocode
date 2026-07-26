/*
 * XREFs of ndisQueryPower @ 0x1C012A4FC
 * Callers:
 *     ndisPowerDispatch @ 0x1C0019F10 (ndisPowerDispatch.c)
 *     ndisPowerIrpWorker @ 0x1C00A6C90 (ndisPowerIrpWorker.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C00137C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 */

NTSTATUS __fastcall ndisQueryPower(PIRP Irp, _DWORD *a2, __int64 a3)
{
  int v6; // edx
  int v7; // edx
  __int64 v8; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v11; // edi
  int v12; // edx
  __int64 v13; // rcx
  int v14; // edx
  int SetMiniportDeviceState; // eax
  int v16; // edx
  __int64 v17; // rcx
  char v18; // di
  _IO_STACK_LOCATION *v19; // rax
  _IO_STACK_LOCATION *v20; // rax
  int v21; // edx
  char v22[4]; // [rsp+38h] [rbp-110h]
  enum _DEVICE_POWER_STATE v23[4]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v24[22]; // [rsp+60h] [rbp-E8h] BYREF

  v23[0] = PowerDeviceUnspecified;
  memset(v24, 0, sizeof(v24));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      14,
      38,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a3);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v8 = (unsigned int)a2[4];
  if ( (_DWORD)v8 == 1 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3840), Irp);
  }
  if ( (_DWORD)v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v22 = a2[6];
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        0xEu,
        0x27u,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        a3,
        v8,
        *(_DWORD *)v22);
    }
    if ( (byte_1C00E8042 & 0x40) != 0 )
      McTemplateK0jqxqd(
        v8,
        &InvalidSystemPowerState,
        (const GUID *)(a3 + 4008),
        a3 + 4008,
        *(_DWORD *)(a3 + 4056),
        *(_QWORD *)(a3 + 4024),
        a2[4],
        a2[6]);
    v11 = -1073741808;
  }
  else
  {
    v11 = ndisMPowerPolicy(
            (struct _NDIS_MINIPORT_BLOCK *)a3,
            (enum _SYSTEM_POWER_STATE)a2[6],
            (enum _SYSTEM_POWER_STATE)((a2[2] >> 8) & 0xF),
            v23,
            1u);
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a3) || *(_DWORD *)(a3 + 1520) != 1 || v11 == -2147483633 )
    {
      Irp->IoStatus.Status = 0;
      IofCompleteRequest(Irp, 0);
      return 0;
    }
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          14,
          40,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          a3,
          a2[6]);
      }
      if ( (byte_1C00E8041 & 8) != 0 )
        McTemplateK0jqxqqq(
          v13,
          &QueryPowerFailed,
          (const GUID *)(a3 + 4008),
          a3 + 4008,
          *(_DWORD *)(a3 + 4056),
          *(_QWORD *)(a3 + 4024),
          v11,
          1,
          a2[6]);
    }
    else
    {
      ndisInitializeNetPnPEvent(v24, 0LL);
      LODWORD(v24[3]) = 4;
      v24[2] = v23;
      LODWORD(v24[1]) = 1;
      if ( (unsigned int)ndisDevicePnPEventNotifyFiltersAndAllTransports(a3, (__int64)v24)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          14,
          41,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          a3);
      }
      if ( (*(_DWORD *)(a3 + 124) & 0x20) != 0 )
      {
        SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(
                                   (struct _NDIS_MINIPORT_BLOCK *)a3,
                                   v23[0],
                                   -50265854,
                                   0);
        v18 = SetMiniportDeviceState;
        if ( SetMiniportDeviceState )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v16) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              14,
              42,
              (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
              a3);
          }
          if ( (byte_1C00E8041 & 8) != 0 )
            McTemplateK0jqxqqq(
              v17,
              &QueryPowerFailed,
              (const GUID *)(a3 + 4008),
              a3 + 4008,
              *(_DWORD *)(a3 + 4056),
              *(_QWORD *)(a3 + 4024),
              v18,
              2,
              0);
        }
      }
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v19 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v19[-1].MajorFunction = *(_OWORD *)&v19->MajorFunction;
      *(_OWORD *)&v19[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v19->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v19[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v19->Parameters.ReadWriteConfig.Length;
      v19[-1].FileObject = v19->FileObject;
      v19[-1].Control = 0;
      *(enum _DEVICE_POWER_STATE *)(a3 + 3144) = v23[0];
      *(_QWORD *)(a3 + 776) = Irp;
      IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), Irp, File, 1u, 0x20u);
      v20 = Irp->Tail.Overlay.CurrentStackLocation;
      v20[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisQueryPowerCompleteSystemState;
      v20[-1].Context = (void *)a3;
      v20[-1].Control = -32;
      IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3840), Irp);
      v11 = 259;
    }
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v11 < 0 )
  {
    Irp->IoStatus.Status = v11;
    IofCompleteRequest(Irp, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v21,
      14,
      43,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a3,
      v11);
  }
  return v11;
}
