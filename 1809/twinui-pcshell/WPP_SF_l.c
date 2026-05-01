/*
 * XREFs of WPP_SF_l @ 0x1801027EC
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180101C08 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_l(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_5bfe0afb15183a40aba57cd6662ed6d1_Traceguids, 0xEu, &v5, 4LL, 0LL);
}
