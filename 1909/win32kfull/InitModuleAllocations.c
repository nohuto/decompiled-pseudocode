/*
 * XREFs of InitModuleAllocations @ 0x1C0118950
 * Callers:
 *     <none>
 * Callees:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0118A1C (-InitLogQMsg@@YAXXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C012ACDC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     InitQMiPTrace @ 0x1C01E35E4 (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 v0; // rcx
  __int64 result; // rax

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
  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations");
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_AtomicCheckFailure__private_propertyCache,
    18815308LL,
    &unk_1C02DB2C0,
    0LL,
    3);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
