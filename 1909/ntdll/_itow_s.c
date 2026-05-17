/*
 * XREFs of _itow_s @ 0x1800971F0
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x18000329C (RtlpFindRegTziForCurrentYear.c)
 *     LdrpMUIEtwOutput @ 0x1800E062C (LdrpMUIEtwOutput.c)
 * Callees:
 *     xtow_s @ 0x1800973A0 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return xtow_s(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
