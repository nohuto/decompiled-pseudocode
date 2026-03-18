/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01616EC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0161580 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C0163FF8 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _LIST_ENTRY *a1)
{
  struct _KMUTANT *Flink; // rbx
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h]

  Flink = (struct _KMUTANT *)a1[4].Flink;
  KeInitializeMutex(Flink + 80, 0);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_Brightness3dxgkrnl__private_propertyCache,
    12732606LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006C5B8,
    1,
    v4);
  if ( *((_DWORD *)Flink->OwnerThread + 7) >= 0x700Au
    && (result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_3, 72, 3),
        (int)result >= 0) )
  {
    Flink[81].Header.LockNV = 196680;
    Flink[81].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DpiDoInterfaceReference;
    Flink[81].MutantListEntry.Flink = (struct _LIST_ENTRY *)DpiDoInterfaceDereference;
    Flink[81].MutantListEntry.Blink = (struct _LIST_ENTRY *)DpiBrightness3Set;
    Flink[81].OwnerThread = (struct _KTHREAD *)DpiBrightness3Get;
    *(_QWORD *)&Flink[81].Abandoned = DpiBrightness3GetCaps;
    *(_QWORD *)&Flink[82].Header.Lock = DpiBrightness3GetNitRanges;
    Flink[82].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)DpiBrightness3SetBacklightOptimization;
    Flink[81].Header.WaitListHead.Flink = a1;
  }
  else
  {
    result = DpiBrightnessSetupInterfaceV2((struct _DEVICE_OBJECT *)a1);
    if ( (int)result < 0 )
    {
      result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS, 56, 1);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&Flink[84].Header.Lock = a1;
        Flink[84].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)DpiDoInterfaceReference;
        Flink[84].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DpiDoInterfaceDereference;
        Flink[84].MutantListEntry.Flink = (struct _LIST_ENTRY *)DpiBrightnessIfGetPossible;
        Flink[84].MutantListEntry.Blink = (struct _LIST_ENTRY *)DpiBrightnessIfSet;
        Flink[84].OwnerThread = (struct _KTHREAD *)DpiBrightnessIfGet;
        *(_DWORD *)&Flink[83].Abandoned = 65592;
      }
    }
  }
  return result;
}
