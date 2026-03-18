/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x1800BD130
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  CExpressionValueStack *v2; // r8
  __int64 v3; // r11
  _QWORD *v4; // r9
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  unsigned int v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-50h]
  _QWORD v13[6]; // [rsp+48h] [rbp-38h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 6 )
  {
    v11 = 5512;
  }
  else
  {
    v3 = *((_QWORD *)this + 3);
    v4 = v13;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      this = (CExpressionValueStack *)(v3 + 80LL * (v5 + v1 - 6));
      *v4 = this;
      if ( *((_DWORD *)this + 18) != 18 )
        break;
      ++v5;
      ++v4;
      if ( v5 >= 6 )
      {
        v7 = v13[0];
        DWORD1(v12) = *(_DWORD *)v13[1];
        LODWORD(v12) = *(_DWORD *)v13[0];
        DWORD2(v12) = *(_DWORD *)v13[2];
        HIDWORD(v12) = *(_DWORD *)v13[3];
        v8 = (__m128)*(unsigned int *)v13[4];
        v9 = (__m128)*(unsigned int *)v13[5];
        *(_OWORD *)v13[0] = v12;
        *(_DWORD *)(v7 + 72) = 104;
        *(_QWORD *)(v7 + 16) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
        *(_BYTE *)(v7 + 76) = 1;
        *((_DWORD *)v2 + 4) -= 5;
        return v6;
      }
    }
    v11 = 5526;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v11,
    0LL);
  return v6;
}
