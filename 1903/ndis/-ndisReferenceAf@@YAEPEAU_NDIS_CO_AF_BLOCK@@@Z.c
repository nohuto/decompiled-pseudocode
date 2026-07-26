/*
 * XREFs of ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00822F4
 * Callers:
 *     NdisClMakeCall @ 0x1C0082780 (NdisClMakeCall.c)
 *     NdisClRegisterSap @ 0x1C0082F10 (NdisClRegisterSap.c)
 *     NdisCmDispatchIncomingCall @ 0x1C0083600 (NdisCmDispatchIncomingCall.c)
 *     NdisCmNotifyCloseAddressFamily @ 0x1C0083A30 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCoOidRequest @ 0x1C0085140 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C0085660 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1C0086160 (NdisMCmOidRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceAf(struct _NDIS_CO_AF_BLOCK *a1)
{
  unsigned __int64 *p_Lock; // rsi
  char v3; // di
  KIRQL v4; // al

  p_Lock = &a1->Lock;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( (a1->Flags & 0x80000000) == 0 )
  {
    ++a1->References;
    v3 = 1;
  }
  KeReleaseSpinLock(p_Lock, v4);
  return v3;
}
