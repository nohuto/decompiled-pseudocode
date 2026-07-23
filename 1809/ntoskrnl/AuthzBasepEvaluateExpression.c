/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x1400A4980
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1400A4A30 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x14012F190 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140325320 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x140325590 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1403256CC (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(char a1, __int64 a2, _DWORD *a3)
{
  unsigned __int16 *v3; // r9
  bool v4; // zf
  int v8; // ebx
  unsigned __int16 v9; // r14
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  v3 = (unsigned __int16 *)(a2 + 40);
  v4 = *(_DWORD *)(a2 + 12) == 1;
  *a3 = 0;
  if ( !v4 )
    v3 = (unsigned __int16 *)a2;
  v8 = 0;
  v9 = *v3;
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(a2) )
    goto LABEL_4;
  if ( (unsigned __int8)a1 < 0x80u )
    return (unsigned int)v8;
  if ( (unsigned __int8)a1 <= 0x81u )
  {
    v8 = AuthzBasepEvaluateSetRelationship(0LL, a2, a3);
    if ( v8 < 0 )
      goto LABEL_5;
    if ( a1 == -127 && *a3 != -1 )
      *a3 = *a3 == 0;
    goto LABEL_13;
  }
  if ( (unsigned __int8)a1 > 0x85u )
  {
    if ( a1 == -122 )
    {
LABEL_11:
      v12 = 1LL;
      goto LABEL_12;
    }
    if ( a1 != -120 )
    {
      if ( a1 == -114 )
        goto LABEL_11;
      if ( a1 != -113 )
        return (unsigned int)v8;
    }
    v12 = 2LL;
LABEL_12:
    v8 = AuthzBasepEvaluateSetRelationship(v12, a2, a3);
    if ( v8 < 0 )
      goto LABEL_5;
LABEL_13:
    if ( v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_5;
  }
  if ( !v9 )
    goto LABEL_4;
  if ( v9 <= 2u )
  {
    LOBYTE(v10) = a1;
    v13 = AuthzBasepCompareIntegerOperands(v10, a2);
    goto LABEL_27;
  }
  switch ( v9 )
  {
    case 3u:
      v14 = AuthzBasepCompareUnicodeStringOperands(a1, a2, a3);
      goto LABEL_30;
    case 4u:
      LOBYTE(v10) = a1;
      v14 = AuthzBasepCompareFQBNOperands(v10, a2, a3);
LABEL_30:
      v8 = v14;
      goto LABEL_13;
    case 5u:
    case 0x10u:
      LOBYTE(v10) = a1;
      v13 = AuthzBasepCompareOctetStringOperands(v10, a2);
LABEL_27:
      *a3 = v13;
      return (unsigned int)v8;
  }
LABEL_4:
  v8 = -1073741406;
LABEL_5:
  *a3 = -1;
  return (unsigned int)v8;
}
