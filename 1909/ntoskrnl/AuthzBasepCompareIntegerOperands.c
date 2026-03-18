/*
 * XREFs of AuthzBasepCompareIntegerOperands @ 0x1403466A4
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x1400D2D80 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1400D3B94 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepCompareUnsigned @ 0x14034690C (AuthzBasepCompareUnsigned.c)
 */

__int64 __fastcall AuthzBasepCompareIntegerOperands(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  signed __int64 **v5; // rdx
  unsigned __int16 v6; // r10
  signed __int64 *v7; // rax
  __int64 v8; // rcx
  bool v9; // al
  signed __int64 v11; // [rsp+20h] [rbp-10h]
  signed __int64 v12; // [rsp+28h] [rbp-8h]

  v11 = -1LL;
  v2 = 0;
  v12 = -1LL;
  v4 = 0LL;
  v5 = (signed __int64 **)(a2 + 32);
  v6 = 2;
  do
  {
    if ( *((_DWORD *)v5 - 5) == 1 )
    {
      v7 = *v5;
    }
    else
    {
      v6 = *((_WORD *)v5 - 16);
      v7 = (signed __int64 *)(*(v5 - 2))[6];
    }
    v5 += 5;
    *(&v11 + v4++) = *v7;
  }
  while ( v4 < 2 );
  if ( v6 == 1 )
  {
    switch ( a1 )
    {
      case 0x80u:
        if ( v11 == v12 )
          return 1;
        v9 = 0;
        break;
      case 0x81u:
        v9 = v11 != v12;
        break;
      case 0x82u:
        v9 = v11 < v12;
        break;
      case 0x83u:
        v9 = v11 <= v12;
        break;
      case 0x84u:
        v9 = v11 > v12;
        break;
      case 0x85u:
        v9 = v11 >= v12;
        break;
      default:
        return v2;
    }
    if ( !v9 )
      return v2;
    return 1;
  }
  v8 = (unsigned int)v6 - 2;
  if ( v6 == 2 )
    goto LABEL_12;
  if ( v6 == 6 )
  {
    if ( (unsigned __int64)v11 > 1 || (unsigned __int64)v12 >= 2 )
      return (unsigned int)-1;
LABEL_12:
    LOBYTE(v8) = a1;
    return (unsigned int)AuthzBasepCompareUnsigned(v8);
  }
  return v2;
}
