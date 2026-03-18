/*
 * XREFs of ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C020EB60
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C001FD9C (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C020F05C (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 */

void __fastcall DxgkEnableClockCalibration(__int64 a1)
{
  unsigned __int8 v1; // bl
  DXGGLOBAL *Global; // rax

  v1 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::EnableClockCalibration(Global, v1);
}
