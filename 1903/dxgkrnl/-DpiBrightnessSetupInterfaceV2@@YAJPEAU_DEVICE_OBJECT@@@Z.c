/*
 * XREFs of ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0161580
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01616EC (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02A7EF8 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DpiQueryMiniportInterface @ 0x1C0163FF8 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessSetupInterfaceV2(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int MiniportInterface; // ebp
  __int64 v4; // xmm1_8
  int v6; // [rsp+20h] [rbp-28h]

  DeviceExtension = (char *)a1->DeviceExtension;
  MiniportInterface = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2, 88, 2);
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1188) = 131160;
  *((_QWORD *)DeviceExtension + 589) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 588) = a1;
  *((_QWORD *)DeviceExtension + 590) = DpiDoInterfaceDereference;
  *((_DWORD *)DeviceExtension + 1174) = 65592;
  *((_QWORD *)DeviceExtension + 591) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 592) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 593) = DpiBrightnessIfGet;
  *((_OWORD *)DeviceExtension + 288) = *(_OWORD *)(DeviceExtension + 4696);
  *((_OWORD *)DeviceExtension + 289) = *(_OWORD *)(DeviceExtension + 4712);
  *((_OWORD *)DeviceExtension + 290) = *(_OWORD *)(DeviceExtension + 4728);
  v4 = *((_QWORD *)DeviceExtension + 593);
  *((_QWORD *)DeviceExtension + 583) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 584) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 585) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 582) = v4;
  *((_QWORD *)DeviceExtension + 586) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1152) = 131160;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
    8395569LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E248,
    1,
    v6);
  return (unsigned int)MiniportInterface;
}
