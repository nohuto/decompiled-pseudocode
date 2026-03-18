/*
 * XREFs of ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x180022270
 * Callers:
 *     ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001C670 (-GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1800A03B4 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIO.c)
 *     ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800D45B0 (-GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801E2924 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 * Callees:
 *     WithinEpsilon @ 0x180022480 (WithinEpsilon.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800BC720 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 */

void __fastcall CManipulationTransform::CalculateMatrixFromDelta(
        const struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3,
        struct D2DMatrix *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bl
  char v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // r8
  __int64 v17; // r9
  int *v18; // r11
  int v19; // xmm0_4
  int v20; // xmm1_4
  const struct D2DMatrix *v21; // rdx
  int *v22; // r10
  char v23; // al
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // xmm3_4
  int v27; // xmm0_4
  int v28; // xmm1_4
  int v29; // [rsp+20h] [rbp-40h] BYREF
  int v30; // [rsp+24h] [rbp-3Ch]
  int v31; // [rsp+28h] [rbp-38h]
  int v32; // [rsp+2Ch] [rbp-34h]
  int v33; // [rsp+30h] [rbp-30h]
  int v34; // [rsp+34h] [rbp-2Ch]
  int v35; // [rsp+38h] [rbp-28h]
  int v36; // [rsp+3Ch] [rbp-24h]
  int v37; // [rsp+40h] [rbp-20h]
  int v38; // [rsp+44h] [rbp-1Ch]
  int v39; // [rsp+48h] [rbp-18h]
  int v40; // [rsp+4Ch] [rbp-14h]
  int v41; // [rsp+50h] [rbp-10h]
  int v42; // [rsp+54h] [rbp-Ch]
  int v43; // [rsp+58h] [rbp-8h]
  int v44; // [rsp+5Ch] [rbp-4h]

  v8 = 1;
  if ( !(unsigned __int8)WithinEpsilon(a1, a2, a3, a4)
    || !(unsigned __int8)WithinEpsilon(v5, v4, v6, v7)
    || (v9 = 0, !(unsigned __int8)WithinEpsilon(v5, v4, v6, v7)) )
  {
    v9 = 1;
  }
  if ( !(unsigned __int8)WithinEpsilon(v5, v4, v6, v7)
    || !(unsigned __int8)WithinEpsilon(v11, v10, v12, v13)
    || (v23 = WithinEpsilon(v11, v10, v12, v13), LOBYTE(v11) = 0, !v23) )
  {
    LOBYTE(v11) = 1;
  }
  if ( (unsigned __int8)WithinEpsilon(v11, v10, v12, v13)
    && (unsigned __int8)WithinEpsilon(v15, v14, v16, v17)
    && (unsigned __int8)WithinEpsilon(v15, v14, v16, v17) )
  {
    v8 = 0;
  }
  *(_QWORD *)(v17 + 52) = 0LL;
  *(_DWORD *)(v17 + 60) = 1065353216;
  *(_DWORD *)(v17 + 40) = 1065353216;
  *(_DWORD *)(v17 + 20) = 1065353216;
  *(_DWORD *)v17 = 1065353216;
  *(_QWORD *)(v17 + 44) = 0LL;
  *(_QWORD *)(v17 + 32) = 0LL;
  *(_QWORD *)(v17 + 24) = 0LL;
  *(_QWORD *)(v17 + 12) = 0LL;
  *(_QWORD *)(v17 + 4) = 0LL;
  if ( (_BYTE)v15 )
  {
    if ( v8 )
    {
      v26 = v16[2] ^ _xmm;
      v27 = *v16 ^ _xmm;
      *(_DWORD *)(v17 + 52) = v16[1] ^ _xmm;
      *(_DWORD *)(v17 + 48) = v27;
      *(_DWORD *)(v17 + 56) = v26;
    }
    v19 = *v14;
    v20 = v14[1];
    v43 = 0;
    v42 = 0;
    v41 = 0;
    v40 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v35 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = v19;
    v39 = v14[2];
    v34 = v20;
    v44 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)v17, (const struct D2DMatrix *)v17, (const struct D2DMatrix *)&v29);
    if ( v8 )
    {
      v28 = v22[1];
      v41 = *v22;
      v43 = v22[2];
      v42 = v28;
      v39 = 1065353216;
      v34 = 1065353216;
      v29 = 1065353216;
      D2DMatrixMultiply((struct D2DMatrix *)v17, v21, (const struct D2DMatrix *)&v29);
    }
  }
  if ( v9 )
  {
    v24 = *v18;
    v25 = v18[1];
    v40 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v35 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v41 = v24;
    v43 = v18[2];
    v42 = v25;
    v44 = 1065353216;
    v39 = 1065353216;
    v34 = 1065353216;
    v29 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)v17, (const struct D2DMatrix *)v17, (const struct D2DMatrix *)&v29);
  }
}
