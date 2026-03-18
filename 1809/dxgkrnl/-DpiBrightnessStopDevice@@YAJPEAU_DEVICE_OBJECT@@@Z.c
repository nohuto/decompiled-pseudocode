/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C026C8E8
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C0266DB0 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int v3; // r14d
  __int16 v4; // ax
  void (__fastcall *v5)(_QWORD); // rax
  size_t v6; // r8
  void (__fastcall *v7)(_QWORD); // rax
  int v9; // [rsp+20h] [rbp-28h]

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !*((_WORD *)DeviceExtension + 2320) )
    return 0LL;
  KeWaitForSingleObject(DeviceExtension + 4368, Executive, 0, 0, 0LL);
  v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
  if ( v3 >= 0 || !DeviceExtension[1161] )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
      8395569LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00656DC,
      1,
      v9);
    v4 = *((_WORD *)DeviceExtension + 2321);
    if ( v4 == 2 )
    {
      v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 583);
      if ( !v5 )
        goto LABEL_12;
      v5(*((_QWORD *)DeviceExtension + 581));
      v6 = 88LL;
    }
    else
    {
      if ( v4 != 3 )
        goto LABEL_12;
      v7 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 583);
      if ( !v7 )
        goto LABEL_12;
      v7(*((_QWORD *)DeviceExtension + 581));
      v6 = 72LL;
    }
    memset(DeviceExtension + 4640, 0, v6);
    goto LABEL_12;
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
    8395569LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00656DC,
    1,
    v9);
LABEL_12:
  memset(DeviceExtension + 4640, 0, 0x58uLL);
  if ( v3 >= 0 )
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
  KeReleaseMutex((PRKMUTEX)DeviceExtension + 78, 0);
  return 0LL;
}
