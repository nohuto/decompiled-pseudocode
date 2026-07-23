/*
 * XREFs of strstr @ 0x140195000
 * Callers:
 *     InbvDetermineFunction @ 0x14018E594 (InbvDetermineFunction.c)
 *     HvlDebuggerSupportInitialize @ 0x140194054 (HvlDebuggerSupportInitialize.c)
 *     KiIsSafeBoot @ 0x1401B4764 (KiIsSafeBoot.c)
 *     KiIsWinPEBoot @ 0x1401B4980 (KiIsWinPEBoot.c)
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1405748D8 (KiMatchLoadOption.c)
 *     HvlPhase0Initialize @ 0x140726C68 (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x140728AA4 (SepIsOptionPresent.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x14098F324 (CcInitializeBcbProfiler.c)
 *     KiInitializeNxSupportDiscard @ 0x1409B0820 (KiInitializeNxSupportDiscard.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     KiPerformGroupConfiguration @ 0x1409B75EC (KiPerformGroupConfiguration.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 *     CmpGetBiosVersion @ 0x1409C38D4 (CmpGetBiosVersion.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     InbvDriverInitialize @ 0x1409D7F70 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1409D8020 (BvgaDriverInitialize.c)
 *     KeInitializeClock @ 0x1409D9C58 (KeInitializeClock.c)
 *     ViInitSystemPhase0 @ 0x1409DBF34 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x1409DCEF0 (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x1409DE5E8 (KitpInitAitSampleRate.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char *v3; // r8
  char v5; // al
  signed __int64 i; // r9
  const char *v7; // rdx

  v3 = (char *)Str;
  if ( !*SubStr )
    return (char *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = Str - SubStr; ; ++i )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( v7[i] == *v7 )
    {
      ++v7;
      if ( v7[i] )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}
