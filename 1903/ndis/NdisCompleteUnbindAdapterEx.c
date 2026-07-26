/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C01387B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      73,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      74,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)UnbindContext);
}
