/*
 * XREFs of NtIsUILanguageComitted @ 0x1406D0790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtIsUILanguageComitted(void)
{
  return PsUILanguageComitted == 0 ? 0xC0000034 : 0;
}
