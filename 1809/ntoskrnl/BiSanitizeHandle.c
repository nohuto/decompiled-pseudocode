/*
 * XREFs of BiSanitizeHandle @ 0x14013B4D0
 * Callers:
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 *     BcdFlushStore @ 0x1406E3854 (BcdFlushStore.c)
 *     BiCloseStore @ 0x1407121E8 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x140712A94 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140713BC4 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140714284 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140714444 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140714A20 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140714DEC (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140715024 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
