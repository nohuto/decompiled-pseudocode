/*
 * XREFs of DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C02467E0
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C017D7D0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0244344 (-NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z.c)
 */

void __fastcall DxgkNotifySharedPowerGraphicsPowerTransition(__int64 *a1, __int64 a2, char a3)
{
  unsigned int v4; // edi
  DXGGLOBAL *Global; // rax

  v4 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(Global, a1, v4, a3);
}
