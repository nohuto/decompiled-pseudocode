/*
 * XREFs of _ultow_s @ 0x180096BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096D00 @ 0x180096D00 (sub_180096D00.c)
 */

errno_t __cdecl ultow_s(unsigned int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return sub_180096D00(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
