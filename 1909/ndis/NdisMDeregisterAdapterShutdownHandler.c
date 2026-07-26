/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x1C009E130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009FA74 (ndisMDeregisterBugCheckHandler.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      49,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportHandle);
  ndisMDeregisterBugCheckHandler(MiniportHandle);
  *((_QWORD *)MiniportHandle + 258) = 0LL;
  *((_QWORD *)MiniportHandle + 257) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      50,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportHandle);
}
