/*
 * XREFs of DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0042850
 * Callers:
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00325B4 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0033CA0 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00347E4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034D2C (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1C0042074 (-NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z.c)
 */

void __fastcall DxgkNotifySharedPowerGraphicsFStateTransition(void *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v6; // esi
  KSPIN_LOCK *Global; // rax

  v6 = a2;
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(Global, a1, v6, a3, a4);
}
