/*
 * XREFs of ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x18012ACBC
 * Callers:
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x18012A4E4 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 * Callees:
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x18012AA98 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 *     acosf_0 @ 0x18012DAE7 (acosf_0.c)
 *     sqrtf_0 @ 0x18012DB2F (sqrtf_0.c)
 */

void __fastcall ST::SO3_log_with_exp_coefs<float>(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v9; // xmm10_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm13_4
  float v14; // xmm2_4
  float v15; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm11_4
  float v19; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm13_4
  float v26; // xmm11_4
  float v27; // xmm0_4
  int v28; // eax
  float v29; // xmm2_4
  float v30; // xmm7_4
  float v31; // xmm0_4
  int v32; // eax
  float v33; // xmm0_4
  int v34; // eax
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm0_4

  v9 = a2[7] - a2[5];
  v10 = (float)((float)(*a2 + a2[4]) + a2[8]) - 1.0;
  *a1 = v9;
  v11 = a2[2] - a2[6];
  a1[1] = v11;
  v12 = a2[3] - a2[1];
  v13 = fmaxf(-1.0, fminf(v10 * 0.5, 1.0));
  a1[2] = v12;
  v14 = (float)((float)(v11 * v11) + (float)(v9 * v9)) + (float)(v12 * v12);
  if ( v14 >= 0.03906 )
  {
    v17 = acosf_0(v13);
  }
  else
  {
    v15 = (float)((float)((float)(v14 * 0.0023437501) + 0.020833334) * v14) + 0.5;
    v16 = sqrtf_0(v14) * v15;
    if ( v13 >= 0.0 )
    {
      ST::SO3_compute_exp_coefs<float>(v16 * v16, a3, a4, a5);
      *a1 = v9 * v15;
      a1[2] = v12 * v15;
      goto LABEL_25;
    }
    v17 = 3.1415927 - v16;
  }
  ST::SO3_compute_exp_coefs<float>(v17 * v17, a3, a4, a5);
  if ( v13 <= -0.99800003 )
  {
    v20 = 1.0 / *a4;
    v21 = (float)(*a2 - v13) * v20;
    v22 = (float)(a2[4] - v13) * v20;
    v23 = (float)(a2[8] - v13) * v20;
    v24 = v20 * 0.5;
    v25 = (float)(a2[1] + a2[3]) * v24;
    v15 = (float)(a2[5] + a2[7]) * v24;
    v26 = (float)(a2[6] + a2[2]) * v24;
    if ( v21 > v22 )
    {
      if ( v21 <= v23 )
      {
        v31 = sqrtf_0(v23);
        v32 = 1;
        if ( v12 < 0.0 )
          v32 = -1;
        v30 = v31 * (float)v32;
        v29 = (float)(1.0 / v30) * v26;
        v19 = (float)(1.0 / v30) * v15;
      }
      else
      {
        v27 = sqrtf_0(v21);
        v28 = 1;
        if ( v9 < 0.0 )
          v28 = -1;
        v29 = v27 * (float)v28;
        v30 = (float)(1.0 / v29) * v26;
        v19 = (float)(1.0 / v29) * v25;
      }
      *a1 = v29;
LABEL_21:
      a1[2] = v30;
      goto LABEL_26;
    }
    if ( v22 > v23 )
    {
      v33 = sqrtf_0(v22);
      v34 = 1;
      if ( v11 < 0.0 )
        v34 = -1;
      v19 = v33 * (float)v34;
      v30 = (float)(1.0 / v19) * v15;
      *a1 = (float)(1.0 / v19) * v25;
      goto LABEL_21;
    }
    v35 = sqrtf_0(v23);
    v36 = 1;
    if ( v12 < 0.0 )
      v36 = -1;
    v37 = v35 * (float)v36;
    v11 = 1.0 / v37;
    a1[2] = v37;
    *a1 = (float)(1.0 / v37) * v26;
LABEL_25:
    v19 = v11 * v15;
    goto LABEL_26;
  }
  v18 = 0.5 / *a3;
  *a1 = v9 * v18;
  v19 = v11 * v18;
  a1[2] = v12 * v18;
LABEL_26:
  a1[1] = v19;
}
