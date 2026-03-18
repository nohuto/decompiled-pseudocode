/*
 * XREFs of ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801BD7C8
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180054AB4 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF370 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801A9C20 (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801D28FC (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180055518 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180055560 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CExpressionValue::ApplyMaskToValue(CExpressionValue *this, struct SubchannelMaskInfo *a2)
{
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  int v18; // r9d
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned __int64 v22; // xmm1_8
  int v23; // eax
  int v24; // eax
  unsigned int v26; // [rsp+28h] [rbp-79h]
  __int128 v27; // [rsp+58h] [rbp-49h] BYREF
  __int128 v28; // [rsp+68h] [rbp-39h]
  __int128 v29; // [rsp+78h] [rbp-29h]
  __int128 v30; // [rsp+88h] [rbp-19h]
  float v31[16]; // [rsp+98h] [rbp-9h] BYREF

  memset_0(v31, 0, sizeof(v31));
  memset_0(&v27, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 18));
  v5 = *((unsigned __int8 *)a2 + 4);
  v6 = ExpressionTypeChannelCount;
  v8 = CExpressionValue::CopyIntoFloatArray(this, v7, v31);
  v10 = 0LL;
  v11 = v8;
  if ( v8 < 0 )
  {
    v26 = 751;
    v18 = v8;
    goto LABEL_32;
  }
  if ( !v5 )
  {
LABEL_10:
    v13 = v5 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 2;
            if ( v17 )
            {
              if ( v17 != 10 )
              {
                v26 = 855;
                goto LABEL_18;
              }
              v19 = v28;
              *(_OWORD *)this = v27;
              *((_DWORD *)this + 18) = 265;
              v20 = v29;
              *((_OWORD *)this + 1) = v19;
              v21 = v30;
              *((_OWORD *)this + 2) = v20;
              *((_OWORD *)this + 3) = v21;
            }
            else
            {
              v22 = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)DWORD1(v28)).m128_u64[0];
              *(_OWORD *)this = v27;
              *((_DWORD *)this + 18) = 104;
              *((_QWORD *)this + 2) = v22;
            }
          }
          else
          {
            v23 = 71;
            *(_OWORD *)this = v27;
            if ( *((_DWORD *)this + 18) != 71 )
              v23 = 69;
            *((_DWORD *)this + 18) = v23;
          }
        }
        else
        {
          v24 = DWORD2(v27);
          *(_QWORD *)this = _mm_unpacklo_ps((__m128)(unsigned int)v27, (__m128)DWORD1(v27)).m128_u64[0];
          *((_DWORD *)this + 2) = v24;
          *((_DWORD *)this + 18) = 52;
        }
        goto LABEL_30;
      }
      *((_DWORD *)this + 1) = DWORD1(v27);
      *((_DWORD *)this + 18) = 35;
    }
    else
    {
      *((_DWORD *)this + 18) = 18;
    }
    *(_DWORD *)this = v27;
LABEL_30:
    *((_BYTE *)this + 76) = 1;
    return v11;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      LOBYTE(v8) = *((_BYTE *)a2 + 4) - v10;
      v9 = (unsigned int)(2 * v8 - 2);
      v12 = (*((unsigned __int8 *)a2 + 8) >> (2 * v8 - 2)) & 3;
      goto LABEL_7;
    }
    if ( *(_DWORD *)a2 != 2 )
      break;
    v9 = 4 * (*((unsigned __int8 *)a2 + 4) - (unsigned int)v10) - 4;
    v12 = (*((_QWORD *)a2 + 1) >> (4 * (*((_BYTE *)a2 + 4) - (unsigned __int8)v10) - 4)) & 0xFLL;
LABEL_7:
    if ( (unsigned int)v12 >= v6 )
    {
      v26 = 789;
      goto LABEL_18;
    }
    if ( (unsigned int)v10 >= 0x10 )
    {
      v26 = 800;
      goto LABEL_18;
    }
    v8 = LODWORD(v31[v12]);
    *((_DWORD *)&v27 + v10) = v8;
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v5 )
      goto LABEL_10;
  }
  v26 = 778;
LABEL_18:
  v18 = -2147467259;
  LODWORD(v10) = 0;
  v11 = -2147467259;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, v10, v18, v26);
  return v11;
}
