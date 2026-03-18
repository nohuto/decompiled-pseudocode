/*
 * XREFs of DpiFdoHandleSurpriseRemoval @ 0x1C02658B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiRequestIoPowerState @ 0x1C014314C (DpiRequestIoPowerState.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C02101C8 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiFdoHandleStopDevice @ 0x1C02655B0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoIsDevicePresent @ 0x1C02662CC (DpiFdoIsDevicePresent.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C0273A8C (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r14d
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  DXGGLOBAL *Global; // rax
  int v16; // eax
  __int64 v17; // rax
  char v19; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
  {
    DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v7 = *(unsigned int *)(DeviceExtension + 236);
  if ( (_DWORD)v7 != 6 )
  {
    v8 = 0LL;
    if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
        v8 = DeviceExtension;
    }
    else
    {
      v9 = *(_QWORD *)(DeviceExtension + 2656);
      if ( v9 )
        v8 = *(_QWORD *)(v9 + 64);
    }
    if ( !*(_BYTE *)(DeviceExtension + 232)
      && ((_DWORD)v7 == 2 || *(_DWORD *)(DeviceExtension + 240) == 2 && (((_DWORD)v7 - 3) & 0xFFFFFFFD) == 0) )
    {
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v19);
      if ( IsDevicePresent < 0 )
        goto LABEL_20;
      if ( !v19 )
      {
        *(_BYTE *)(DeviceExtension + 1160) = 1;
        if ( v8 )
          IsDevicePresent = DpiDxgkDdiNotifySurpriseRemoval(
                              *(_QWORD *)(DeviceExtension + 40),
                              *(_QWORD *)(DeviceExtension + 48),
                              v8,
                              1LL);
      }
      if ( IsDevicePresent < 0 )
      {
LABEL_20:
        *(_BYTE *)(DeviceExtension + 1161) = 1;
        v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10);
        v11[3] = 275LL;
        v11[4] = 25LL;
        v11[5] = 2LL - (*(_BYTE *)(DeviceExtension + 1144) != 0);
        v11[6] = *(unsigned int *)(DeviceExtension + 1116);
        v11[7] = *(unsigned int *)(DeviceExtension + 1120);
        WdLogEvent5_WdCriticalError(v11);
      }
    }
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v8 + 3688), 1u);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
      v12 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v12;
      *(_DWORD *)(DeviceExtension + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v8 + 3688));
      KeLeaveCriticalRegion();
      if ( *(_BYTE *)(v8 + 480) )
      {
        if ( *(_DWORD *)(v8 + 3888) != 3 )
        {
          v7 = *(_QWORD *)(v8 + 3792);
          if ( v7 )
          {
            DXGADAPTER::Stop((DXGADAPTER *)v7, 0LL, 0);
            Global = DXGGLOBAL::GetGlobal(v14);
            DXGGLOBAL::NotifyAdapterRemoval(Global);
            *(_DWORD *)(v8 + 3888) = 3;
          }
        }
      }
      else
      {
        DpiRequestIoPowerState(*(_QWORD *)(v8 + 24), 3, v13, 0);
      }
    }
    else
    {
      v7 = *(_DWORD *)(DeviceExtension + 276) & 7;
      *(_DWORD *)(DeviceExtension + 4 * v7 + 244) = *(_DWORD *)(DeviceExtension + 240);
      v16 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v16;
      *(_DWORD *)(DeviceExtension + 236) = 6;
    }
  }
  v17 = WdLogNewEntry5_WdEvent(v7, v6);
  *(_QWORD *)(v17 + 24) = a1;
  WdLogEvent5_WdEvent(v17);
  if ( *(_BYTE *)(DeviceExtension + 483) )
  {
    DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(DeviceExtension + 3816), 4023LL);
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  }
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 1) <= 1 )
    DpiFdoHandleStopDevice(a1, a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = IsDevicePresent;
  return IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
}
