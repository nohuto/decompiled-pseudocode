/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180192D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800544A0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800EF1C0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180192A08 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180192C64 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801932E4 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v4; // r15d
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // eax
  char v12; // r13
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  CConditionalExpression *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int IsAnyConditionSatisfied; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+20h] [rbp-69h]
  bool v33; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v34[64]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v35; // [rsp+80h] [rbp-9h]
  int v36; // [rsp+88h] [rbp-1h]
  char v37; // [rsp+8Ch] [rbp+3h]

  v4 = 0;
  *a4 = 0;
  v9 = 0;
  v10 = *((_DWORD *)this + 82) - 1;
  if ( !v10 )
  {
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(this, a2, a3, 0LL);
    v9 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, IsAnyConditionSatisfied, 0xF8u);
      return v9;
    }
    v24 = *((int *)this + 83);
    if ( (int)v24 < 0 )
    {
      v28 = *((_QWORD *)this + 40);
      if ( !v28 )
        return 1;
      v29 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v28 + 208LL))(
              v28,
              a2,
              a3,
              a4);
      v9 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x100u);
    }
    else
    {
      v25 = *(_QWORD *)(*((_QWORD *)this + 37) + 16 * v24 + 8);
      v26 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v25 + 208LL))(
              v25,
              a2,
              a3,
              a4);
      v9 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xFCu);
    }
    return v9;
  }
  if ( v10 == 1 )
  {
    memset_0(v34, 0, sizeof(v34));
    v12 = 1;
    v13 = (__int64)(*((_QWORD *)this + 38) - *((_QWORD *)this + 37)) >> 4;
    v35 = 0LL;
    v36 = 18;
    v37 = 0;
    if ( v13 )
    {
      do
      {
        v14 = CConditionalExpression::CalculateConditionValue(this, v4, a2, a3, &v33);
        v9 = v14;
        if ( v14 < 0 )
        {
          v32 = 291;
          goto LABEL_25;
        }
        if ( v33 )
        {
          v12 = 0;
          v16 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * v4 + 8);
          v9 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v16 + 208LL))(
                 v16,
                 a2,
                 a3,
                 a4);
          if ( (v9 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v9, 0x12Au);
            goto LABEL_26;
          }
          LOBYTE(v18) = EvaluateCurrentState((int **)&g_Feature_283413818_58681306_FeatureDescriptorDetails);
          if ( v18 )
          {
            if ( v9 != 1 )
            {
              v14 = CConditionalExpression::AddStackValueToSum(v19, (struct CExpressionValue *)v34, a2);
              v9 = v14;
              if ( v14 < 0 )
              {
                v32 = 309;
                goto LABEL_25;
              }
            }
          }
          else
          {
            v14 = CConditionalExpression::AddStackValueToSum(v19, (struct CExpressionValue *)v34, a2);
            v9 = v14;
            if ( v14 < 0 )
            {
              v32 = 314;
              goto LABEL_25;
            }
          }
        }
        ++v4;
      }
      while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 38) - *((_QWORD *)this + 37)) >> 4) );
      if ( v12 )
        goto LABEL_27;
      LOBYTE(v20) = EvaluateCurrentState((int **)&g_Feature_283413818_58681306_FeatureDescriptorDetails);
      if ( v20 )
      {
        if ( !v37 )
          goto LABEL_30;
        v14 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v34);
        v9 = v14;
        if ( v14 < 0 )
        {
          v32 = 339;
          goto LABEL_25;
        }
        goto LABEL_26;
      }
      v14 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v34);
      v9 = v14;
      if ( v14 >= 0 )
        goto LABEL_26;
      v32 = 348;
    }
    else
    {
LABEL_27:
      v21 = *((_QWORD *)this + 40);
      if ( !v21 )
      {
LABEL_30:
        v9 = 1;
        goto LABEL_26;
      }
      v14 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v21 + 208LL))(
              v21,
              a2,
              a3,
              a4);
      v9 = v14;
      if ( v14 >= 0 )
      {
LABEL_26:
        CExpressionValue::~CExpressionValue((CExpressionValue *)v34);
        return v9;
      }
      v32 = 324;
    }
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v32);
    goto LABEL_26;
  }
  LOBYTE(v11) = EvaluateCurrentState((int **)&g_Feature_283413818_58681306_FeatureDescriptorDetails);
  if ( v11 )
    return 1;
  return v9;
}
