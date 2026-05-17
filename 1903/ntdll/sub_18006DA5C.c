/*
 * XREFs of sub_18006DA5C @ 0x18006DA5C
 * Callers:
 *     sub_18006D83C @ 0x18006D83C (sub_18006D83C.c)
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18006DB18 @ 0x18006DB18 (sub_18006DB18.c)
 */

__int64 __fastcall sub_18006DA5C(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3, a1, 0LL, v6), (int)result >= 0) )
  {
    sub_18006DB18(a1, a3);
    return 0LL;
  }
  return result;
}
