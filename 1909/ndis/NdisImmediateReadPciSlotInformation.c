/*
 * XREFs of NdisImmediateReadPciSlotInformation @ 0x1C013AE60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetSetBusConfigSpace@@YAKPEAU_NDIS_MINIPORT_BLOCK@@KPEAXKKE@Z @ 0x1C009FDE4 (-ndisGetSetBusConfigSpace@@YAKPEAU_NDIS_MINIPORT_BLOCK@@KPEAXKKE@Z.c)
 */

__int64 __fastcall NdisImmediateReadPciSlotInformation(__int64 a1, __int64 a2, int a3, void *a4, unsigned int a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  unsigned int SetBusConfigSpace; // edi

  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      7,
      14,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)v5);
  SetBusConfigSpace = ndisGetSetBusConfigSpace(v5, a3, a4, a5, 0, 1u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      7,
      15,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)v5);
  return SetBusConfigSpace;
}
