/*
 * XREFs of ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C0242030
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00224EC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C02430C0 (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DxgkEnableStablePowerState(__int64 a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGGLOBAL::EnableStablePowerState(Global);
}
