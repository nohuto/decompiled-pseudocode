/*
 * XREFs of ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1C00D70E8
 * Callers:
 *     xxxProcessTSFEvent @ 0x1C00D7064 (xxxProcessTSFEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TSFRangeFromEvent(unsigned int a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
  {
    if ( a1 == 2147483408 )
    {
      return 1LL;
    }
    else if ( a1 - 2147483409 <= 1 )
    {
      return 2LL;
    }
  }
  else if ( a1 >= 0x7FFFFF00 )
  {
    if ( a1 <= 0x7FFFFF01 )
    {
      return 1024LL;
    }
    else if ( a1 > 0x7FFFFFFF )
    {
      if ( a1 <= 0x80000001 )
      {
        return 256LL;
      }
      else if ( a1 > 0x80000003 )
      {
        if ( a1 <= 0x80000005 )
          return 4096LL;
      }
      else
      {
        return 512LL;
      }
    }
  }
  return result;
}
