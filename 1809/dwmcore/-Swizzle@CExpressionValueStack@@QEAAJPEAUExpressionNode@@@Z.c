/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180055240
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180055518 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180055560 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(CExpressionValueStack *this, struct ExpressionNode *a2)
{
  int v2; // eax
  __int64 v4; // r14
  __int64 v5; // rax
  CExpressionValue *v6; // rax
  CExpressionValue *v7; // rbx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  unsigned __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  int v26; // eax
  unsigned int v28; // [rsp+28h] [rbp-99h]
  __int128 v29; // [rsp+58h] [rbp-69h] BYREF
  __int128 v30; // [rsp+68h] [rbp-59h]
  __int128 v31; // [rsp+78h] [rbp-49h]
  __int128 v32; // [rsp+88h] [rbp-39h]
  float v33[20]; // [rsp+98h] [rbp-29h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
  {
    v28 = 7824;
    goto LABEL_39;
  }
  if ( *(_DWORD *)a2 == 101 )
  {
    v4 = 4LL;
    goto LABEL_7;
  }
  if ( *(_DWORD *)a2 == 102 )
  {
    v4 = 8LL;
LABEL_7:
    v5 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v5 < *((_DWORD *)this + 12) )
    {
      v7 = (CExpressionValue *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v33);
      v7 = (CExpressionValue *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v33);
    }
    memset_0(v33, 0, 0x40uLL);
    memset_0(&v29, 0, 0x40uLL);
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)v7 + 18));
    v9 = *((unsigned __int8 *)a2 + v4 + 4);
    v10 = ExpressionTypeChannelCount;
    v12 = CExpressionValue::CopyIntoFloatArray(v7, v11, v33);
    v13 = 0LL;
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        (unsigned int)this,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v12,
        0x1EBEu);
      return v14;
    }
    if ( v9 )
    {
      do
      {
        if ( *(_DWORD *)((char *)a2 + v4) == 1 )
        {
          LOBYTE(v12) = *((_BYTE *)a2 + v4 + 4) - v13;
          LODWORD(this) = 2 * v12 - 2;
          v15 = (*((unsigned __int8 *)a2 + v4 + 8) >> (2 * v12 - 2)) & 3;
        }
        else
        {
          if ( *(_DWORD *)((char *)a2 + v4) != 2 )
          {
            v28 = 7896;
            goto LABEL_39;
          }
          LODWORD(this) = 4 * (*((unsigned __int8 *)a2 + v4 + 4) - (_DWORD)v13) - 4;
          v15 = (*(_QWORD *)((char *)a2 + v4 + 8) >> (4 * (*((_BYTE *)a2 + v4 + 4) - (unsigned __int8)v13) - 4)) & 0xFLL;
        }
        if ( (unsigned int)v15 >= v10 )
        {
          v28 = 7907;
          goto LABEL_39;
        }
        if ( (unsigned int)v13 >= 0x10 )
        {
          v28 = 7918;
          goto LABEL_39;
        }
        v12 = LODWORD(v33[v15]);
        *((_DWORD *)&v29 + v13) = v12;
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < v9 );
    }
    v16 = v9 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 2;
            if ( v20 )
            {
              if ( v20 != 10 )
              {
                v28 = 7964;
                goto LABEL_39;
              }
              v21 = v30;
              *(_OWORD *)v7 = v29;
              *((_DWORD *)v7 + 18) = 265;
              v22 = v31;
              *((_OWORD *)v7 + 1) = v21;
              v23 = v32;
              *((_OWORD *)v7 + 2) = v22;
              *((_OWORD *)v7 + 3) = v23;
            }
            else
            {
              v24 = _mm_unpacklo_ps((__m128)(unsigned int)v30, (__m128)DWORD1(v30)).m128_u64[0];
              *(_OWORD *)v7 = v29;
              *((_DWORD *)v7 + 18) = 104;
              *((_QWORD *)v7 + 2) = v24;
            }
          }
          else
          {
            v25 = v29;
            *((_DWORD *)v7 + 18) = 69;
            *(_OWORD *)v7 = v25;
          }
        }
        else
        {
          v26 = DWORD2(v29);
          *(_QWORD *)v7 = _mm_unpacklo_ps((__m128)(unsigned int)v29, (__m128)DWORD1(v29)).m128_u64[0];
          *((_DWORD *)v7 + 2) = v26;
          *((_DWORD *)v7 + 18) = 52;
        }
        goto LABEL_36;
      }
      *((_DWORD *)v7 + 1) = DWORD1(v29);
      *((_DWORD *)v7 + 18) = 35;
    }
    else
    {
      *((_DWORD *)v7 + 18) = 18;
    }
    *(_DWORD *)v7 = v29;
LABEL_36:
    *((_BYTE *)v7 + 76) = 1;
    return v14;
  }
  v28 = 7849;
LABEL_39:
  v14 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v28);
  return v14;
}
