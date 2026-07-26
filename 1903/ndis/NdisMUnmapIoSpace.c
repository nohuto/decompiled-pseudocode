/*
 * XREFs of NdisMUnmapIoSpace @ 0x1C009E9D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisMUnmapIoSpace(NDIS_HANDLE MiniportAdapterHandle, PVOID VirtualAddress, UINT Length)
{
  SIZE_T v3; // rdi
  PVOID v4; // rsi
  char v5; // bl
  int v6; // edx

  v3 = Length;
  v4 = VirtualAddress;
  v5 = (char)MiniportAdapterHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(VirtualAddress) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)VirtualAddress,
      1,
      26,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle);
  }
  MmUnmapIoSpace(v4, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      27,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v5);
  }
}
