/*
 * XREFs of ndisDereferenceFilterDriver @ 0x1C0016FB0
 * Callers:
 *     NdisAllocateIoWorkItem @ 0x1C0025450 (NdisAllocateIoWorkItem.c)
 *     NdisFDeregisterFilterDriver @ 0x1C005A7B0 (NdisFDeregisterFilterDriver.c)
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 *     NdisFreeIoWorkItem @ 0x1C0060690 (NdisFreeIoWorkItem.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00CE7D0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C0101314 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0059A34 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceFilterDriver(_NDIS_FILTER_DRIVER_BLOCK *this)
{
  _NDIS_FILTER_DRIVER_BLOCK *v1; // rbx
  KIRQL v2; // al
  struct _NDIS_FILTER_DRIVER_BLOCK *v3; // rcx
  struct _NDIS_FILTER_DRIVER_BLOCK **p_NextFilterDriver; // rdx
  KIRQL v5; // di
  PVOID v6; // rcx
  unsigned int v7; // edx
  wchar_t *Buffer; // rcx

  v1 = this;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(45LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, this);
  if ( (unsigned __int8)ndisDereferenceRef(&v1->Ref.SpinLock) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    v3 = ndisFilterDriverList;
    p_NextFilterDriver = &ndisFilterDriverList;
    v5 = v2;
    while ( v3 )
    {
      if ( v3 == v1 )
      {
        v6 = ndisDriverObject;
        *p_NextFilterDriver = v1->NextFilterDriver;
        ObfDereferenceObject(v6);
        break;
      }
      p_NextFilterDriver = &v3->NextFilterDriver;
      v3 = v3->NextFilterDriver;
    }
    KeReleaseSpinLock(&ndisFilterDriverListLock, v5);
    Buffer = v1->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v1->ImageName.Buffer = 0LL;
    }
    _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v1, v7);
    ExFreePoolWithTag(v1, 0);
    v1 = 0LL;
  }
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(46LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v1);
}
