/*
 * XREFs of AuthzBasepCompareIntegerOperands @ 0x140325590
 * Callers:
 *     AuthzBasepValueInSet @ 0x1400A46E8 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x1400A4980 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepCompareUnsigned @ 0x14032580C (AuthzBasepCompareUnsigned.c)
 */

__int64 __fastcall AuthzBasepCompareIntegerOperands(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // r9
  signed __int64 **v5; // rdx
  unsigned __int16 v6; // r11
  __int64 v7; // rcx
  bool v8; // al
  signed __int64 v10; // [rsp+20h] [rbp-10h]
  signed __int64 v11; // [rsp+28h] [rbp-8h]

  v10 = -1LL;
  v2 = 0;
  v11 = -1LL;
  v4 = 0LL;
  v5 = (signed __int64 **)(a2 + 32);
  v6 = 2;
  do
  {
    if ( *((_DWORD *)v5 - 5) == 1 )
    {
      *(&v10 + v4) = **v5;
    }
    else
    {
      v6 = *((_WORD *)v5 - 16);
      *(&v10 + v4) = *(_QWORD *)(*(v5 - 2))[6];
    }
    ++v4;
    v5 += 5;
  }
  while ( v4 < 2 );
  if ( v6 == 1 )
  {
    switch ( a1 )
    {
      case 0x80u:
        if ( v10 == v11 )
          return 1;
        v8 = 0;
        break;
      case 0x81u:
        v8 = v10 != v11;
        break;
      case 0x82u:
        v8 = v10 < v11;
        break;
      case 0x83u:
        v8 = v10 <= v11;
        break;
      case 0x84u:
        v8 = v10 > v11;
        break;
      case 0x85u:
        v8 = v10 >= v11;
        break;
      default:
        return v2;
    }
    if ( !v8 )
      return v2;
    return 1;
  }
  v7 = (unsigned int)v6 - 2;
  if ( v6 == 2 )
    goto LABEL_12;
  if ( v6 == 6 )
  {
    if ( (unsigned __int64)v10 > 1 || (unsigned __int64)v11 >= 2 )
      return (unsigned int)-1;
LABEL_12:
    LOBYTE(v7) = a1;
    return (unsigned int)AuthzBasepCompareUnsigned(v7);
  }
  return v2;
}
