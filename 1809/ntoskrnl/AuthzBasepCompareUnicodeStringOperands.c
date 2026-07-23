/*
 * XREFs of AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510
 * Callers:
 *     AuthzBasepValueInSet @ 0x1400A46E8 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x1400A4980 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400175F0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     RtlIsNameInExpression @ 0x1400A3CF0 (RtlIsNameInExpression.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x1400A46AC (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14013AEF8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepCompareUnicodeStringCaseSensitive @ 0x1403257B8 (AuthzBasepCompareUnicodeStringCaseSensitive.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringOperands(char a1, __int64 a2, _DWORD *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // eax
  int v9; // r13d
  UNICODE_STRING *p_Name; // rdx
  __int64 v11; // r12
  char v12; // zf
  UNICODE_STRING *v13; // rdx
  UNICODE_STRING *p_Expression; // rcx
  int IsNameInExpression; // ecx
  unsigned int v16; // r14d
  __int64 v17; // rdi
  wchar_t **v18; // rsi
  BOOLEAN v20; // al
  LONG v21; // eax
  unsigned int v22; // ecx
  BOOL v23; // eax
  _WORD v24[2]; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+24h] [rbp-44h]
  UNICODE_STRING *v26; // [rsp+28h] [rbp-40h]
  UNICODE_STRING Name; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING Expression; // [rsp+40h] [rbp-28h] BYREF
  char v29; // [rsp+88h] [rbp+20h] BYREF

  v24[0] = 0;
  p_Buffer = &Name.Buffer;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  *a3 = 0;
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v29);
  v25 = OperandStringCaseForEvaluation;
  if ( OperandStringCaseForEvaluation < 0 )
  {
LABEL_25:
    *a3 = -1;
    v16 = OperandStringCaseForEvaluation;
    goto LABEL_19;
  }
  v9 = 0;
  p_Name = &Name;
  v26 = &Name;
  v11 = a2 + 16;
  do
  {
    if ( *(_DWORD *)(v11 - 4) == 1 )
    {
      v12 = v29 == 0;
    }
    else
    {
      v12 = v29 == 0;
      if ( v29 )
      {
        *p_Name = *(UNICODE_STRING *)*(_QWORD *)(*(_QWORD *)v11 + 48LL);
        goto LABEL_9;
      }
    }
    OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                       a2 + 40LL * v9,
                                       v12,
                                       &Name.Length + 8 * v9,
                                       (_BYTE *)v24 + v9);
    v25 = OperandStringCaseForEvaluation;
    if ( OperandStringCaseForEvaluation < 0 )
      goto LABEL_25;
    p_Name = v26;
LABEL_9:
    ++v9;
    v11 += 40LL;
    v26 = ++p_Name;
  }
  while ( v9 < 2 );
  if ( (unsigned __int8)(a1 + 0x80) > 1u )
  {
    if ( v29 )
      v21 = AuthzBasepCompareUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v21 = RtlCompareUnicodeString(&Name, &Expression, 1u);
    *a3 = v21;
    v22 = v21;
    if ( a1 != -126 )
    {
      if ( a1 == -125 )
      {
        v23 = v21 <= 0;
LABEL_40:
        *a3 = v23;
        goto LABEL_43;
      }
      if ( a1 == -124 )
      {
        v23 = v21 > 0;
        goto LABEL_40;
      }
      if ( a1 != -123 )
        goto LABEL_43;
      v22 = ~v21;
    }
    *a3 = v22 >> 31;
LABEL_43:
    v16 = v25;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
  {
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v13 = &Name;
      p_Expression = &Expression;
    }
    else
    {
      v13 = &Expression;
      p_Expression = &Name;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Expression, v13, v29 == 0, 0LL);
    *a3 = IsNameInExpression;
  }
  else
  {
    if ( v29 )
      v20 = AuthzBasepEqualUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v20 = RtlEqualUnicodeString(&Name, &Expression, 1u);
    IsNameInExpression = v20;
    *a3 = v20;
  }
  v12 = a1 == -127;
  v16 = v25;
  if ( v12 )
    *a3 = IsNameInExpression != 1;
LABEL_19:
  v17 = 0LL;
  v18 = &Name.Buffer;
  do
  {
    if ( *((_BYTE *)v24 + v17) )
      ExFreePoolWithTag(*v18, 0);
    ++v17;
    v18 += 2;
  }
  while ( v17 < 2 );
  return v16;
}
