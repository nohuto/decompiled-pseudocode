/*
 * XREFs of sub_18000295C @ 0x18000295C
 * Callers:
 *     sub_180003C0C @ 0x180003C0C (sub_180003C0C.c)
 *     sub_180004AC4 @ 0x180004AC4 (sub_180004AC4.c)
 * Callees:
 *     sub_1800038BC @ 0x1800038BC (sub_1800038BC.c)
 */

__int64 sub_18000295C()
{
  signed int LastError; // ecx
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_1800038BC(0, 0, 0, 0, 0LL, retaddr, 2, -2147024228);
    LastError = 668;
  }
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
