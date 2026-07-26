/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00823F0
 * Callers:
 *     NdisClMakeCall @ 0x1C0082950 (NdisClMakeCall.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0082B10 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00833E0 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C0083500 (NdisCmCloseCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C0083750 (NdisCmDeregisterSapComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C0083990 (NdisCmMakeCallComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C0084360 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C0085310 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C0085770 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C0085830 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C0085C00 (NdisCoRequestComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceAf(KSPIN_LOCK *P)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  int v4; // ebx

  v1 = P + 48;
  v3 = KeAcquireSpinLockRaiseToDpc(P + 48);
  v4 = --*((_DWORD *)P + 3);
  KeReleaseSpinLock(v1, v3);
  if ( !v4 )
    ExFreePoolWithTag(P, 0);
}
