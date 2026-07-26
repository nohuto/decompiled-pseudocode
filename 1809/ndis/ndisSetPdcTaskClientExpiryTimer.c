/*
 * XREFs of ndisSetPdcTaskClientExpiryTimer @ 0x1C004BAB8
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C004B190 (ndisPMPDCTaskClient.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisPowerSaveClearStop @ 0x1C00B8300 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C01097B8 (PdcTaskClientRequest.c)
 */

void __fastcall ndisSetPdcTaskClientExpiryTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( ndisReferenceMiniport((__int64)a1) )
  {
    if ( KeSetCoalescableTimer(
           &a1->PdcTaskClientDisableTimer.Timer,
           (LARGE_INTEGER)-300000000LL,
           0,
           0,
           &a1->PdcTaskClientDisableTimer.Dpc) )
    {
      ndisDereferenceMiniport((__int64)a1, 0x13u);
    }
  }
  else
  {
    PdcTaskClientRequest(a1->PdcHandle, 0LL);
    ndisPowerSaveClearStop(a1, NdisSSMagicPacket);
    _InterlockedExchange(&a1->PdcTaskClientMode, 0);
  }
}
