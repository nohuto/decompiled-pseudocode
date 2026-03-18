/*
 * XREFs of ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C020EBA8
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C001FD9C (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C020F24C (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DxgkEnableStablePowerState(__int64 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::EnableStablePowerState(Global);
}
