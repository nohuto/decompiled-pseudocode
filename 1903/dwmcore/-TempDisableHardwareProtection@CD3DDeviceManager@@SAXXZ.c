/*
 * XREFs of ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x18015F67C
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180058B80 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x18004234C (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 */

void CD3DDeviceManager::TempDisableHardwareProtection(void)
{
  char IsHardwareProtectionDisabled; // al
  char v1; // cl

  CD3DDeviceManager::IsHardwareProtectionDisabled();
  CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
  IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
  if ( v1 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1LL);
}
