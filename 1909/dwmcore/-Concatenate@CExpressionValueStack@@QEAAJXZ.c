/*
 * XREFs of ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x1801FED64
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1802278AC (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Concatenate(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  __int128 v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v10; // [rsp+20h] [rbp-28h]
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v2 = 0;
    v3 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
    v5 = *(_DWORD *)(v3 + 72);
    if ( v5 == *(_DWORD *)(v4 + 72) )
    {
      if ( v5 == 71 )
      {
        D3DXQuaternionMultiply(
          (struct D2DQuaternion *)&v11,
          (const struct D2DQuaternion *)v3,
          (const struct D2DQuaternion *)v4);
        v6 = v11;
        *(_DWORD *)(v7 + 72) = 71;
        *(_BYTE *)(v7 + 76) = 1;
        *(_OWORD *)v7 = v6;
        --*(_DWORD *)(v8 + 16);
        return v2;
      }
      v10 = 4011;
    }
    else
    {
      v10 = 3981;
    }
  }
  else
  {
    v10 = 3958;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v10,
    0LL);
  return v2;
}
