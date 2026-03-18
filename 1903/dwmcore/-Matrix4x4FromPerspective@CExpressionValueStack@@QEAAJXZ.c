/*
 * XREFs of ?Matrix4x4FromPerspective@CExpressionValueStack@@QEAAJXZ @ 0x180201F44
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixPerspectiveRH@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x1802284CC (-D2DMatrixPerspectiveRH@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspective(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  unsigned int v9; // [rsp+20h] [rbp-58h]
  _OWORD v10[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 4 )
  {
    v3 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 4) + 72) == 18 )
    {
      if ( *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) == 18 )
      {
        if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) == 18 )
        {
          if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) == 18 )
          {
            if ( D2DMatrixPerspectiveRH(
                   (struct D2DMatrix *)v10,
                   *(float *)(v3 + 80LL * (v1 - 4)),
                   *(float *)(v3 + 80LL * (v1 - 3)),
                   *(float *)(v3 + 80LL * (v1 - 2)),
                   *(float *)(v3 + 80LL * (v1 - 1))) )
            {
              v7 = v10[0];
              *(_DWORD *)(v4 + 8 * v5 + 72) = 265;
              *(_OWORD *)(v4 + 8 * v5) = v7;
              *(_OWORD *)(v4 + 8 * v5 + 16) = v10[1];
              *(_OWORD *)(v4 + 8 * v5 + 32) = v10[2];
              *(_OWORD *)(v4 + 8 * v5 + 48) = v10[3];
              *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
              *(_DWORD *)(v6 + 16) -= 3;
              return 0;
            }
            v9 = 6633;
          }
          else
          {
            v9 = 6606;
          }
        }
        else
        {
          v9 = 6605;
        }
      }
      else
      {
        v9 = 6604;
      }
    }
    else
    {
      v9 = 6603;
    }
  }
  else
  {
    v9 = 6595;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v9,
    0LL);
  return v2;
}
