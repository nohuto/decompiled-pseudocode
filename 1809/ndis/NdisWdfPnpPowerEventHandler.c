/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C00F2320
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 *     ndisRemoveMiniportFromGlobalList @ 0x1C006432C (ndisRemoveMiniportFromGlobalList.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0075888 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00771EC (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00772E4 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C00BC0B8 (ndisStartDeviceSynchronous.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00F03E4 (ndisMDeleteMiniportBlockOnRemove.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C00F2260 (NdisWdfMiniportDataPathPause.c)
 *     ndisPnPCompleteRemoveDevice @ 0x1C00F2FE0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00F4D34 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00F51C8 (ndisWdfPostReleaseHardware.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00F52B0 (ndisWdfPreReleaseHardware.c)
 *     ndisWdfNotifySystemPower @ 0x1C00F58A0 (ndisWdfNotifySystemPower.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCC00 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *a1, int a2, int a3)
{
  unsigned int PowerCompleteStatus; // edi
  char v5; // r12
  union _POWER_STATE v8; // r14d
  unsigned int v9; // ebp
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx
  unsigned int started; // eax
  struct _NDIS_MINIPORT_AOAC *v12; // rcx
  unsigned int v13; // esi
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF

  PowerCompleteStatus = 0;
  v5 = 0;
  ndisReferencePackage((__int64)&ndisPkgs);
  v8.SystemState = PowerSystemWorking;
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  a1->PowerCompleteStatus = -1073741637;
  if ( a2 > 12 )
  {
    switch ( a2 )
    {
      case 14:
      case 15:
        ndisWdfNotifySystemPower(a1);
        goto LABEL_37;
      case 17:
        started = ndisWdfPreReleaseHardware(a1);
        break;
      case 18:
        started = ndisWdfPostReleaseHardware(a1);
        break;
      case 19:
        a1->PnPDeviceState = NdisPnPDeviceStopped;
        NdisWdfMiniportDataPathPause((__int64)a1);
        goto LABEL_46;
      case 20:
        ndisPnPCompleteRemoveDevice(a1);
        ndisRemoveMiniportFromGlobalList(a1);
        ndisMDeleteMiniportBlockOnRemove(a1);
        a1->MiniportAdapterContext = 0LL;
        goto LABEL_46;
      default:
        goto LABEL_31;
    }
LABEL_21:
    PowerCompleteStatus = started;
    goto LABEL_46;
  }
  switch ( a2 )
  {
    case 12:
      PowerCompleteStatus = -1073741822;
      goto LABEL_46;
    case 0:
      started = ndisStartDeviceSynchronous((int *)a1);
      goto LABEL_21;
    case 6:
      started = ndisPnPIrpSurpriseRemoval(0LL, a1, 0LL, &v16, &v16);
      goto LABEL_21;
    case 7:
      started = ndisPnPIrpRemoveDevice(a1->DeviceObject, a1, 0LL, (__int64)&v16);
      goto LABEL_21;
  }
  v9 = 2;
  if ( a2 == 9 )
  {
    if ( a3 == 14 )
    {
      ndisWdfNotifySystemPower(a1);
      v5 = 1;
    }
    AoAc = a1->AoAc;
    if ( AoAc )
      ndisAoAcResumeRefTimeAccumulation(AoAc);
    goto LABEL_40;
  }
  if ( a2 != 10 )
  {
    if ( a2 == 11 )
    {
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop((__int64)a1, 9);
      if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
      {
        if ( a1->AoAc )
          ndisAoAcStart(a1);
      }
      goto LABEL_46;
    }
LABEL_31:
    PowerCompleteStatus = -1073741811;
    goto LABEL_46;
  }
LABEL_37:
  v12 = a1->AoAc;
  if ( v12 )
    ndisAoAcPauseRefTimeAccumulation(v12);
  v8.SystemState = PowerSystemSleeping3;
  a3 = a2;
  v9 = 4;
LABEL_40:
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, v9);
  a1->PowerCompleteEvent = &Event;
  v13 = ndisSetDevicePower(0LL, 0LL, v8, (ULONG_PTR)a1, a3);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  a1->PowerCompleteEvent = 0LL;
  if ( v5 && a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)a1, 6);
  if ( v13 == 259 || (PowerCompleteStatus = v13, v13 == -1073741802) )
    PowerCompleteStatus = a1->PowerCompleteStatus;
LABEL_46:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return PowerCompleteStatus;
}
