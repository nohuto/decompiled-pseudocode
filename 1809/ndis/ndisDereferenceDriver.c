/*
 * XREFs of ndisDereferenceDriver @ 0x1C0052A18
 * Callers:
 *     ndisReferenceMiniportByHandle @ 0x1C0016670 (ndisReferenceMiniportByHandle.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisAllocateIoWorkItem @ 0x1C0025450 (NdisAllocateIoWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005DD2C (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisFreeIoWorkItem @ 0x1C0060690 (NdisFreeIoWorkItem.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C00F0F44 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00F1380 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpStopDevice @ 0x1C00F4B78 (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00F51C8 (ndisWdfPostReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 *     ndisMUnload @ 0x1C0116CF0 (ndisMUnload.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisDereferenceDriver(__int64 a1, char a2, unsigned __int8 a3)
{
  KIRQL v5; // si
  struct _NDIS_M_DRIVER_BLOCK *v6; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  PVOID v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx

  v5 = 0;
  if ( ndisDereferenceRef((PKSPIN_LOCK)(a1 + 392), a3) )
  {
    if ( (unsigned __int8)byte_1C00A0263 >= 4u )
      WPP_SF_q(0x17u, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
    if ( !a2 )
      v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v6 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    while ( v6 )
    {
      if ( v6 == (struct _NDIS_M_DRIVER_BLOCK *)a1 )
      {
        v8 = ndisDriverObject;
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(a1 + 8);
        ObfDereferenceObject(v8);
        break;
      }
      p_NextDriver = &v6->NextDriver;
      v6 = v6->NextDriver;
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    v9 = *(void **)(a1 + 888);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *(_QWORD *)(a1 + 888) = 0LL;
    }
    v10 = *(void **)(a1 + 32);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 26) & 1) != 0 )
    {
      v11 = *(_QWORD **)(a1 + 96);
      if ( v11 )
      {
        do
        {
          v12 = (_QWORD *)*v11;
          ExFreePoolWithTag(v11, 0);
          v11 = v12;
        }
        while ( v12 );
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 368), 0, 0);
    if ( (unsigned __int8)byte_1C00A0263 >= 4u )
      WPP_SF_q(0x18u, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
  }
}
