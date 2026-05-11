/*
 * XREFs of USBParseCountOutputChannelsForUnit @ 0x1C002C8AC
 * Callers:
 *     USBParseCountOutputChannelsForUnit @ 0x1C002C8AC (USBParseCountOutputChannelsForUnit.c)
 *     USBParseTerminalUnit @ 0x1C002CBC0 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C002CD10 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C002CFA0 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C002D0D0 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C002D320 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C002D550 (USBParseExtensionUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x1C002C770 (USBParseGetUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002C8AC (USBParseCountOutputChannelsForUnit.c)
 */

__int64 __fastcall USBParseCountOutputChannelsForUnit(unsigned __int16 *a1, char *a2, int a3)
{
  unsigned int v5; // ebx
  unsigned __int8 *Unit; // rax
  __int64 v7; // r8

  v5 = 0;
  Unit = USBParseGetUnit(a1, a2, a3);
  if ( !Unit )
    return v5;
  switch ( Unit[2] )
  {
    case 2u:
      return Unit[7];
    case 3u:
      v7 = Unit[7];
      return (unsigned int)USBParseCountOutputChannelsForUnit(a1, a2, v7);
    case 4u:
      return Unit[Unit[4] + 5];
    case 5u:
      v7 = Unit[5];
      return (unsigned int)USBParseCountOutputChannelsForUnit(a1, a2, v7);
    case 6u:
      v7 = Unit[4];
      return (unsigned int)USBParseCountOutputChannelsForUnit(a1, a2, v7);
  }
  if ( (unsigned int)Unit[2] - 7 <= 1 )
    return Unit[Unit[6] + 7];
  return v5;
}
