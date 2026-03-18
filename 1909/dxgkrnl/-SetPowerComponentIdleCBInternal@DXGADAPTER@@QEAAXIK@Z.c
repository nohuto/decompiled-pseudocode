/*
 * XREFs of ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034E10
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C001AEF4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C003E630 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C003E6B0 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01ECEE0 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C0245908 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034E8C (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBInternal(DXGADAPTER *this, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  _QWORD *v6; // rax

  v4 = a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 684) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v6[3] = 275LL;
    v6[4] = 23LL;
    v6[5] = this;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  DXGADAPTER::SetPowerComponentIdleCBWorker(this, v4, a3);
}
