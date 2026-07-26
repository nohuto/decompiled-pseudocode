/*
 * XREFs of NdisWritePcmciaAttributeMemory @ 0x1C00659C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisGetSetBusConfigSpace @ 0x1C0065AC4 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisWritePcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  int v5; // esi
  int SetBusConfigSpace; // eax
  ULONG v9; // ebx

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C00A0256 >= 4u )
    WPP_SF_q(0x1Eu, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 1, 0);
  v9 = SetBusConfigSpace;
  if ( (unsigned __int8)byte_1C00A0256 >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, (__int64)NdisAdapterHandle, SetBusConfigSpace);
  return v9;
}
