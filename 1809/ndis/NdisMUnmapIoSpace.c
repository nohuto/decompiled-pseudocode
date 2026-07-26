/*
 * XREFs of NdisMUnmapIoSpace @ 0x1C00F2150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __stdcall NdisMUnmapIoSpace(NDIS_HANDLE MiniportAdapterHandle, PVOID VirtualAddress, UINT Length)
{
  SIZE_T v3; // rdi

  v3 = Length;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Au, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle);
  MmUnmapIoSpace(VirtualAddress, v3);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle);
}
