/*
 * XREFs of _ultoa_s @ 0x1800968A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800969F0 @ 0x1800969F0 (sub_1800969F0.c)
 */

errno_t __cdecl ultoa_s(unsigned int Value, char *Buffer, size_t BufferCount, int Radix)
{
  return sub_1800969F0(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
