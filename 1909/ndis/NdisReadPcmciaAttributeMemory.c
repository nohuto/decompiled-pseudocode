/*
 * XREFs of NdisReadPcmciaAttributeMemory @ 0x1C00A0130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetSetBusConfigSpace@@YAKPEAU_NDIS_MINIPORT_BLOCK@@KPEAXKKE@Z @ 0x1C009FDE4 (-ndisGetSetBusConfigSpace@@YAKPEAU_NDIS_MINIPORT_BLOCK@@KPEAXKKE@Z.c)
 */

ULONG __stdcall NdisReadPcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  ULONG v6; // ebp
  ULONG SetBusConfigSpace; // eax
  int v9; // edx
  ULONG v10; // ebx

  v6 = Offset;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Offset) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Offset,
      7,
      28,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)NdisAdapterHandle);
  }
  SetBusConfigSpace = ndisGetSetBusConfigSpace(
                        (struct _NDIS_MINIPORT_BLOCK *)NdisAdapterHandle,
                        v6,
                        Buffer,
                        Length,
                        1u,
                        1u);
  v10 = SetBusConfigSpace;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      7,
      29,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)NdisAdapterHandle,
      SetBusConfigSpace);
  }
  return v10;
}
