/*
 * XREFs of ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C0115770
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisPowerSaveClearStop @ 0x1C00144F8 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C01299D0 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  int v3; // edx
  int v4; // edx
  char v5; // [rsp+28h] [rbp-10h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      129,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        13,
        130,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        (char)v2);
    }
  }
  PdcTaskClientRequest(v2->PdcHandle, 0LL);
  ndisPowerSaveClearStop(v2, 12);
  _InterlockedExchange(&v2->PdcTaskClientMode, 0);
  ndisDereferenceMiniport((__int64)v2, 0x13u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      131,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)v2);
  }
}
