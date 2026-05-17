/*
 * XREFs of _i64toa_s @ 0x180096820
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800968BC @ 0x1800968BC (sub_1800968BC.c)
 */

errno_t __cdecl i64toa_s(__int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_1800968BC(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
