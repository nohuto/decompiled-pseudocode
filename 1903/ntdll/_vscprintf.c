/*
 * XREFs of _vscprintf @ 0x18008DE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vscprintf(const char *const Format, va_list ArgList)
{
  return sub_18008DE2C(sub_180092D30, Format, 0LL, ArgList);
}
