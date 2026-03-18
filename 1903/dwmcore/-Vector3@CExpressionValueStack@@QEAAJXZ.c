/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x180085888
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int *v2; // rdx
  unsigned int *v3; // r10
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v8 = 5170;
LABEL_9:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v8,
      0LL);
    return v5;
  }
  v2 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v1 - 3));
  v3 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v1 - 2));
  v4 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
  if ( v2[18] != 18 || v3[18] != 18 || (v5 = 0, v4[18] != 18) )
  {
    v8 = 5186;
    goto LABEL_9;
  }
  v6 = *v4;
  *(_QWORD *)v2 = _mm_unpacklo_ps((__m128)*v2, (__m128)*v3).m128_u64[0];
  v2[2] = v6;
  v2[18] = 52;
  *((_BYTE *)v2 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v5;
}
