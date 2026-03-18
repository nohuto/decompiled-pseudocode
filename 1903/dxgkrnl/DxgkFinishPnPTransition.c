/*
 * XREFs of DxgkFinishPnPTransition @ 0x1C017E4A0
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0154800 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C017E470 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXEJ@Z @ 0x1C017E4FC (-FinishPnPTransition@DXGSESSIONMGR@@QEAAXEJ@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z @ 0x1C017E5A8 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z.c)
 */

void __fastcall DxgkFinishPnPTransition(__int64 a1, __int64 a2)
{
  DXGSESSIONMGR *v3; // rcx
  int v4; // r8d

  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 74);
  if ( ((a1 - 0x100000000LL) & 0xFFFFFFFDFFFFFFFFuLL) != 0 )
    DXGSESSIONMGR::FinishPnPTransitionOnSession(v3, a1, v4);
  else
    DXGSESSIONMGR::FinishPnPTransition(v3, a1 == 0x100000000LL, v4);
}
