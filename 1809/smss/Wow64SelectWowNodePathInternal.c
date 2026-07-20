/*
 * XREFs of Wow64SelectWowNodePathInternal @ 0x140016E2C
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x140007090 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     <none>
 */

void *__fastcall Wow64SelectWowNodePathInternal(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0x14Cu:
      return &Wowx86NodeString;
    case 0x1C4u:
      return &WowArmNodeString;
    case 0x8664u:
      return &WowAmd64NodeString;
    case 0xAA64u:
      return &WowArm64NodeString;
  }
  return 0LL;
}
