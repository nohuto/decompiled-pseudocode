/*
 * XREFs of wcsncmp_0 @ 0x1C00233C3
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0161010 (DpiFdoStartAdapterThread.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C029D898 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsncmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return wcsncmp(Str1, Str2, MaxCount);
}
