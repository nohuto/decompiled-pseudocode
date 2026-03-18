/*
 * XREFs of MatchObjType @ 0x1C000A868
 * Callers:
 *     Store @ 0x1C000A740 (Store.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     CopyObject @ 0x1C0066BC0 (CopyObject.c)
 * Callees:
 *     <none>
 */

char __fastcall MatchObjType(unsigned int a1, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a1 == a2 )
    return 1;
  if ( a1 == 14 )
  {
    if ( a2 == 1 )
      return 1;
LABEL_6:
    a1 = 134;
    goto LABEL_7;
  }
  if ( a1 )
  {
    if ( a1 <= 4 )
    {
      a1 = 133;
      goto LABEL_7;
    }
    if ( a1 != 5 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_7:
  if ( a1 != a2 && (a2 != 135 || a1 - 133 > 1) )
  {
    if ( a1 )
    {
      if ( a2 )
        return v2;
    }
    else if ( a2 == 134 )
    {
      return v2;
    }
  }
  return 1;
}
