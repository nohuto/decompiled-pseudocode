/*
 * XREFs of NdisWritePciSlotInformation @ 0x1C00A0040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetSetBusConfigSpace@@YAKPEAU_NDIS_MINIPORT_BLOCK@@KPEAXKKE@Z @ 0x1C009FC14 (-ndisGetSetBusConfigSpace@@YAKPEAU_NDIS_MINIPORT_BLOCK@@KPEAXKKE@Z.c)
 */

ULONG __stdcall NdisWritePciSlotInformation(
        NDIS_HANDLE NdisAdapterHandle,
        ULONG SlotNumber,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG SetBusConfigSpace; // edi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      7,
      20,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace(
                        (struct _NDIS_MINIPORT_BLOCK *)NdisAdapterHandle,
                        Offset,
                        Buffer,
                        Length,
                        0,
                        0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      7,
      21,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)NdisAdapterHandle);
  return SetBusConfigSpace;
}
