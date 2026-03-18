/*
 * XREFs of DpiFdoDispatchPnp @ 0x1C015E820
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

__int64 __fastcall DpiFdoDispatchPnp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DeviceExtension; // [rsp+20h] [rbp-88h]
  char v9; // [rsp+28h] [rbp-80h]
  int Status; // [rsp+2Ch] [rbp-7Ch]
  UCHAR MinorFunction; // [rsp+30h] [rbp-78h]
  unsigned int v12; // [rsp+38h] [rbp-70h]
  unsigned int v13; // [rsp+3Ch] [rbp-6Ch]
  _QWORD *v14; // [rsp+40h] [rbp-68h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+48h] [rbp-60h]
  _QWORD *v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]

  Status = -1073741637;
  v9 = 0;
  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction < 0x18u
    && *(_QWORD *)(DeviceExtension + 8LL * CurrentStackLocation->MinorFunction + 288) )
  {
    return (*(unsigned int (__fastcall **)(struct _DEVICE_OBJECT *, IRP *))(DeviceExtension
                                                                          + 8LL * CurrentStackLocation->MinorFunction
                                                                          + 288))(
             a1,
             a2);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  switch ( MinorFunction )
  {
    case 0u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      *(_DWORD *)(DeviceExtension + 284) = 1;
      *(_DWORD *)(DeviceExtension + 280) = 1;
      PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = *(_DWORD *)(DeviceExtension + 240);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 236) = 2;
      Status = 0;
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      }
      goto LABEL_68;
    case 1u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      if ( byte_1C008E751 || *(_BYTE *)(DeviceExtension + 480) )
      {
        v9 = 1;
        Status = -1073741823;
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v5);
        v16[3] = a1;
        v16[4] = (unsigned __int8)byte_1C008E751;
        v16[5] = *(unsigned __int8 *)(DeviceExtension + 480);
        WdLogEvent5_WdError(v16);
      }
      else if ( *(_DWORD *)(DeviceExtension + 236) == 6 )
      {
        Status = 0;
      }
      else
      {
        if ( *(_DWORD *)(DeviceExtension + 236) == 4 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5);
          v14[3] = 275LL;
          v14[4] = 21LL;
          v14[5] = DeviceExtension;
          v14[6] = -1073741823LL;
          WdLogEvent5_WdCriticalError(v14);
        }
        *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = *(_DWORD *)(DeviceExtension + 240);
        ++*(_DWORD *)(DeviceExtension + 276);
        *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
        *(_DWORD *)(DeviceExtension + 236) = 5;
        Status = 0;
      }
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      }
      goto LABEL_68;
    case 3u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v9 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 )
      {
        if ( *(_DWORD *)(DeviceExtension + 236) == 5 )
        {
          *(_DWORD *)(DeviceExtension + 236) = *(_DWORD *)(DeviceExtension + 240);
          v13 = *(_DWORD *)(DeviceExtension + 276) - 1;
          *(_DWORD *)(DeviceExtension + 276) = v13;
          *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4LL * (v13 % 8) + 244);
        }
        else if ( *(_DWORD *)(DeviceExtension + 236) == 6 )
        {
          *(_BYTE *)(DeviceExtension + 232) = 1;
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 152));
        }
      }
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      }
      goto LABEL_68;
    case 4u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v3 = *(unsigned int *)(DeviceExtension + 240);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = v3;
      ++*(_DWORD *)(DeviceExtension + 276);
      v4 = *(unsigned int *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 240) = v4;
      *(_DWORD *)(DeviceExtension + 236) = 4;
      Status = 0;
      v17 = WdLogNewEntry5_WdEvent(v4, v3);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdEvent(v17);
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      }
      goto LABEL_68;
    case 5u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      if ( byte_1C008E751 || *(_BYTE *)(DeviceExtension + 480) )
      {
        v9 = 1;
        Status = -1073741823;
      }
      else
      {
        v9 = 1;
        Status = -1073741808;
      }
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      }
      goto LABEL_68;
    case 6u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v9 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 && *(_DWORD *)(DeviceExtension + 236) == 3 )
      {
        *(_DWORD *)(DeviceExtension + 236) = *(_DWORD *)(DeviceExtension + 240);
        v12 = *(_DWORD *)(DeviceExtension + 276) - 1;
        *(_DWORD *)(DeviceExtension + 276) = v12;
        *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4LL * (v12 % 8) + 244);
      }
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      }
      goto LABEL_68;
    case 9u:
      if ( DeviceExtension
        && *(_DWORD *)(DeviceExtension + 16) == 1953656900
        && (*(_DWORD *)(DeviceExtension + 20) == 2 || *(_DWORD *)(DeviceExtension + 20) == 3) )
      {
        v9 = 1;
        IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
        Status = a2->IoStatus.Status;
        qmemcpy((void *)(DeviceExtension + 1224), CurrentStackLocation->Parameters.Create.SecurityContext, 0x40uLL);
      }
      break;
    case 0x14u:
      v9 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 || Status == -1073741637 )
      {
        if ( DeviceExtension
          && *(_DWORD *)(DeviceExtension + 16) == 1953656900
          && *(_DWORD *)(DeviceExtension + 20) == 4 )
        {
          Status = 0;
          a2->IoStatus.Information |= 2uLL;
        }
        else if ( *(_BYTE *)(DeviceExtension + 232) == 1 )
        {
          Status = 0;
          a2->IoStatus.Information |= 4uLL;
        }
        else if ( *(_BYTE *)(DeviceExtension + 480) )
        {
          Status = 0;
          a2->IoStatus.Information |= 0x22uLL;
        }
      }
      break;
    case 0x17u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v6 = *(unsigned int *)(DeviceExtension + 240);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = v6;
      ++*(_DWORD *)(DeviceExtension + 276);
      v7 = *(unsigned int *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 240) = v7;
      *(_DWORD *)(DeviceExtension + 236) = 6;
      Status = 0;
      v18 = WdLogNewEntry5_WdEvent(v7, v6);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdEvent(v18);
      if ( *(_BYTE *)(DeviceExtension + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      }
LABEL_68:
      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
      KeLeaveCriticalRegion();
      break;
  }
  if ( v9 || Status < 0 && Status != -1073741637 )
  {
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 1);
  }
  else
  {
    if ( Status != -1073741637 )
      a2->IoStatus.Status = Status;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  return (unsigned int)Status;
}
