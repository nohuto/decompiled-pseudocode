/*
 * XREFs of ?QuaternionFromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x180203B4C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x180229160 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromYawPitchRoll(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int128 v6; // xmm0
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 3 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 10LL * (v1 - 3);
    if ( *(_DWORD *)(v4 + 80LL * (v1 - 3) + 72) == 18 )
    {
      if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) == 18 )
      {
        if ( *(_DWORD *)(v4 + 80LL * (v1 - 1) + 72) == 18 )
        {
          D3DXQuaternionRotationYawPitchRoll(
            (struct D2DQuaternion *)&v9,
            *(float *)(v4 + 80LL * (v1 - 3)),
            *(float *)(v4 + 80LL * (v1 - 2)),
            *(float *)(v4 + 80LL * (v1 - 1)));
          v6 = v9;
          *(_DWORD *)(v4 + 8 * v5 + 72) = 71;
          *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
          *(_OWORD *)(v4 + 8 * v5) = v6;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v8 = 7100;
      }
      else
      {
        v8 = 7099;
      }
    }
    else
    {
      v8 = 7098;
    }
  }
  else
  {
    v8 = 7091;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v8,
    0LL);
  return v3;
}
