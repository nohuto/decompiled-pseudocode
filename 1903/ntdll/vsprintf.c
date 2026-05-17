/*
 * XREFs of vsprintf @ 0x18008DF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  return sub_18008DE80(Buffer, (__int64)Format, 0LL, (__int64)ArgList);
}
