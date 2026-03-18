/*
 * XREFs of NtIsUILanguageComitted @ 0x1406CF510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtIsUILanguageComitted()
{
  return PsUILanguageComitted == 0 ? 0xC0000034 : 0;
}
