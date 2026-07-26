/*
 * XREFs of ndisSetPdcTaskClientExpiryTimer @ 0x1C0077168
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C0074EB0 (ndisPMPDCTaskClient.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisPowerSaveClearStop @ 0x1C00144F8 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C01299D0 (PdcTaskClientRequest.c)
 */

void __fastcall ndisSetPdcTaskClientExpiryTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)ndisReferenceMiniport((__int64)a1) )
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
    ndisPowerSaveClearStop(a1, 12);
    _InterlockedExchange(&a1->PdcTaskClientMode, 0);
  }
}
