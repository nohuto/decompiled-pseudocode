/*
 * XREFs of ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0149994
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0149B00 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DpiQueryMiniportInterface @ 0x1C014C220 (DpiQueryMiniportInterface.c)
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
  *((_DWORD *)DeviceExtension + 1160) = 131160;
  *((_QWORD *)DeviceExtension + 575) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 574) = a1;
  *((_QWORD *)DeviceExtension + 576) = DpiDoInterfaceDereference;
  *((_DWORD *)DeviceExtension + 1146) = 65592;
  *((_QWORD *)DeviceExtension + 577) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 578) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 579) = DpiBrightnessIfGet;
  *((_OWORD *)DeviceExtension + 281) = *(_OWORD *)(DeviceExtension + 4584);
  *((_OWORD *)DeviceExtension + 282) = *(_OWORD *)(DeviceExtension + 4600);
  *((_OWORD *)DeviceExtension + 283) = *(_OWORD *)(DeviceExtension + 4616);
  v4 = *((_QWORD *)DeviceExtension + 579);
  *((_QWORD *)DeviceExtension + 569) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 570) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 571) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 568) = v4;
  *((_QWORD *)DeviceExtension + 572) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1124) = 131160;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
    8395569LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00656DC,
    1,
    v6);
  return (unsigned int)MiniportInterface;
}
