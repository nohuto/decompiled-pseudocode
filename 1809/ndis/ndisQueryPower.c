/*
 * XREFs of ndisQueryPower @ 0x1C010A6B4
 * Callers:
 *     ndisPowerDispatch @ 0x1C0024CD0 (ndisPowerDispatch.c)
 *     ndisPowerIrpWorker @ 0x1C00F5600 (ndisPowerIrpWorker.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B8374 (ndisQuerySetMiniportDeviceState.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 *     ndisMPowerPolicy @ 0x1C010AA50 (ndisMPowerPolicy.c)
 */

NTSTATUS __fastcall ndisQueryPower(PIRP Irp, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // edi
  __int64 v11; // rcx
  int SetMiniportDeviceState; // eax
  __int64 v13; // rcx
  char v14; // di
  _IO_STACK_LOCATION *v15; // rax
  _IO_STACK_LOCATION *v16; // rax
  ULONG RemlockSize; // [rsp+20h] [rbp-128h]
  int v18; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-E8h] BYREF
  int v20; // [rsp+68h] [rbp-E0h]
  int *v21; // [rsp+70h] [rbp-D8h]
  int v22; // [rsp+78h] [rbp-D0h]

  v18 = 0;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x26u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 == 1 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3872), Irp);
  }
  if ( v7 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
    {
      RemlockSize = *(_DWORD *)(a2 + 24);
      WPP_SF_qdD(0x27u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v7, RemlockSize);
    }
    if ( (byte_1C00A2082 & 0x40) != 0 )
      McTemplateK0jqxqd(
        v6,
        &InvalidSystemPowerState,
        (const GUID *)(a3 + 4040),
        a3 + 4040,
        *(_DWORD *)(a3 + 4088),
        *(_QWORD *)(a3 + 4056),
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 24));
    v10 = -1073741808;
  }
  else
  {
    v10 = ndisMPowerPolicy((NDIS_HANDLE)a3, 1);
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a3) || *(_DWORD *)(a3 + 1520) != 1 || v10 == -2147483633 )
    {
      Irp->IoStatus.Status = 0;
      IofCompleteRequest(Irp, 0);
      return 0;
    }
    if ( v10 < 0 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_qD(0x28u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, *(_DWORD *)(a2 + 24));
      if ( (byte_1C00A2081 & 8) != 0 )
        McTemplateK0jqxqdq(
          v11,
          &QueryPowerFailed,
          (const GUID *)(a3 + 4040),
          a3 + 4040,
          *(_DWORD *)(a3 + 4088),
          *(_QWORD *)(a3 + 4056),
          v10,
          56,
          *(_DWORD *)(a2 + 24));
    }
    else
    {
      ndisInitializeNetPnPEvent(&v19, 0LL);
      v20 = 1;
      v21 = &v18;
      v22 = 4;
      if ( (unsigned int)ndisDevicePnPEventNotifyFiltersAndAllTransports(
                           (struct _NDIS_MINIPORT_BLOCK *)a3,
                           (__int64)&v19)
        && (unsigned __int8)byte_1C00A025D >= 2u )
      {
        WPP_SF_q(0x29u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
      }
      if ( (*(_DWORD *)(a3 + 124) & 0x20) != 0 )
      {
        SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a3, v18, -50265854, 0);
        v14 = SetMiniportDeviceState;
        if ( SetMiniportDeviceState )
        {
          if ( (unsigned __int8)byte_1C00A025D >= 4u )
            WPP_SF_q(0x2Au, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
          if ( (byte_1C00A2081 & 8) != 0 )
            McTemplateK0jqxqdq(
              v13,
              &QueryPowerFailed,
              (const GUID *)(a3 + 4040),
              a3 + 4040,
              *(_DWORD *)(a3 + 4088),
              *(_QWORD *)(a3 + 4056),
              v14,
              105,
              0);
        }
      }
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
      *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v15[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v15->Parameters.ReadWriteConfig.Length;
      v15[-1].FileObject = v15->FileObject;
      v15[-1].Control = 0;
      *(_DWORD *)(a3 + 3160) = v18;
      *(_QWORD *)(a3 + 776) = Irp;
      IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4152), Irp, File, 1u, 0x20u);
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisQueryPowerCompleteSystemState;
      v16[-1].Context = (void *)a3;
      v16[-1].Control = -32;
      IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3872), Irp);
      v10 = 259;
    }
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v10 < 0 )
  {
    Irp->IoStatus.Status = v10;
    IofCompleteRequest(Irp, 0);
  }
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(0x2Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v10);
  return v10;
}
