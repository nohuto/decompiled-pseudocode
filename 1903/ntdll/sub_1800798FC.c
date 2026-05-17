/*
 * XREFs of sub_1800798FC @ 0x1800798FC
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D4744 @ 0x1800D4744 (sub_1800D4744.c)
 * Callees:
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 */

__int64 __fastcall sub_1800798FC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  __int64 result; // rax

  if ( a1
    && ((result = LdrQueryImageFileKeyOption(a1, a3, a4, a5, a6, 0LL), (((_DWORD)result + 0x80000000) & 0x80000000) != 0)
     || (_DWORD)result == -2147483643) )
  {
    if ( a8 )
      *a8 = a1;
  }
  else if ( a2
         && ((result = LdrQueryImageFileKeyOption(a2, a3, a4, a5, a6, 0LL),
              (((_DWORD)result + 0x80000000) & 0x80000000) != 0)
          || (_DWORD)result == -2147483643) )
  {
    if ( a8 )
      *a8 = a2;
  }
  else
  {
    return 3221225485LL;
  }
  return result;
}
