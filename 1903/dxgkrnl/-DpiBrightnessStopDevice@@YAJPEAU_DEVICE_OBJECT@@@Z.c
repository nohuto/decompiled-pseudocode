/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02A814C
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int v3; // r14d
  __int16 v4; // ax
  void (__fastcall *v5)(_QWORD); // rax
  int v7; // [rsp+20h] [rbp-28h]

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 2376) )
  {
    KeWaitForSingleObject(DeviceExtension + 4480, Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 < 0 && DeviceExtension[1162] )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
        8395569LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E248,
        1,
        v7);
    }
    else
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
        8395569LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E248,
        1,
        v7);
      v4 = *((_WORD *)DeviceExtension + 2377);
      if ( v4 == 2 || v4 == 3 )
      {
        v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 597);
        if ( v5 )
          v5(*((_QWORD *)DeviceExtension + 595));
      }
    }
    memset(DeviceExtension + 4752, 0, 0x58uLL);
    if ( v3 >= 0 )
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    KeReleaseMutex((PRKMUTEX)DeviceExtension + 80, 0);
  }
  return 0LL;
}
