/*
 * XREFs of sub_18006C654 @ 0x18006C654
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 * Callees:
 *     sub_18006C688 @ 0x18006C688 (sub_18006C688.c)
 */

_UNKNOWN **__fastcall sub_18006C654(__int64 a1)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = &retaddr;
  if ( *(int *)(a1 + 56) < 6 )
  {
    v3 = 0;
    v4 = 1LL;
    return (_UNKNOWN **)sub_18006C688(a1, &v3, &v4);
  }
  return result;
}
