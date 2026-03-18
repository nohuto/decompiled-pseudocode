/*
 * XREFs of _FindProp @ 0x1C004D8F8
 * Callers:
 *     RealInternalSetProp @ 0x1C004D840 (RealInternalSetProp.c)
 *     RealInternalRemoveProp @ 0x1C004D8B0 (RealInternalRemoveProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindProp(__int64 a1, __int16 a2, int a3)
{
  int v4; // edx
  __int64 result; // rax
  __int16 v6; // cx

  if ( a1 )
  {
    if ( a2 )
    {
      v4 = *(_DWORD *)(a1 + 4);
      for ( result = a1 + 8; v4; --v4 )
      {
        if ( *(_WORD *)(result + 8) == a2 )
        {
          v6 = *(_WORD *)(result + 10);
          if ( a3 )
          {
            if ( (v6 & 1) != 0 )
              return result;
          }
          else if ( (v6 & 1) == 0 )
          {
            return result;
          }
        }
        result += 16LL;
      }
    }
  }
  return 0LL;
}
