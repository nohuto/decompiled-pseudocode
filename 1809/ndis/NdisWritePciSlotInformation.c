/*
 * XREFs of NdisWritePciSlotInformation @ 0x1C0065930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C0065AC4 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisWritePciSlotInformation(
        NDIS_HANDLE NdisAdapterHandle,
        ULONG SlotNumber,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  int v5; // edi
  ULONG SetBusConfigSpace; // edi

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C00A0256 >= 4u )
    WPP_SF_q(0x14u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 0, 0);
  if ( (unsigned __int8)byte_1C00A0256 >= 4u )
    WPP_SF_q(0x15u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, (__int64)NdisAdapterHandle);
  return SetBusConfigSpace;
}
