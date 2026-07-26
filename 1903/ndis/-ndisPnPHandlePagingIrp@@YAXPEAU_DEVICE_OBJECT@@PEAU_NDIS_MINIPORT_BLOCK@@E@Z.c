/*
 * XREFs of ?ndisPnPHandlePagingIrp@@YAXPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A3A98
 * Callers:
 *     ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3D64 (-ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@P.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 */

void __fastcall ndisPnPHandlePagingIrp(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, char a3)
{
  if ( a3 )
  {
    if ( _InterlockedIncrement(&a2->PagingPathCount) == 1 )
    {
      ndisReferencePackage((__int64)&ndisPkgs);
      a1->Flags &= ~0x2000u;
      a2->IfBlock->ifFlags |= 0x80u;
      a2->IfBlock->Flags |= 0x80u;
    }
  }
  else if ( _InterlockedExchangeAdd(&a2->PagingPathCount, 0xFFFFFFFF) == 1 )
  {
    a1->Flags |= 0x2000u;
    a2->IfBlock->ifFlags &= ~0x80u;
    a2->IfBlock->Flags &= ~0x80u;
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  }
  IoInvalidateDeviceState(a2->PhysicalDeviceObject);
}
