/*
 * XREFs of _ui64toa_s @ 0x180096880
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800968BC @ 0x1800968BC (sub_1800968BC.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  return sub_1800968BC(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
