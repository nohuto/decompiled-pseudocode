/*
 * XREFs of _vswprintf @ 0x18008DF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vswprintf(wchar_t *const Buffer, const wchar_t *const Format, va_list ArgList)
{
  return sub_18008DF54(Buffer, Format, 0LL, ArgList);
}
