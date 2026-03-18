/*
 * XREFs of ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02A8098
 * Callers:
 *     DxgkNotifyMonitorDimming @ 0x1C01F7090 (DxgkNotifyMonitorDimming.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C02779D0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?DpiBrightnessNotifyMonitorDimmingForward@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02A80F0 (-DpiBrightnessNotifyMonitorDimmingForward@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall DpiBrightnessNotifyMonitorDimming(struct _DEVICE_OBJECT *a1, unsigned int a2, unsigned __int8 a3)
{
  int v7; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
    8395569LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E090,
    1,
    v7);
  return DpiBrightnessNotifyMonitorDimmingForward(a1, a2, a3);
}
