/*
 * XREFs of ndisDereferenceDriver @ 0x1C00172A0
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0016F28 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F60 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisAllocateIoWorkItem @ 0x1C003E1A0 (NdisAllocateIoWorkItem.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F98C (ndisReferenceMiniportByHandle.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C00922F0 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisFreeIoWorkItem @ 0x1C0097FB0 (NdisFreeIoWorkItem.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D500 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C009DD90 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpStopDevice @ 0x1C00A4F8C (ndisPnPIrpStopDevice.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C0117B0C (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C0119274 (ndisWdfPostReleaseHardware.c)
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisMUnload @ 0x1C0137C70 (ndisMUnload.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 */

void __fastcall ndisDereferenceDriver(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v3; // rsi
  KIRQL v7; // r15
  KIRQL v8; // bp
  char v10; // bl
  int v11; // edx
  struct _NDIS_M_DRIVER_BLOCK *v12; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  PVOID v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rbx
  int v19; // edx

  v3 = a1 + 392;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
  NdisDereferenceWithTag(*(_QWORD *)(v3 + 16), a3);
  if ( (*(_WORD *)(v3 + 8))-- == 1 )
  {
    v10 = 1;
    if ( !*(_BYTE *)(v3 + 11) )
    {
      NdisFreeRefCount(*(_QWORD *)(v3 + 16));
      *(_QWORD *)(v3 + 16) = 1LL;
    }
  }
  else
  {
    v10 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v8);
  if ( v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        20,
        23,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        a1);
    }
    if ( !a2 )
      v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v12 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    while ( v12 )
    {
      if ( v12 == (struct _NDIS_M_DRIVER_BLOCK *)a1 )
      {
        v14 = ndisDriverObject;
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(a1 + 8);
        ObfDereferenceObject(v14);
        break;
      }
      p_NextDriver = &v12->NextDriver;
      v12 = v12->NextDriver;
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
    v15 = *(void **)(a1 + 888);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *(_QWORD *)(a1 + 888) = 0LL;
    }
    v16 = *(void **)(a1 + 32);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 26) & 1) != 0 )
    {
      v17 = *(_QWORD **)(a1 + 96);
      if ( v17 )
      {
        do
        {
          v18 = (_QWORD *)*v17;
          ExFreePoolWithTag(v17, 0);
          v17 = v18;
        }
        while ( v18 );
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 368), 0, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v19,
        20,
        24,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        a1);
    }
  }
}
