/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0149B00
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0149994 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C014C220 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int MiniportInterface; // r13d
  __int64 result; // rax
  __int64 v5; // rbp
  char v6; // bp
  char *v7; // r14
  void (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+60h] [rbp+8h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  KeInitializeMutex((PRKMUTEX)DeviceExtension + 78, 0);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_Brightness3dxgkrnl__private_propertyCache,
    12732606LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0065EA8,
    1,
    v10);
  if ( *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x700Au )
  {
    MiniportInterface = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_3, 72, 3);
    if ( MiniportInterface >= 0 )
    {
      v5 = *((_QWORD *)DeviceExtension + 474);
      if ( !v5 )
        goto LABEL_19;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_Brightness3UncalibratedFallback__private_propertyCache,
        17376988LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006DBB4,
        1,
        v11);
      if ( (**(_DWORD **)(v5 + 4112) & 0x1000) != 0 || !*((_QWORD *)DeviceExtension + 586) )
        goto LABEL_19;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3232), 1u);
      v6 = 1;
      v7 = (char *)*((_QWORD *)DeviceExtension + 424);
      while ( v7 != DeviceExtension + 3392 )
      {
        v9 = *((unsigned int *)v7 - 2);
        v7 = *(char **)v7;
        if ( (*((int (__fastcall **)(_QWORD, __int64, char *))DeviceExtension + 586))(
               *((_QWORD *)DeviceExtension + 581),
               v9,
               &v12) >= 0
          && (v12 & 4) == 0 )
        {
          v6 = 0;
          break;
        }
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3232));
      KeLeaveCriticalRegion();
      if ( v6 )
      {
LABEL_19:
        *((_DWORD *)DeviceExtension + 1106) = 196680;
        *((_QWORD *)DeviceExtension + 557) = DpiBrightness3Set;
        *((_QWORD *)DeviceExtension + 555) = DpiDoInterfaceReference;
        *((_QWORD *)DeviceExtension + 558) = DpiBrightness3Get;
        *((_QWORD *)DeviceExtension + 554) = a1;
        *((_QWORD *)DeviceExtension + 559) = DpiBrightness3GetCaps;
        *((_QWORD *)DeviceExtension + 560) = DpiBrightness3GetNitRanges;
        *((_QWORD *)DeviceExtension + 561) = DpiBrightness3SetBacklightOptimization;
        result = (unsigned int)MiniportInterface;
        *((_QWORD *)DeviceExtension + 556) = DpiDoInterfaceDereference;
        return result;
      }
      v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 583);
      if ( v8 )
        v8(*((_QWORD *)DeviceExtension + 581));
    }
  }
  result = DpiBrightnessSetupInterfaceV2(a1);
  if ( (int)result < 0 )
  {
    result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS, 56, 1);
    if ( (int)result >= 0 )
    {
      *((_QWORD *)DeviceExtension + 574) = a1;
      *((_QWORD *)DeviceExtension + 575) = DpiDoInterfaceReference;
      *((_QWORD *)DeviceExtension + 576) = DpiDoInterfaceDereference;
      *((_QWORD *)DeviceExtension + 577) = DpiBrightnessIfGetPossible;
      *((_QWORD *)DeviceExtension + 578) = DpiBrightnessIfSet;
      *((_QWORD *)DeviceExtension + 579) = DpiBrightnessIfGet;
      *((_DWORD *)DeviceExtension + 1146) = 65592;
    }
  }
  return result;
}
