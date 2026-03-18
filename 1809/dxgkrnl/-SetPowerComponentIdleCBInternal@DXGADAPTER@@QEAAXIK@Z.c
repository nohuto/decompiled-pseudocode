/*
 * XREFs of ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C002F4A4
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00194EC (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C0038070 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C00380F0 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01BD2C0 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C0211424 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C002F520 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBInternal(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  _QWORD *v6; // rax

  if ( a2 >= *((_DWORD *)this + 676) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v6[3] = 275LL;
    v6[4] = 23LL;
    v6[5] = this;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  DXGADAPTER::SetPowerComponentIdleCBWorker(this, a2, a3);
}
