/*
 * XREFs of strstr @ 0x14019FD30
 * Callers:
 *     InbvDetermineFunction @ 0x140198C78 (InbvDetermineFunction.c)
 *     KiDetermineRetpolineEnablement @ 0x14019C97C (KiDetermineRetpolineEnablement.c)
 *     HvlDebuggerSupportInitialize @ 0x14019E488 (HvlDebuggerSupportInitialize.c)
 *     KiInitializeBootStructures @ 0x14059FFA0 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1405A2EF4 (KiMatchLoadOption.c)
 *     SepIsOptionPresent @ 0x14075D310 (SepIsOptionPresent.c)
 *     HvlPhase0Initialize @ 0x14078A70C (HvlPhase0Initialize.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x1409D0324 (CcInitializeBcbProfiler.c)
 *     KiPerformGroupConfiguration @ 0x1409ED6C8 (KiPerformGroupConfiguration.c)
 *     KeInitializeClock @ 0x1409FCFBC (KeInitializeClock.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 *     CmpGetBiosVersion @ 0x140A0CA64 (CmpGetBiosVersion.c)
 *     VhdInitialize @ 0x140A0FE80 (VhdInitialize.c)
 *     InbvDriverInitialize @ 0x140A1A1BC (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A1A270 (BvgaDriverInitialize.c)
 *     ViInitSystemPhase0 @ 0x140A1E29C (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140A1F410 (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140A20348 (KitpInitAitSampleRate.c)
 *     KiInitializeNxSupportDiscard @ 0x140A20C6C (KiInitializeNxSupportDiscard.c)
 *     MiInitializeSystemDefaults @ 0x140A210F4 (MiInitializeSystemDefaults.c)
 *     RamdiskStart @ 0x140A3F710 (RamdiskStart.c)
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
