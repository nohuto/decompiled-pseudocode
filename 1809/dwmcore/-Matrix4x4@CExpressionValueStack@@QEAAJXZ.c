/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1800C06F8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(unsigned __int64 this)
{
  int v1; // eax
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  _DWORD *v5; // rax
  unsigned int v6; // edi
  int v7; // xmm0_4
  unsigned int v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // xmm1_4
  __int128 v12; // xmm0
  int v13; // esi
  _QWORD *i; // r14
  CExpressionValue *v15; // rax
  _DWORD *v16; // rax
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // xmm0_4
  int v20; // xmm1_4
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v24; // [rsp+20h] [rbp-E0h]
  __int128 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+50h] [rbp-B0h]
  __int128 v28; // [rsp+60h] [rbp-A0h]
  _QWORD v29[16]; // [rsp+80h] [rbp-80h] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( !v1 )
  {
    v24 = 5579;
LABEL_20:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v24);
    return v6;
  }
  v3 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v3 < *(_DWORD *)(this + 48) )
  {
    v5 = (_DWORD *)(*(_QWORD *)(this + 24) + 80 * v3);
  }
  else
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)&v25);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v25);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  v6 = 0;
  v29[0] = v5;
  if ( v5[18] == 18 )
  {
    if ( *(_DWORD *)(v2 + 16) >= 0x10u )
    {
      v13 = 0;
      for ( i = v29; ; ++i )
      {
        this = (unsigned int)(v13 + *(_DWORD *)(v2 + 16) - 16);
        if ( (unsigned int)this < *(_DWORD *)(v2 + 48) )
        {
          v16 = (_DWORD *)(*(_QWORD *)(v2 + 24) + 80 * this);
        }
        else
        {
          v15 = CExpressionValue::CExpressionValue((CExpressionValue *)&v25);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v25);
          v16 = &CExpressionValueStack::s_emptyValue;
        }
        v17 = v16[18] == 18;
        *i = v16;
        if ( !v17 )
          break;
        if ( ++v13 >= 16 )
        {
          v18 = v29[0];
          v19 = *(_DWORD *)v29[0];
          DWORD1(v25) = *(_DWORD *)v29[1];
          LODWORD(v25) = v19;
          DWORD2(v25) = *(_DWORD *)v29[2];
          HIDWORD(v25) = *(_DWORD *)v29[3];
          LODWORD(v26) = *(_DWORD *)v29[4];
          DWORD1(v26) = *(_DWORD *)v29[5];
          DWORD2(v26) = *(_DWORD *)v29[6];
          HIDWORD(v26) = *(_DWORD *)v29[7];
          LODWORD(v27) = *(_DWORD *)v29[8];
          DWORD1(v27) = *(_DWORD *)v29[9];
          DWORD2(v27) = *(_DWORD *)v29[10];
          HIDWORD(v27) = *(_DWORD *)v29[11];
          LODWORD(v28) = *(_DWORD *)v29[12];
          DWORD1(v28) = *(_DWORD *)v29[13];
          DWORD2(v28) = *(_DWORD *)v29[14];
          v20 = *(_DWORD *)v29[15];
          *(_OWORD *)v29[0] = v25;
          *(_DWORD *)(v18 + 72) = 265;
          v21 = v27;
          HIDWORD(v28) = v20;
          *(_OWORD *)(v18 + 16) = v26;
          *(_BYTE *)(v18 + 76) = 1;
          v22 = v28;
          *(_OWORD *)(v18 + 32) = v21;
          *(_OWORD *)(v18 + 48) = v22;
          *(_DWORD *)(v2 + 16) -= 15;
          return v6;
        }
      }
      v24 = 5607;
    }
    else
    {
      v24 = 5593;
    }
    goto LABEL_20;
  }
  if ( v5[18] != 104 )
  {
    v24 = 5645;
    goto LABEL_20;
  }
  v7 = *v5;
  v8 = v5[1];
  HIDWORD(v25) = 0;
  *((_QWORD *)&v26 + 1) = 0LL;
  DWORD2(v28) = 0;
  LODWORD(v25) = v7;
  DWORD1(v26) = v5[3];
  v9 = v5[4];
  *(_QWORD *)((char *)&v25 + 4) = v8;
  v10 = v5[2];
  LODWORD(v28) = v9;
  LODWORD(v26) = v10;
  v11 = v5[5];
  v5[18] = 265;
  *((float *)&v28 + 3) = FLOAT_1_0;
  *(_OWORD *)v5 = v25;
  *((_BYTE *)v5 + 76) = 1;
  DWORD1(v28) = v11;
  v12 = v28;
  *((_OWORD *)v5 + 1) = v26;
  *((_OWORD *)v5 + 2) = _xmm;
  *((_OWORD *)v5 + 3) = v12;
  return v6;
}
