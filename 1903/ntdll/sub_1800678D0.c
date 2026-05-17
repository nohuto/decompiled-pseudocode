/*
 * XREFs of sub_1800678D0 @ 0x1800678D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     sub_180107294 @ 0x180107294 (sub_180107294.c)
 */

__int64 sub_1800678D0()
{
  __int64 result; // rax

  result = sub_18006790C(sub_18004F0D0, 0LL, 0LL);
  if ( (byte_180166058 & 8) != 0 )
    result = sub_180107294();
  dword_180166360 = 0;
  return result;
}
