/*
 * XREFs of WPP_SF_S @ 0x1C0065340
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C00C8244 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00CBF3C (ndisDoesSystemSupportSriov.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00D18D0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     NdisQueryDiagnosticSetting @ 0x1C00F6D70 (NdisQueryDiagnosticSetting.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0106FA8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C010709C (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_S(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3)
{
  __int64 v3; // rax
  __int64 v4; // r9

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10LL;
  }
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(a2, a1, a3, v4, 0LL);
}
