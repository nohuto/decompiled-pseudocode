/*
 * XREFs of DxgUnregisterSharedPowerDriverCB @ 0x1C01FB250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C02126F8 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 */

__int64 __fastcall DxgUnregisterSharedPowerDriverCB(DXGADAPTER *a1, void *a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  return DXGGLOBAL::UnregisterSharedPowerDriver(Global, a1, a2);
}
