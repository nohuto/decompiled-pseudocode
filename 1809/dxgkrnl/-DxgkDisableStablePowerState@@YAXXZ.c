/*
 * XREFs of ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C020EB44
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C001FD9C (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C020E8A4 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DxgkDisableStablePowerState(__int64 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::DisableStablePowerState(Global);
}
