/*
 * XREFs of NdisMDeregisterIoPortRange @ 0x1C009E0D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisMDeregisterIoPortRange(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts,
        PVOID PortOffset)
{
  char v4; // bl

  v4 = (char)MiniportAdapterHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      22,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        23,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        v4);
  }
}
