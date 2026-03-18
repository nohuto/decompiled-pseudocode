/*
 * XREFs of ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x1800ED97C
 * Callers:
 *     CanCombineToRegion @ 0x180015F28 (CanCombineToRegion.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D4E0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall CMILMatrix::Is2DAxisAlignedIntegerPreserving(CMILMatrix *this, __int64 a2, double a3)
{
  char v3; // al
  float *v4; // rcx
  char v5; // dl
  float v6; // xmm3_4
  int v7; // eax
  float v8; // xmm3_4
  int v9; // eax
  float v10; // xmm3_4
  int v11; // eax
  float v12; // xmm3_4
  int v13; // eax
  float v14; // xmm3_4
  int v15; // eax
  float v16; // xmm3_4
  int v17; // eax
  float v19; // [rsp+58h] [rbp+18h]
  float v20; // [rsp+58h] [rbp+18h]
  float v21; // [rsp+58h] [rbp+18h]
  float v22; // [rsp+58h] [rbp+18h]
  float v23; // [rsp+58h] [rbp+18h]
  float v24; // [rsp+58h] [rbp+18h]

  v3 = CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)this);
  v5 = 0;
  if ( v3 )
  {
    v6 = *v4;
    if ( (*(_DWORD *)v4 & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v6 - v6;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      v7 = (int)v6 - LODWORD(a3);
    }
    else
    {
      v19 = v6 + 6291456.25;
      v7 = (int)(LODWORD(v19) << 10) >> 11;
    }
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - (float)v7)) & _xmm) <= 0.000081380211 )
    {
      v8 = v4[1];
      if ( (LODWORD(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v8 - v8;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v9 = (int)v8 - LODWORD(a3);
      }
      else
      {
        v20 = v8 + 6291456.25;
        v9 = (int)(LODWORD(v20) << 10) >> 11;
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - (float)v9)) & _xmm) <= 0.000081380211 )
      {
        v10 = v4[4];
        if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v10 - v10;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v11 = (int)v10 - LODWORD(a3);
        }
        else
        {
          v21 = v10 + 6291456.25;
          v11 = (int)(LODWORD(v21) << 10) >> 11;
        }
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - (float)v11)) & _xmm) <= 0.000081380211 )
        {
          v12 = v4[5];
          if ( (LODWORD(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            *(float *)&a3 = (float)(int)v12 - v12;
            *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
            v13 = (int)v12 - LODWORD(a3);
          }
          else
          {
            v22 = v12 + 6291456.25;
            v13 = (int)(LODWORD(v22) << 10) >> 11;
          }
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - (float)v13)) & _xmm) <= 0.000081380211 )
          {
            v14 = v4[12];
            if ( (LODWORD(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              *(float *)&a3 = (float)(int)v14 - v14;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
              v15 = (int)v14 - LODWORD(a3);
            }
            else
            {
              v23 = v14 + 6291456.25;
              v15 = (int)(LODWORD(v23) << 10) >> 11;
            }
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - (float)v15)) & _xmm) <= 0.00390625 )
            {
              v16 = v4[13];
              if ( (LODWORD(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
              {
                *(float *)&a3 = (float)(int)v16 - v16;
                v17 = (int)v16 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
              }
              else
              {
                v24 = v16 + 6291456.25;
                v17 = (int)(LODWORD(v24) << 10) >> 11;
              }
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16 - (float)v17)) & _xmm) <= 0.00390625 )
                return 1;
            }
          }
        }
      }
    }
  }
  return v5;
}
