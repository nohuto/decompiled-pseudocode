/*
 * XREFs of _vscprintf @ 0x180091530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vscprintf(const char *const Format, va_list ArgList)
{
  return vscprintf_helper(output_l, Format, 0LL, ArgList);
}
