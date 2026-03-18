/*
 * XREFs of strstr @ 0x14019F610
 * Callers:
 *     InbvDetermineFunction @ 0x140198618 (InbvDetermineFunction.c)
 *     KiDetermineRetpolineEnablement @ 0x14019C1FC (KiDetermineRetpolineEnablement.c)
 *     HvlDebuggerSupportInitialize @ 0x14019DD68 (HvlDebuggerSupportInitialize.c)
 *     KiInitializeBootStructures @ 0x14059FFC0 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1405A2F14 (KiMatchLoadOption.c)
 *     SepIsOptionPresent @ 0x140758A80 (SepIsOptionPresent.c)
 *     HvlPhase0Initialize @ 0x1407882AC (HvlPhase0Initialize.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x1409D0324 (CcInitializeBcbProfiler.c)
 *     KiPerformGroupConfiguration @ 0x1409ED7B0 (KiPerformGroupConfiguration.c)
 *     KeInitializeClock @ 0x1409FCAA0 (KeInitializeClock.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     CmpGetBiosVersion @ 0x140A0C538 (CmpGetBiosVersion.c)
 *     VhdInitialize @ 0x140A0F6E8 (VhdInitialize.c)
 *     InbvDriverInitialize @ 0x140A1A02C (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A1A0E0 (BvgaDriverInitialize.c)
 *     ViInitSystemPhase0 @ 0x140A1E0C0 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140A1F230 (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140A20168 (KitpInitAitSampleRate.c)
 *     KiInitializeNxSupportDiscard @ 0x140A20A8C (KiInitializeNxSupportDiscard.c)
 *     MiInitializeSystemDefaults @ 0x140A20F14 (MiInitializeSystemDefaults.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
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
