/*
 * XREFs of sub_18000B36C @ 0x18000B36C
 * Callers:
 *     sub_18000B3F8 @ 0x18000B3F8 (sub_18000B3F8.c)
 *     sub_18000C16C @ 0x18000C16C (sub_18000C16C.c)
 * Callees:
 *     sub_18000C20C @ 0x18000C20C (sub_18000C20C.c)
 */

__int64 __fastcall sub_18000B36C(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  signed int LastError; // r10d
  __int64 result; // rax

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_18000C20C(a1, a2, a3, a4, a5, a6, 2, -2147024228);
    LastError = 668;
  }
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
