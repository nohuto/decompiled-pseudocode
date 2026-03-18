/*
 * XREFs of ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C00E8B14
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00E8300 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C00E8BA0 (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C012ACDC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C01CF434 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 */

char __fastcall IsPenQuickLaunchAndShouldBeDisabled(unsigned int a1, unsigned int a2)
{
  char v2; // bl

  v2 = 0;
  if ( IsPenQuickLaunchHotKey(a1, a2) )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_QuickLaunchInvocation__private_propertyCache,
      9100606LL,
      &unk_1C02EAF98,
      1LL,
      3);
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - RIMGetLastInvertedPenTime()) < 0xFA )
    {
      v2 = 1;
      TraceLoggingSuppressQuickLaunch();
    }
  }
  return v2;
}
