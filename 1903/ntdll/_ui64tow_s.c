/*
 * XREFs of _ui64tow_s @ 0x180096B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096BBC @ 0x180096BBC (sub_180096BBC.c)
 */

errno_t __cdecl ui64tow_s(unsigned __int64 Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return sub_180096BBC(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
