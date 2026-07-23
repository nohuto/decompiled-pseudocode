/*
 * XREFs of AuthzBasepEvaluateAttribute @ 0x1400A5660
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepEvaluateAttribute(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  unsigned __int16 v3; // ax
  _QWORD *v4; // rax

  v1 = 0;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 40);
    if ( v2 )
    {
      if ( v2 > 1 )
        return 1;
      v3 = *(_WORD *)(a1 + 32);
      if ( v3 )
      {
        if ( v3 == 6 || v3 <= 2u )
        {
          v4 = *(_QWORD **)(a1 + 48);
          if ( v4 && *v4 )
            return 1;
        }
        else
        {
          if ( v3 == 3 )
          {
            LOBYTE(v1) = **(_WORD **)(a1 + 48) != 0;
            return v1;
          }
          if ( (v3 == 5 || v3 == 16) && *(_DWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
            return 1;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v1;
}
