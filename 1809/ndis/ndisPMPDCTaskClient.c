/*
 * XREFs of ndisPMPDCTaskClient @ 0x1C004B190
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004BAB8 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPowerSaveStop @ 0x1C00B8DB0 (ndisPowerSaveStop.c)
 *     PdcTaskClientRequest @ 0x1C01097B8 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPMPDCTaskClient(_QWORD *P, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x84u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)v2);
  if ( !_InterlockedCompareExchange(&v2->PdcTaskClientMode, 1, 0) )
  {
    LOBYTE(a2) = 1;
    if ( (int)PdcTaskClientRequest(v2->PdcHandle, a2) < 0 )
    {
      _InterlockedExchange(&v2->PdcTaskClientMode, 0);
      if ( (unsigned __int8)byte_1C00A025A >= 2u )
        WPP_SF_q(0x85u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)v2);
    }
    else
    {
      ndisPowerSaveStop(v2);
      ndisSetPdcTaskClientExpiryTimer(v2);
    }
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v2, 0x12u);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x86u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)v2);
}
