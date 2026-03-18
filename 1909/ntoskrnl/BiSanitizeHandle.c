/*
 * XREFs of BiSanitizeHandle @ 0x14013D3C0
 * Callers:
 *     BiDeleteKey @ 0x14072A888 (BiDeleteKey.c)
 *     BcdFlushStore @ 0x14072B0C4 (BcdFlushStore.c)
 *     BiCloseStore @ 0x14073D340 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x14073D820 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x14073EB60 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x14073F25C (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14073F438 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 *     BiGetKeyName @ 0x14073FE1C (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140740078 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
