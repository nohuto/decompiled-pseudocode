/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C0082220
 * Callers:
 *     NdisClMakeCall @ 0x1C0082780 (NdisClMakeCall.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0082940 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C0083210 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C0083330 (NdisCmCloseCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C0083580 (NdisCmDeregisterSapComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00837C0 (NdisCmMakeCallComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C0084190 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C0085140 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00855A0 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C0085660 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C0085A30 (NdisCoRequestComplete.c)
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
