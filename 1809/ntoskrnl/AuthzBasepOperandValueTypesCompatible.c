/*
 * XREFs of AuthzBasepOperandValueTypesCompatible @ 0x1400A4A30
 * Callers:
 *     AuthzBasepValueInSet @ 0x1400A46E8 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x1400A4980 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepComputeExpression @ 0x1403258DC (AuthzBasepComputeExpression.c)
 * Callees:
 *     <none>
 */

bool __fastcall AuthzBasepOperandValueTypesCompatible(__int64 a1)
{
  int v1; // eax
  _WORD *v3; // r10
  _WORD *v4; // r9
  __int16 *v5; // rcx
  __int16 v6; // r8
  __int16 v7; // cx
  __int64 v10; // rdx
  char v11; // al

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 != 1 && *(_DWORD *)(a1 + 52) != 1 )
    return *(_WORD *)a1 == *(_WORD *)(a1 + 40);
  v3 = (_WORD *)(a1 + 40);
  v4 = (_WORD *)a1;
  v5 = (__int16 *)(a1 + 40);
  if ( v1 != 1 )
  {
    v4 = v3;
    v5 = (__int16 *)a1;
  }
  v6 = *v4;
  if ( *v4 == 16 && *((_BYTE *)v4 + 4) )
    return 1;
  v7 = *v5;
  if ( v7 == 16 )
  {
    if ( (unsigned __int16)(v6 - 2) <= 1u )
      return 1;
    return *(_WORD *)a1 == *v3;
  }
  if ( (unsigned __int16)(v7 - 1) > 1u || v6 != 2 )
  {
    if ( v7 == 6 )
    {
      if ( v6 == 2 )
        return 1;
    }
    else if ( v7 == 5 && v6 == 16 )
    {
      return 1;
    }
    return *(_WORD *)a1 == *v3;
  }
  v10 = *((_QWORD *)v4 + 4);
  v11 = *(_BYTE *)(v10 + 8);
  if ( v7 == 2 )
  {
    if ( v11 != 2 )
      return 1;
  }
  else if ( v7 == 1 && (v11 == 2 || *(_QWORD *)v10 <= 0x7FFFFFFFFFFFFFFFuLL) )
  {
    return 1;
  }
  return 0;
}
