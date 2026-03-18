/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800C3BD4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800C3D28 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C3D74 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(__int64 this, struct ExpressionNode *a2)
{
  int v2; // eax
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v7; // edi
  unsigned int v8; // r12d
  unsigned int v9; // edx
  signed int v10; // eax
  unsigned int v11; // esi
  unsigned int i; // r9d
  __int64 v13; // r8
  unsigned int v14; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned __int64 v23; // xmm1_8
  __int128 v24; // xmm0
  int v25; // eax
  unsigned int v26; // [rsp+28h] [rbp-89h]
  __int128 v27; // [rsp+58h] [rbp-59h] BYREF
  __int128 v28; // [rsp+68h] [rbp-49h]
  __int128 v29; // [rsp+78h] [rbp-39h]
  __int128 v30; // [rsp+88h] [rbp-29h]
  float v31[16]; // [rsp+98h] [rbp-19h] BYREF

  v2 = *(_DWORD *)(this + 16);
  if ( !v2 )
  {
    v26 = 7812;
    goto LABEL_37;
  }
  if ( *(_DWORD *)a2 == 101 )
  {
    v4 = 4LL;
  }
  else
  {
    if ( *(_DWORD *)a2 != 102 )
    {
      v26 = 7837;
      goto LABEL_37;
    }
    v4 = 8LL;
  }
  v5 = *(_QWORD *)(this + 24) + 80LL * (unsigned int)(v2 - 1);
  memset_0(v31, 0, sizeof(v31));
  memset_0(&v27, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(unsigned int *)(v5 + 72));
  v7 = *((unsigned __int8 *)a2 + v4 + 4);
  v8 = ExpressionTypeChannelCount;
  v10 = CExpressionValue::CopyIntoFloatArray((CExpressionValue *)v5, v9, v31);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v10,
      0x1EB2u,
      0LL);
    return v11;
  }
  for ( i = 0; i < v7; *((_DWORD *)&v27 + this) = v10 )
  {
    if ( *(_DWORD *)((char *)a2 + v4) == 1 )
    {
      LOBYTE(v10) = *((_BYTE *)a2 + v4 + 4) - i;
      this = (unsigned int)(2 * v10 - 2);
      v13 = (*((unsigned __int8 *)a2 + v4 + 8) >> (2 * v10 - 2)) & 3;
    }
    else
    {
      if ( *(_DWORD *)((char *)a2 + v4) != 2 )
      {
        v26 = 7884;
        goto LABEL_37;
      }
      this = 4 * (*((unsigned __int8 *)a2 + v4 + 4) - i) - 4;
      v13 = (*(_QWORD *)((char *)a2 + v4 + 8) >> (4 * (*((_BYTE *)a2 + v4 + 4) - (unsigned __int8)i) - 4)) & 0xFLL;
    }
    if ( (unsigned int)v13 >= v8 )
    {
      v26 = 7895;
      goto LABEL_37;
    }
    if ( i >= 0x10 )
    {
      v26 = 7906;
      goto LABEL_37;
    }
    v10 = LODWORD(v31[v13]);
    this = i++;
  }
  v14 = v7 - 1;
  if ( v14 )
  {
    v16 = v14 - 1;
    if ( !v16 )
    {
      *(_DWORD *)(v5 + 4) = DWORD1(v27);
      *(_DWORD *)(v5 + 72) = 35;
      goto LABEL_13;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v25 = DWORD2(v27);
      *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)(unsigned int)v27, (__m128)DWORD1(v27)).m128_u64[0];
      *(_DWORD *)(v5 + 8) = v25;
      *(_DWORD *)(v5 + 72) = 52;
      goto LABEL_14;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v24 = v27;
      *(_DWORD *)(v5 + 72) = 69;
      *(_OWORD *)v5 = v24;
      goto LABEL_14;
    }
    v19 = v18 - 2;
    if ( !v19 )
    {
      v23 = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)DWORD1(v28)).m128_u64[0];
      *(_OWORD *)v5 = v27;
      *(_DWORD *)(v5 + 72) = 104;
      *(_QWORD *)(v5 + 16) = v23;
      goto LABEL_14;
    }
    if ( v19 == 10 )
    {
      v20 = v28;
      *(_OWORD *)v5 = v27;
      *(_DWORD *)(v5 + 72) = 265;
      v21 = v29;
      *(_OWORD *)(v5 + 16) = v20;
      v22 = v30;
      *(_OWORD *)(v5 + 32) = v21;
      *(_OWORD *)(v5 + 48) = v22;
      goto LABEL_14;
    }
    v26 = 7952;
LABEL_37:
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v26,
      0LL);
    return v11;
  }
  *(_DWORD *)(v5 + 72) = 18;
LABEL_13:
  *(_DWORD *)v5 = v27;
LABEL_14:
  *(_BYTE *)(v5 + 76) = 1;
  return v11;
}
