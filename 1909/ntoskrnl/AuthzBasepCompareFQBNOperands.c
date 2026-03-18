/*
 * XREFs of AuthzBasepCompareFQBNOperands @ 0x14034641C
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x1400D2D80 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1400D3B94 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400D0CE0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepGetConstantOperand @ 0x1400D2ECC (AuthzBasepGetConstantOperand.c)
 *     RtlIsNameInExpression @ 0x1400D3540 (RtlIsNameInExpression.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x1400D3B58 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AuthzBasepCompareUnsigned @ 0x14034690C (AuthzBasepCompareUnsigned.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareFQBNOperands(char a1, __int64 a2, _DWORD *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v6; // r15
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // r14d
  unsigned int v9; // r13d
  UNICODE_STRING *p_Expression; // rdx
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  UNICODE_STRING *v15; // rdx
  UNICODE_STRING *p_Name; // rcx
  BOOLEAN IsNameInExpression; // al
  __int64 v18; // rcx
  _BYTE *v19; // rdi
  wchar_t **v20; // rsi
  _WORD v22[2]; // [rsp+24h] [rbp-A4h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-A0h] BYREF
  UNICODE_STRING *v24; // [rsp+30h] [rbp-98h]
  __int64 v25; // [rsp+38h] [rbp-90h] BYREF
  __int64 v26; // [rsp+40h] [rbp-88h]
  UNICODE_STRING Expression; // [rsp+48h] [rbp-80h] BYREF
  UNICODE_STRING Name; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v29[12]; // [rsp+68h] [rbp-60h] BYREF
  char v32; // [rsp+E8h] [rbp+20h] BYREF

  memset(v29, 0, 0x28uLL);
  v25 = 0LL;
  v26 = 0LL;
  v22[0] = 0;
  v32 = 0;
  *a3 = 0;
  p_Buffer = &Expression.Buffer;
  v6 = 2LL;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v32);
  if ( OperandStringCaseForEvaluation >= 0 )
  {
    v9 = 0;
    p_Expression = &Expression;
    v24 = &Expression;
    v11 = &v25;
    v12 = a2 + 24;
    do
    {
      if ( *(_DWORD *)(v12 - 12) == 1 )
      {
        if ( !*(_BYTE *)(v12 - 20) )
        {
          OperandStringCaseForEvaluation = -1073741406;
          goto LABEL_4;
        }
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(
                                           *(char **)(v12 + 8),
                                           *(_DWORD *)v12,
                                           (__int64)v29,
                                           (int *)&v23);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        if ( LOWORD(v29[0]) != 3 )
          goto LABEL_4;
        OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                           (__int64)v29,
                                           v32 == 0,
                                           &Expression.Length + 8 * v9,
                                           (_BYTE *)v22 + v9);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(
                                           (char *)(*(_QWORD *)(v12 + 8) + v23),
                                           *(_DWORD *)v12 - v23,
                                           (__int64)v29,
                                           (int *)&v23);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        if ( LOWORD(v29[0]) != 2 )
          goto LABEL_4;
        v13 = v29[4];
        *v11 = *(_QWORD *)v29[4];
        if ( *(_BYTE *)(v13 + 8) == 2 )
          goto LABEL_4;
        p_Expression = v24;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v12 - 8) + 48LL);
        *v11 = *(_QWORD *)v14;
        *p_Expression = *(UNICODE_STRING *)(v14 + 8);
      }
      ++v9;
      v12 += 40LL;
      ++v11;
      v24 = ++p_Expression;
    }
    while ( v9 < 2 );
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v15 = &Expression;
      p_Name = &Name;
    }
    else
    {
      v15 = &Name;
      p_Name = &Expression;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Name, v15, v32 == 0, 0LL);
    if ( v25 == v26 && IsNameInExpression )
    {
      *a3 = 1;
      v18 = 0LL;
    }
    else
    {
      *a3 = 0;
      v18 = 1LL;
    }
    if ( a1 == -127 )
    {
      *a3 = v18;
    }
    else if ( a1 != (char)0x80 )
    {
      if ( IsNameInExpression )
      {
        LOBYTE(v18) = a1;
        *a3 = AuthzBasepCompareUnsigned(v18);
      }
      else
      {
        *a3 = 0;
      }
    }
  }
  else
  {
LABEL_4:
    *a3 = -1;
  }
  v19 = v22;
  v20 = &Expression.Buffer;
  do
  {
    if ( *v19 )
      ExFreePoolWithTag(*v20, 0);
    ++v19;
    v20 += 2;
    --v6;
  }
  while ( v6 );
  return (unsigned int)OperandStringCaseForEvaluation;
}
