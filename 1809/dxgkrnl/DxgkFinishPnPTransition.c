/*
 * XREFs of DxgkFinishPnPTransition @ 0x1C015DD24
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C015DD00 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoStopAdapter @ 0x1C0266DB0 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z @ 0x1C015DD58 (-FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z @ 0x1C015DDC0 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z.c)
 */

void __fastcall DxgkFinishPnPTransition(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  DXGSESSIONMGR *v3; // rcx
  int v4; // r8d

  v1 = a1;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 77);
  if ( v1 == -1 )
    DXGSESSIONMGR::FinishPnPTransition(v3, v2);
  else
    DXGSESSIONMGR::FinishPnPTransitionOnSession(v3, v1, v4);
}
