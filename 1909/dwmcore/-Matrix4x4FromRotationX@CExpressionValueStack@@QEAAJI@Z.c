/*
 * XREFs of ?Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z @ 0x180200DCC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180227140 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x1802271C0 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromRotationX(CExpressionValueStack *this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v12; // edi
  unsigned int v14; // [rsp+20h] [rbp-60h]
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h]
  _OWORD v17[4]; // [rsp+40h] [rbp-40h] BYREF

  v4 = *((unsigned int *)this + 4);
  if ( (unsigned int)v4 < a2 )
  {
    v14 = 6348;
LABEL_12:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v14,
      0LL);
    return v12;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v5 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v4 - 2);
      v6 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v4 - 1);
      if ( *(_DWORD *)(v5 + 72) == 18 && *(_DWORD *)(v6 + 72) == 52 )
      {
        v7 = *(_QWORD *)v6;
        v8 = *(_DWORD *)(v6 + 8);
        v15 = v7;
        v16 = v8;
        D2DMatrixRotationX(v17, v4, &v15);
        goto LABEL_10;
      }
    }
LABEL_11:
    v14 = 6394;
    goto LABEL_12;
  }
  v5 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v4 - 1);
  if ( *(_DWORD *)(v5 + 72) != 18 )
    goto LABEL_11;
  D2DMatrixRotationX((struct D2DMatrix *)v17, *(float *)v5);
LABEL_10:
  v9 = v17[1];
  *(_OWORD *)v5 = v17[0];
  v10 = v17[2];
  *(_OWORD *)(v5 + 16) = v9;
  v11 = v17[3];
  *(_OWORD *)(v5 + 32) = v10;
  *(_BYTE *)(v5 + 76) = 1;
  *(_OWORD *)(v5 + 48) = v11;
  *(_DWORD *)(v5 + 72) = 265;
  *((_DWORD *)this + 4) += 1 - a2;
  return 0;
}
