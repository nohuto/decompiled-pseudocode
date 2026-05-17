/*
 * XREFs of _vscwprintf @ 0x18008DF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  return sub_18008DE2C((__int64 (__fastcall *)(__int64 *))sub_1800936C0, (__int64)Format);
}
