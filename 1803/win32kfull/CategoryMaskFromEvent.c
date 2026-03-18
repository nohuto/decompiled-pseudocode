/*
 * XREFs of CategoryMaskFromEvent @ 0x1C001F0C4
 * Callers:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CategoryMaskFromEvent(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 > 0x800E )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
        return 512LL;
      if ( a1 <= 0x80000007 )
        return 256LL;
    }
    else if ( a1 >= 0x80000000 || a1 >= 0x7FFFFF10 && (a1 == 2147483440 || a1 <= 0x7FFFFF12 || a1 == 2147483424) )
    {
      return 256LL;
    }
    return 0x8000LL;
  }
  if ( a1 == 32782 )
    return 16LL;
  result = 4LL;
  if ( a1 < 4 )
    return 0x8000LL;
  if ( a1 <= 7 )
    return 1LL;
  if ( a1 <= 0x4000 )
    return 0x8000LL;
  if ( a1 <= 0x4007 )
    return 2LL;
  if ( a1 != 32773 )
  {
    switch ( a1 )
    {
      case 0x800Bu:
        return 64LL;
      case 0x800Au:
        return 32LL;
      case 0x800Cu:
        return 8LL;
    }
    return 0x8000LL;
  }
  return result;
}
