/*
 * XREFs of ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18001E9E4
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800A940C (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputSinkStruct::GetInputType(int a1)
{
  __int64 result; // rax

  if ( a1 < 2 )
    return 0LL;
  result = 3LL;
  if ( a1 > 3 )
  {
    result = 4LL;
    if ( a1 != 4 )
    {
      if ( a1 <= 6 )
        return 1LL;
      if ( a1 == 7 )
        return 5LL;
      return 0LL;
    }
  }
  return result;
}
