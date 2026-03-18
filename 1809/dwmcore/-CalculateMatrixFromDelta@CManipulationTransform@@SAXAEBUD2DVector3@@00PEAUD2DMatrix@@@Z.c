/*
 * XREFs of ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001A320
 * Callers:
 *     ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B3C0 (-GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x18006CE08 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 *     ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180075740 (-GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801A6E8C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 * Callees:
 *     WithinEpsilon @ 0x18001A524 (WithinEpsilon.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800C0A0C (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
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
  char v14; // al
  int *v15; // rdx
  __int64 v16; // rcx
  int *v17; // r8
  __int64 v18; // r9
  int *v19; // r11
  int v20; // xmm0_4
  int v21; // xmm1_4
  int v22; // xmm0_4
  int v23; // xmm1_4
  const struct D2DMatrix *v24; // rdx
  int *v25; // r10
  int v26; // xmm2_4
  int v27; // xmm1_4
  int v28; // xmm3_4
  int v29; // xmm0_4
  int v30; // xmm1_4
  int v31; // [rsp+20h] [rbp-40h] BYREF
  int v32; // [rsp+24h] [rbp-3Ch]
  int v33; // [rsp+28h] [rbp-38h]
  int v34; // [rsp+2Ch] [rbp-34h]
  int v35; // [rsp+30h] [rbp-30h]
  int v36; // [rsp+34h] [rbp-2Ch]
  int v37; // [rsp+38h] [rbp-28h]
  int v38; // [rsp+3Ch] [rbp-24h]
  int v39; // [rsp+40h] [rbp-20h]
  int v40; // [rsp+44h] [rbp-1Ch]
  int v41; // [rsp+48h] [rbp-18h]
  int v42; // [rsp+4Ch] [rbp-14h]
  int v43; // [rsp+50h] [rbp-10h]
  int v44; // [rsp+54h] [rbp-Ch]
  int v45; // [rsp+58h] [rbp-8h]
  int v46; // [rsp+5Ch] [rbp-4h]

  v8 = 1;
  if ( !(unsigned __int8)WithinEpsilon(a1, a2, a3, a4)
    || !(unsigned __int8)WithinEpsilon(v5, v4, v6, v7)
    || (v9 = 0, !(unsigned __int8)WithinEpsilon(v5, v4, v6, v7)) )
  {
    v9 = 1;
  }
  if ( !(unsigned __int8)WithinEpsilon(v5, v4, v6, v7)
    || !(unsigned __int8)WithinEpsilon(v11, v10, v12, v13)
    || (v14 = WithinEpsilon(v11, v10, v12, v13), LOBYTE(v11) = 0, !v14) )
  {
    LOBYTE(v11) = 1;
  }
  if ( (unsigned __int8)WithinEpsilon(v11, v10, v12, v13)
    && (unsigned __int8)WithinEpsilon(v16, v15, v17, v18)
    && (unsigned __int8)WithinEpsilon(v16, v15, v17, v18) )
  {
    v8 = 0;
  }
  *(_QWORD *)(v18 + 52) = 0LL;
  *(_DWORD *)(v18 + 60) = 1065353216;
  *(_DWORD *)(v18 + 40) = 1065353216;
  *(_DWORD *)(v18 + 20) = 1065353216;
  *(_DWORD *)v18 = 1065353216;
  *(_QWORD *)(v18 + 44) = 0LL;
  *(_QWORD *)(v18 + 32) = 0LL;
  *(_QWORD *)(v18 + 24) = 0LL;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 4) = 0LL;
  if ( (_BYTE)v16 )
  {
    if ( v8 )
    {
      v26 = v17[1];
      v27 = *v17;
      v28 = v17[2] ^ _xmm;
      *(_QWORD *)(v18 + 40) = 1065353216LL;
      *(_DWORD *)(v18 + 56) = v28;
      *(_DWORD *)(v18 + 52) = v26 ^ _xmm;
      *(_DWORD *)(v18 + 48) = v27 ^ _xmm;
      *(_QWORD *)(v18 + 32) = 0LL;
      *(_QWORD *)(v18 + 24) = 0LL;
      *(_QWORD *)(v18 + 12) = 0LL;
      *(_QWORD *)(v18 + 4) = 0LL;
      *(_DWORD *)(v18 + 60) = 1065353216;
      *(_DWORD *)(v18 + 20) = 1065353216;
      *(_DWORD *)v18 = 1065353216;
    }
    v22 = *v15;
    v23 = v15[1];
    v45 = 0;
    v44 = 0;
    v43 = 0;
    v42 = 0;
    v40 = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = v22;
    v41 = v15[2];
    v36 = v23;
    v46 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)v18, (const struct D2DMatrix *)v18, (const struct D2DMatrix *)&v31);
    if ( v8 )
    {
      v29 = *v25;
      v30 = v25[1];
      v42 = 0;
      v40 = 0;
      v39 = 0;
      v38 = 0;
      v37 = 0;
      v35 = 0;
      v34 = 0;
      v33 = 0;
      v32 = 0;
      v43 = v29;
      v45 = v25[2];
      v44 = v30;
      v46 = 1065353216;
      v41 = 1065353216;
      v36 = 1065353216;
      v31 = 1065353216;
      D2DMatrixMultiply((struct D2DMatrix *)v18, v24, (const struct D2DMatrix *)&v31);
    }
  }
  if ( v9 )
  {
    v20 = *v19;
    v21 = v19[1];
    v42 = 0;
    v40 = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v43 = v20;
    v45 = v19[2];
    v44 = v21;
    v46 = 1065353216;
    v41 = 1065353216;
    v36 = 1065353216;
    v31 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)v18, (const struct D2DMatrix *)v18, (const struct D2DMatrix *)&v31);
  }
}
