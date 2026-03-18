/*
 * XREFs of InitModuleAllocations @ 0x1C00E0C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C00E0B2C (-InitLogQMsg@@YAXXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E413C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     InitQMiPTrace @ 0x1C01E3764 (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-18h]

  InitLogQMsg();
  FastGetProfileDword(0LL, 2LL, L"USERPostMortemLogging");
  if ( (gdwPostMortemLogging & 1) != 0 )
    InitQMiPTrace(v0);
  if ( (gdwPostMortemLogging & 2) != 0 )
  {
    gdwAtomicCheckLogSize = 12;
    gpAtomickCheckStacks = Win32AllocPoolZInit(768LL, 1297118037LL);
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
  {
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
  HIDWORD(v2) = *(&gdwExtraInstrumentations + 1);
  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations");
  LODWORD(v2) = 3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_AtomicCheckFailure__private_propertyCache,
    18815308LL,
    &unk_1C02DB560,
    0LL,
    v2);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
