/*
 * XREFs of ndisDereferenceFilterDriver @ 0x1C0029C14
 * Callers:
 *     NdisAllocateIoWorkItem @ 0x1C003E1B0 (NdisAllocateIoWorkItem.c)
 *     NdisFDeregisterFilterDriver @ 0x1C008D5C0 (NdisFDeregisterFilterDriver.c)
 *     ndisDereferenceFilter @ 0x1C008E05C (ndisDereferenceFilter.c)
 *     NdisFreeIoWorkItem @ 0x1C0097DE0 (NdisFreeIoWorkItem.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010680C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C01217FC (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C008CA9C (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceFilterDriver(_NDIS_FILTER_DRIVER_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_FILTER_DRIVER_BLOCK *v4; // rbx
  KIRQL v5; // al
  struct _NDIS_FILTER_DRIVER_BLOCK *v6; // rcx
  struct _NDIS_FILTER_DRIVER_BLOCK **p_NextFilterDriver; // rdx
  KIRQL v8; // di
  PVOID v9; // rcx
  unsigned int v10; // edx
  wchar_t *Buffer; // rcx

  v4 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      45,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)this);
  if ( ndisDereferenceRef(&v4->Ref.SpinLock, a3) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    v6 = ndisFilterDriverList;
    p_NextFilterDriver = &ndisFilterDriverList;
    v8 = v5;
    while ( v6 )
    {
      if ( v6 == v4 )
      {
        v9 = ndisDriverObject;
        *p_NextFilterDriver = v4->NextFilterDriver;
        ObfDereferenceObject(v9);
        break;
      }
      p_NextFilterDriver = &v6->NextFilterDriver;
      v6 = v6->NextFilterDriver;
    }
    KeReleaseSpinLock(&ndisFilterDriverListLock, v8);
    Buffer = v4->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v4->ImageName.Buffer = 0LL;
    }
    _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v4, v10);
    ExFreePoolWithTag(v4, 0);
    LOBYTE(v4) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      46,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)v4);
}
