/*
 * XREFs of ndisFreeOpenBlock @ 0x1C00EC434
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00EC300 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0014880 (NdisNblTrackerDeregisterComponent.c)
 *     ndisFreePerProcessorSlot @ 0x1C0025620 (ndisFreePerProcessorSlot.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

void __fastcall ndisFreeOpenBlock(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)P + 87);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)P + 87) = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 88);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)P + 88) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*((_QWORD *)P + 73));
  NdisFreeRefCount(*((struct NDIS_REFCOUNT_HANDLE__ **)P + 74));
  v4 = *((_QWORD *)P + 90);
  *((_QWORD *)P + 74) = 0LL;
  ndisFreePerProcessorSlot(v4, 0x6F6D444EuLL);
  v5 = (void *)*((_QWORD *)P + 60);
  *((_QWORD *)P + 90) = 0LL;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)P + 60) = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
