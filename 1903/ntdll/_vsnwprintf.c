/*
 * XREFs of _vsnwprintf @ 0x18008E0D0
 * Callers:
 *     sub_18000283C @ 0x18000283C (sub_18000283C.c)
 *     sub_18000C23C @ 0x18000C23C (sub_18000C23C.c)
 *     sub_1800526F4 @ 0x1800526F4 (sub_1800526F4.c)
 *     sub_18006A0E4 @ 0x18006A0E4 (sub_18006A0E4.c)
 *     sub_1800D7CC0 @ 0x1800D7CC0 (sub_1800D7CC0.c)
 *     sub_1800DCF94 @ 0x1800DCF94 (sub_1800DCF94.c)
 * Callees:
 *     sub_18008E0EC @ 0x18008E0EC (sub_18008E0EC.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return sub_18008E0EC((_DWORD)Buffer, BufferCount, (_DWORD)Format, 0, (__int64)Args);
}
