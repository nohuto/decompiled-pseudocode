/*
 * XREFs of _ultow_s @ 0x18009A300
 * Callers:
 *     <none>
 * Callees:
 *     xtow_s @ 0x18009A460 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return xtow_s(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
