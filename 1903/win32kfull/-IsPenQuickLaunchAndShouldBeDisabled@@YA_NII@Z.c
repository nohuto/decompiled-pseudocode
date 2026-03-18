/*
 * XREFs of ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C010E794
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E413C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C010E820 (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C01CF5C4 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 */

char __fastcall IsPenQuickLaunchAndShouldBeDisabled(unsigned int a1, unsigned int a2)
{
  char v2; // bl

  v2 = 0;
  if ( IsPenQuickLaunchHotKey(a1, a2) )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_QuickLaunchInvocation__private_propertyCache,
      9100606LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02EB968,
      1,
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
