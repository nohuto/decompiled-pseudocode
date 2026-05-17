/*
 * XREFs of _i64tow_s @ 0x180096B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096BBC @ 0x180096BBC (sub_180096BBC.c)
 */

errno_t __cdecl i64tow_s(__int64 Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_180096BBC(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
