/*
 * XREFs of ?CompareLangName@@YAHPEBX0@Z @ 0x14018D240
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x140195910 (_wcsicmp.c)
 */

int __fastcall CompareLangName(const wchar_t *a1, const wchar_t **a2)
{
  return wcsicmp(a1, *a2);
}
