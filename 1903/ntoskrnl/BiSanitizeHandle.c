/*
 * XREFs of BiSanitizeHandle @ 0x14013CE60
 * Callers:
 *     BiDeleteKey @ 0x140729518 (BiDeleteKey.c)
 *     BcdFlushStore @ 0x140729D54 (BcdFlushStore.c)
 *     BiCloseStore @ 0x14073B440 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x14073B920 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x14073CC60 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x14073D35C (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14073D538 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14073DB30 (BiOpenKey.c)
 *     BiGetKeyName @ 0x14073DF1C (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x14073E178 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
