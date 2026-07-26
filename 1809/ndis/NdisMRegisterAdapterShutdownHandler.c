/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x1C00F1EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00BCF00 (ndisMRegisterBugCheckHandler.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Fu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportHandle);
  if ( !*((_QWORD *)MiniportHandle + 260) )
  {
    *((_QWORD *)MiniportHandle + 260) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 259) = ShutdownContext;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x30u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportHandle);
}
