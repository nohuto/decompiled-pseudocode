/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1C0092830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  NDIS_STATUS v2; // edi
  int v4; // edx
  char v5; // [rsp+30h] [rbp-18h]

  v2 = Status;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = Status;
    LOBYTE(Status) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Status,
      6,
      69,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)BindAdapterContext,
      v5);
  }
  *((_DWORD *)BindAdapterContext + 22) = v2;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      6,
      70,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)BindAdapterContext);
  }
}
