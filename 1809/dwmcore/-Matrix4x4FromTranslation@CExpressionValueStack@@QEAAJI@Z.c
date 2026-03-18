/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1800C1268
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(unsigned __int64 this, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // r15d
  CExpressionValue *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // xmm0_8
  int v8; // eax
  char v9; // al
  __int128 v10; // xmm1
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int *v13; // rbx
  CExpressionValue *v14; // rax
  _DWORD *v15; // r14
  __int64 v16; // rax
  CExpressionValue *v17; // rax
  unsigned int *v18; // r13
  CExpressionValue *v19; // rax
  int v20; // xmm0_4
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm0_4
  __int128 v23; // xmm1
  unsigned int v25; // [rsp+28h] [rbp-39h]
  int v26; // [rsp+40h] [rbp-21h]
  __int128 v27; // [rsp+48h] [rbp-19h] BYREF
  __int128 v28; // [rsp+58h] [rbp-9h]
  __int128 v29; // [rsp+68h] [rbp+7h]
  __int128 v30; // [rsp+78h] [rbp+17h]

  v2 = this;
  v3 = 0;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this < a2 )
  {
    v25 = 5747;
    goto LABEL_3;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 3 )
    {
      v11 = *(_DWORD *)(v2 + 48);
      v12 = (unsigned int)(this - 3);
      v13 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v12 < v11 )
      {
        v15 = (_DWORD *)(*(_QWORD *)(v2 + 24) + 80 * v12);
      }
      else
      {
        v14 = CExpressionValue::CExpressionValue((CExpressionValue *)&v27);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v27);
        LODWORD(this) = *(_DWORD *)(v2 + 16);
        v15 = &CExpressionValueStack::s_emptyValue;
        v11 = *(_DWORD *)(v2 + 48);
      }
      v16 = (unsigned int)(this - 2);
      if ( (unsigned int)v16 < v11 )
      {
        v18 = (unsigned int *)(*(_QWORD *)(v2 + 24) + 80 * v16);
      }
      else
      {
        v17 = CExpressionValue::CExpressionValue((CExpressionValue *)&v27);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v27);
        LODWORD(this) = *(_DWORD *)(v2 + 16);
        v18 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
        v11 = *(_DWORD *)(v2 + 48);
      }
      this = (unsigned int)(this - 1);
      if ( (unsigned int)this < v11 )
      {
        v13 = (unsigned int *)(*(_QWORD *)(v2 + 24) + 80 * this);
      }
      else
      {
        v19 = CExpressionValue::CExpressionValue((CExpressionValue *)&v27);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v19);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v27);
      }
      if ( v15[18] == 18 && v18[18] == 18 && v13[18] == 18 )
      {
        v20 = *v15;
        v9 = 1;
        v21 = *v18;
        HIDWORD(v29) = 0;
        *(_QWORD *)&v29 = 0LL;
        *((_QWORD *)&v28 + 1) = 0LL;
        LODWORD(v28) = 0;
        *((_QWORD *)&v27 + 1) = 0LL;
        DWORD1(v27) = 0;
        LODWORD(v30) = v20;
        v22 = *v13;
        v15[18] = 265;
        *(_QWORD *)((char *)&v30 + 4) = __PAIR64__(v22, v21);
        LODWORD(v27) = 1065353216;
        *(_OWORD *)v15 = v27;
        DWORD1(v28) = 1065353216;
        *((_OWORD *)v15 + 1) = v28;
        DWORD2(v29) = 1065353216;
        HIDWORD(v30) = 1065353216;
        v23 = v30;
        *((_OWORD *)v15 + 2) = v29;
        *((_BYTE *)v15 + 76) = 1;
        *((_OWORD *)v15 + 3) = v23;
        goto LABEL_25;
      }
    }
LABEL_24:
    v9 = 0;
    goto LABEL_25;
  }
  this = (unsigned int)(this - 1);
  if ( (unsigned int)this < *(_DWORD *)(v2 + 48) )
  {
    v6 = (_DWORD *)(*(_QWORD *)(v2 + 24) + 80 * this);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)&v27);
    v6 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v27);
  }
  if ( v6[18] != 52 )
    goto LABEL_24;
  v7 = *(_QWORD *)v6;
  v8 = v6[2];
  HIDWORD(v29) = 0;
  *(_QWORD *)&v29 = 0LL;
  *((_QWORD *)&v28 + 1) = 0LL;
  LODWORD(v28) = 0;
  *(_QWORD *)&v30 = v7;
  v26 = v8;
  v9 = 1;
  DWORD2(v30) = v26;
  v27 = 0x3F800000uLL;
  *(_OWORD *)v6 = 0x3F800000uLL;
  DWORD1(v28) = 1065353216;
  *((_OWORD *)v6 + 1) = v28;
  DWORD2(v29) = 1065353216;
  HIDWORD(v30) = 1065353216;
  v10 = v30;
  *((_OWORD *)v6 + 2) = v29;
  v6[18] = 265;
  *((_OWORD *)v6 + 3) = v10;
  *((_BYTE *)v6 + 76) = 1;
LABEL_25:
  if ( v9 )
  {
    *(_DWORD *)(v2 + 16) += 1 - a2;
    return v3;
  }
  v25 = 5797;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v25);
  return v3;
}
