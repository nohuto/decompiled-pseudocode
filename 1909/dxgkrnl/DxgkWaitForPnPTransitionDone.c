/*
 * XREFs of DxgkWaitForPnPTransitionDone @ 0x1C00CF780
 * Callers:
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CF5E4 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C029C760 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C00CF7C8 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DW4_PNP_TRANSITION_WAITER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForPnPTransitionDone(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // di
  unsigned int v5; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8

  v4 = a2;
  v5 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  LOBYTE(v7) = v4;
  return DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 74), v5, v7, a3);
}
