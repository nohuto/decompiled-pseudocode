/*
 * XREFs of ndisPMPDCTaskClient @ 0x1C0075080
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C0077338 (ndisSetPdcTaskClientExpiryTimer.c)
 *     PdcTaskClientRequest @ 0x1C01299D0 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPMPDCTaskClient(_QWORD *P, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  int v4; // edx
  int v5; // edx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      132,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)v2);
  }
  if ( !_InterlockedCompareExchange(&v2->PdcTaskClientMode, 1, 0) )
  {
    LOBYTE(a2) = 1;
    if ( (int)PdcTaskClientRequest(v2->PdcHandle, a2) < 0 )
    {
      _InterlockedExchange(&v2->PdcTaskClientMode, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v4,
          11,
          133,
          (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
          (char)v2);
      }
    }
    else
    {
      ndisPowerSaveStop(v2, NdisSSMagicPacket);
      ndisSetPdcTaskClientExpiryTimer(v2);
    }
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v2, 0x12u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      134,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)v2);
  }
}
