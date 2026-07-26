/*
 * XREFs of ndisFreeOpenBlock @ 0x1C0081F70
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C01169C0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0022950 (NdisNblTrackerDeregisterComponent.c)
 *     ndisFreePerProcessorSlot @ 0x1C003E2E0 (ndisFreePerProcessorSlot.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 */

void __fastcall ndisFreeOpenBlock(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  v2 = (void *)P[87];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    P[87] = 0LL;
  }
  v3 = (void *)P[88];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    P[88] = 0LL;
  }
  NdisNblTrackerDeregisterComponent(P[73]);
  NdisFreeRefCount(P[74]);
  v4 = P[90];
  P[74] = 0LL;
  ndisFreePerProcessorSlot(v4, 0x6F6D444EuLL);
  v5 = (void *)P[60];
  P[90] = 0LL;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    P[60] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
