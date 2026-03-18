/*
 * XREFs of strstr @ 0x140194EA0
 * Callers:
 *     InbvDetermineFunction @ 0x14018E434 (InbvDetermineFunction.c)
 *     HvlDebuggerSupportInitialize @ 0x140193EF4 (HvlDebuggerSupportInitialize.c)
 *     KiIsSafeBoot @ 0x1401B4604 (KiIsSafeBoot.c)
 *     KiIsWinPEBoot @ 0x1401B4820 (KiIsWinPEBoot.c)
 *     KiInitializeBootStructures @ 0x14056FE10 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1405738D8 (KiMatchLoadOption.c)
 *     HvlPhase0Initialize @ 0x1407259E8 (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x140727824 (SepIsOptionPresent.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x14098E324 (CcInitializeBcbProfiler.c)
 *     KiInitializeNxSupportDiscard @ 0x1409AF820 (KiInitializeNxSupportDiscard.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     KiPerformGroupConfiguration @ 0x1409B65EC (KiPerformGroupConfiguration.c)
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 *     CmpGetBiosVersion @ 0x1409C28D4 (CmpGetBiosVersion.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     InbvDriverInitialize @ 0x1409D6F70 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1409D7020 (BvgaDriverInitialize.c)
 *     KeInitializeClock @ 0x1409D8C58 (KeInitializeClock.c)
 *     ViInitSystemPhase0 @ 0x1409DAF34 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x1409DBEF0 (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x1409DD5E8 (KitpInitAitSampleRate.c)
 *     RamdiskStart @ 0x1409F9D3C (RamdiskStart.c)
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
