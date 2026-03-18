/*
 * XREFs of ?Vector3Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802038D0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180227ED4 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x180227F7C (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Transform(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  CExpressionValueStack *v2; // rbx
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // xmm0_8
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-29h]
  __int64 v18; // [rsp+30h] [rbp-19h] BYREF
  int v19; // [rsp+38h] [rbp-11h]
  __int64 v20; // [rsp+40h] [rbp-9h] BYREF
  int v21; // [rsp+48h] [rbp-1h]
  __int128 v22; // [rsp+50h] [rbp+7h] BYREF
  _OWORD v23[4]; // [rsp+60h] [rbp+17h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v17 = 7531;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v17,
      0LL);
    return v3;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v1 - 1;
  v6 = 10LL * (v1 - 2);
  v7 = 10 * v5;
  if ( *(_DWORD *)(v4 + 8 * v6 + 72) != 52 )
  {
    v17 = 7537;
    goto LABEL_3;
  }
  this = (CExpressionValueStack *)*(unsigned int *)(v4 + 80 * v5 + 72);
  if ( (_DWORD)this != 71 && (_DWORD)this != 265 )
  {
    v17 = 7545;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)(v4 + 8 * v6 + 8);
  v18 = *(_QWORD *)(v4 + 8 * v6);
  v19 = v8;
  if ( (_DWORD)this == 265 )
  {
    v9 = *(_OWORD *)(v4 + 8 * v7 + 16);
    v23[0] = *(_OWORD *)(v4 + 8 * v7);
    v10 = *(_OWORD *)(v4 + 8 * v7 + 32);
    v23[1] = v9;
    v11 = *(_OWORD *)(v4 + 8 * v7 + 48);
    v23[2] = v10;
    v23[3] = v11;
    D3DXVec3Transform((struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v18, (const struct D2DMatrix *)v23);
  }
  else
  {
    v22 = *(_OWORD *)(v4 + 8 * v7);
    D3DXVec3Transform((struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v18, (const struct D2DQuaternion *)&v22);
  }
  v14 = v20;
  v15 = v21;
  *(_DWORD *)(v12 + 8 * v13 + 72) = 52;
  *(_QWORD *)(v12 + 8 * v13) = v14;
  *(_DWORD *)(v12 + 8 * v13 + 8) = v15;
  *(_BYTE *)(v12 + 8 * v13 + 76) = 1;
  --*((_DWORD *)v2 + 4);
  return 0;
}
