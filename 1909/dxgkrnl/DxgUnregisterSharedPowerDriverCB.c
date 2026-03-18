/*
 * XREFs of DxgUnregisterSharedPowerDriverCB @ 0x1C022BB90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C02469D4 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 */

__int64 __fastcall DxgUnregisterSharedPowerDriverCB(DXGADAPTER *a1, void *a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  return DXGGLOBAL::UnregisterSharedPowerDriver(Global, a1, a2);
}
