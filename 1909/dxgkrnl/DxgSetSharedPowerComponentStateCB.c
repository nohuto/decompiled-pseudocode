/*
 * XREFs of DxgSetSharedPowerComponentStateCB @ 0x1C022BB30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C024627C (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 */

__int64 __fastcall DxgSetSharedPowerComponentStateCB(DXGADAPTER *a1, void *a2, unsigned int a3, unsigned __int8 a4)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  return DXGGLOBAL::SetSharedPowerComponentState(Global, a1, a2, a3, a4);
}
