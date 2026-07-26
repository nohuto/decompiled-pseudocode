/*
 * XREFs of ndisDereferenceAf @ 0x1C011E818
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0052B90 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C011B400 (NdisClMakeCall.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C011B880 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C011B9B0 (NdisCmCloseCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C011BBD0 (NdisCmDeregisterSapComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C011BE10 (NdisCmMakeCallComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C011C270 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C011D0B0 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C011D4C0 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C011D580 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C011D8E0 (NdisCoRequestComplete.c)
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
