/*
 * XREFs of BiSanitizeHandle @ 0x14013B3B0
 * Callers:
 *     BiDeleteKey @ 0x1406E1E8C (BiDeleteKey.c)
 *     BcdFlushStore @ 0x1406E25D4 (BcdFlushStore.c)
 *     BiCloseStore @ 0x140710F68 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x140711814 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140712944 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140713004 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1407131C4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1407137A0 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140713B6C (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140713DA4 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
