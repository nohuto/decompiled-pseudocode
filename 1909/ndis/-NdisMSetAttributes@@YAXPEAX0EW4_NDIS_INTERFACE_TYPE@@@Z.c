/*
 * XREFs of ?NdisMSetAttributes@@YAXPEAX0EW4_NDIS_INTERFACE_TYPE@@@Z @ 0x1C00961C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisMSetAttributesEx @ 0x1C012F0C0 (NdisMSetAttributesEx.c)
 */

void __fastcall NdisMSetAttributes(void *a1, NDIS_HANDLE MiniportAdapterContext, char a3, NDIS_INTERFACE_TYPE a4)
{
  NDIS_HANDLE v6; // rbp
  int v8; // edx

  v6 = MiniportAdapterContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportAdapterContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterContext,
      1,
      101,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  }
  NdisMSetAttributesEx(a1, v6, 0, a3 != 0 ? 8 : 0, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      102,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  }
}
