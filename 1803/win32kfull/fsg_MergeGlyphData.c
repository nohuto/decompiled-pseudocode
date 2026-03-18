/*
 * XREFs of fsg_MergeGlyphData @ 0x1C02BDD24
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     mth_IntelMul @ 0x1C02B36E0 (mth_IntelMul.c)
 *     scl_CalcComponentOffset @ 0x1C02B3E84 (scl_CalcComponentOffset.c)
 *     scl_InitializeChildScaling @ 0x1C02B469C (scl_InitializeChildScaling.c)
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C02B557C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_ScaleFixedCurrentPhantomPoints @ 0x1C02B5644 (scl_ScaleFixedCurrentPhantomPoints.c)
 *     scl_ShiftCurrentCharPoints @ 0x1C02B59E4 (scl_ShiftCurrentCharPoints.c)
 *     scl_UpdateParentElement @ 0x1C02B5AE4 (scl_UpdateParentElement.c)
 *     itrp_SetSameTransformFlag @ 0x1C02D0370 (itrp_SetSameTransformFlag.c)
 */

__int64 __fastcall fsg_MergeGlyphData(_DWORD *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  int *v4; // r14
  __int64 v5; // rdi
  int v7; // eax
  __int64 v9; // r12
  int v10; // ecx
  int v11; // r15d
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  int v17; // r9d
  __int128 v18; // xmm1
  __int16 v19; // r8
  __int16 v20; // dx
  int v21; // r8d
  int v22; // edx
  __int16 v23; // ax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int16 v27; // r8
  __int16 v28; // cx
  __int16 v29; // ax
  __int64 result; // rax
  int v31; // [rsp+28h] [rbp-58h]
  __int128 v32; // [rsp+50h] [rbp-30h] BYREF
  __int128 v33; // [rsp+60h] [rbp-20h]
  int v34; // [rsp+70h] [rbp-10h]
  int v35; // [rsp+C8h] [rbp+48h] BYREF
  unsigned __int16 v36; // [rsp+D0h] [rbp+50h]
  int v37; // [rsp+D8h] [rbp+58h] BYREF

  v36 = a3;
  v3 = *(_QWORD *)(a2 + 24);
  v4 = (int *)(a2 + 96);
  v5 = *(_QWORD *)(a2 + 176);
  v7 = *(_DWORD *)(a2 + 96);
  v9 = *(_QWORD *)(v3 + 176);
  if ( v7 != *(_DWORD *)(a2 + 112) || *(_DWORD *)(a2 + 100) || *(_DWORD *)(a2 + 108) || v7 != 0x10000 )
    mth_IntelMul(
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v5 + 64) + 2LL * (*(__int16 *)(v5 + 80) - 1)) + 9),
      *(char **)v5,
      *(int **)(v5 + 8),
      v4,
      0x10000,
      0x10000);
  v10 = *(_DWORD *)(a2 + 220);
  if ( !v10 )
  {
    v10 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 220LL) )
    {
      itrp_SetSameTransformFlag(a1, 1LL);
      scl_ScaleFixedCurrentCharPoints((__int64 *)v5, (__int64)a1);
      scl_ScaleFixedCurrentPhantomPoints(v5, (__int64)a1);
      *(_DWORD *)(a2 + 220) = 1;
      v10 = 1;
    }
  }
  if ( *(_DWORD *)(v3 + 188) || *(_DWORD *)(v3 + 196) )
  {
    if ( *(_DWORD *)(v3 + 184) || (v11 = 1, *(_DWORD *)(v3 + 200)) )
      v11 = 2;
  }
  else
  {
    v11 = 0;
  }
  if ( *(_DWORD *)(a2 + 80) == 1 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    if ( !*(_DWORD *)(v12 + 220) )
    {
      v13 = *(_OWORD *)(v12 + 184);
      v14 = *(_OWORD *)(v12 + 200);
      v15 = *(_DWORD *)(v12 + 216);
      v32 = v13;
      v33 = v14;
      v34 = v15;
      scl_InitializeChildScaling(a1, (int *)&v32, v36);
      v10 = *(_DWORD *)(a2 + 220);
    }
    v16 = *(_OWORD *)v4;
    v17 = *(_DWORD *)(a2 + 84);
    v18 = *((_OWORD *)v4 + 1);
    v19 = *(_WORD *)(a2 + 90);
    v20 = *(_WORD *)(a2 + 88);
    v34 = v4[8];
    v31 = *(_DWORD *)(a2 + 140);
    v32 = v16;
    v33 = v18;
    scl_CalcComponentOffset((__int64)a1, v20, v19, v17, v10, v31, (int *)&v32, v11, &v37, &v35);
    v21 = v35;
    v22 = v37;
  }
  else
  {
    v23 = *(_WORD *)(v9 + 80);
    if ( !v23 )
      return 5121LL;
    v24 = *(unsigned __int16 *)(a2 + 92);
    if ( (int)v24 > *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v23 - 1)) + 8 )
      return 5121LL;
    v25 = *(unsigned __int16 *)(a2 + 94);
    if ( (int)v25 > *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (*(__int16 *)(v5 + 80) - 1)) + 8 )
      return 5121LL;
    v22 = *(_DWORD *)(*(_QWORD *)v9 + 4 * v24) - *(_DWORD *)(*(_QWORD *)v5 + 4 * v25);
    v21 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 4LL * *(unsigned __int16 *)(a2 + 92))
        - *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v25);
  }
  scl_ShiftCurrentCharPoints(v5, v22, v21);
  if ( *(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(v3 + 132) = 1;
    v26 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v5 + 64) + 2LL * (*(__int16 *)(v5 + 80) - 1)) + 1);
    v27 = *(_WORD *)(*(_QWORD *)(v5 + 64) + 2LL * (*(__int16 *)(v5 + 80) - 1)) + 2;
    *(_DWORD *)(v3 + 144) = *(_DWORD *)(*(_QWORD *)v5 + 4 * v26);
    *(_DWORD *)(v3 + 148) = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v26);
    *(_DWORD *)(v3 + 152) = *(_DWORD *)(*(_QWORD *)v5 + 4LL * v27);
    *(_DWORD *)(v3 + 156) = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL * v27);
  }
  v28 = *(_WORD *)(v3 + 160);
  v29 = *(_WORD *)(a2 + 160);
  if ( v28 != -1 )
    v29 = (unsigned __int8)v28 & (v29 & 3 | 4);
  *(_WORD *)(v3 + 160) = v29;
  result = scl_UpdateParentElement(v5, v9);
  *(_WORD *)(v5 + 80) = 0;
  return result;
}
