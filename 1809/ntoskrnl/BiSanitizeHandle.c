/*
 * XREFs of BiSanitizeHandle @ 0x14013B3D0
 * Callers:
 *     BiDeleteKey @ 0x1406E1E6C (BiDeleteKey.c)
 *     BcdFlushStore @ 0x1406E25B4 (BcdFlushStore.c)
 *     BiCloseStore @ 0x140710F48 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x1407117F4 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140712924 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140712FE4 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1407131A4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140713B4C (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140713D84 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
