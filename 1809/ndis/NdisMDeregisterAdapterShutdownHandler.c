/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x1C00F1C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00F2D4C (ndisMDeregisterBugCheckHandler.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x31u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportHandle);
  ndisMDeregisterBugCheckHandler(MiniportHandle);
  *((_QWORD *)MiniportHandle + 260) = 0LL;
  *((_QWORD *)MiniportHandle + 259) = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x32u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportHandle);
}
