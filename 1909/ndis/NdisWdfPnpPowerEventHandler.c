/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C009F070
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C002F158 (ndisStartDeviceSynchronous.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C009EDB0 (NdisWdfMiniportDataPathPause.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00A5134 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00B93D0 (ndisSelectiveSuspendClearStop.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfDeviceObjectCleanup @ 0x1C0119240 (ndisWdfDeviceObjectCleanup.c)
 *     ndisWdfPostReleaseHardware @ 0x1C0119274 (ndisWdfPostReleaseHardware.c)
 *     ndisWdfPreReleaseHardware @ 0x1C0119350 (ndisWdfPreReleaseHardware.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011C5D4 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  unsigned int started; // eax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = 0;
  if ( !a2 )
  {
    started = ndisStartDeviceSynchronous((__int64)a1, 0LL, v5);
    goto LABEL_26;
  }
  v7 = a2 - 6;
  if ( !v7 )
  {
    started = ndisPnPIrpSurpriseRemoval(v4, a1, 0LL, &v16, &v16);
    goto LABEL_26;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    started = ndisPnPIrpRemoveDevice(a1->DeviceObject, (char)a1, 0LL, (__int64)&v16);
    goto LABEL_26;
  }
  v9 = v8 - 4;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      v6 = -1073741822;
      goto LABEL_27;
    }
    v11 = v10 - 5;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          a1->PnPDeviceState = NdisPnPDeviceStopped;
          NdisWdfMiniportDataPathPause(a1);
          goto LABEL_27;
        }
        if ( v13 != 1 )
        {
          v6 = -1073741811;
          goto LABEL_27;
        }
        started = ndisWdfDeviceObjectCleanup((char)a1);
      }
      else
      {
        started = ndisWdfPostReleaseHardware((char)a1);
      }
    }
    else
    {
      started = ndisWdfPreReleaseHardware((char)a1);
    }
LABEL_26:
    v6 = started;
    goto LABEL_27;
  }
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((char)a1, 9);
  if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
  {
    if ( a1->AoAc )
      ndisAoAcStart(a1);
  }
LABEL_27:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v6;
}
