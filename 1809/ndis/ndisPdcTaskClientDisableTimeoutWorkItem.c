/*
 * XREFs of ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00E7650
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisPowerSaveClearStop @ 0x1C00B8300 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C01097B8 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    WPP_SF_q(0x81u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)a2);
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
      WPP_SF_q(0x82u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)a2);
  }
  PdcTaskClientRequest(a2->PdcHandle, 0LL);
  ndisPowerSaveClearStop(a2, 12);
  _InterlockedExchange(&a2->PdcTaskClientMode, 0);
  ndisDereferenceMiniport((__int64)a2, 0x13u);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x83u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)a2);
}
