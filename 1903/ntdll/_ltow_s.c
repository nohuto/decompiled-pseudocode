/*
 * XREFs of _ltow_s @ 0x180096B50
 * Callers:
 *     sub_18000329C @ 0x18000329C (sub_18000329C.c)
 *     sub_1800E053C @ 0x1800E053C (sub_1800E053C.c)
 * Callees:
 *     sub_180096D00 @ 0x180096D00 (sub_180096D00.c)
 */

errno_t __cdecl ltow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_180096D00(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
