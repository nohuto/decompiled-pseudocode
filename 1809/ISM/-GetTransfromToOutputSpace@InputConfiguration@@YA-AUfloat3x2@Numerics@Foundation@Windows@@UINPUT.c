/*
 * XREFs of ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_SPACE_REGION@@UtagRECT@@@Z @ 0x18009D31C
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x1800EC5D4 (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat3x2@012@AEBU3012@0@Z @ 0x18009CE54 (--DNumerics@Foundation@Windows@@YA-AUfloat3x2@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall InputConfiguration::GetTransfromToOutputSpace(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  int v3; // ebx
  int v4; // edi
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  unsigned int v11; // xmm4_4
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  unsigned int *v14; // r9
  __m128i v15; // xmm1
  int v16; // ebx
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  int v19; // edi
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  __int128 v23; // xmm0
  float *v24; // rax
  float *v25; // rax
  __int64 v26; // xmm1_8
  float *v27; // rax
  float *v28; // r11
  __int64 v29; // r11
  __int128 v31; // [rsp+28h] [rbp-79h] BYREF
  float v32; // [rsp+38h] [rbp-69h]
  float v33; // [rsp+3Ch] [rbp-65h]
  __int128 v34; // [rsp+40h] [rbp-61h] BYREF
  float v35; // [rsp+50h] [rbp-51h]
  float v36; // [rsp+54h] [rbp-4Dh]
  __int128 v37; // [rsp+58h] [rbp-49h] BYREF
  __int64 v38; // [rsp+68h] [rbp-39h]
  __int128 v39; // [rsp+70h] [rbp-31h] BYREF
  float v40; // [rsp+80h] [rbp-21h]
  float v41; // [rsp+84h] [rbp-1Dh]
  float v42[6]; // [rsp+88h] [rbp-19h] BYREF
  float v43[22]; // [rsp+A0h] [rbp-1h] BYREF

  v3 = a2[13];
  v4 = a2[14];
  v5 = (float)(int)(a3[2] - *a3);
  v6 = (float)(int)(a3[3] - a3[1]);
  v7 = (float)(a2[2] - *a2);
  v8 = (float)(a2[3] - a2[1]);
  v9 = (float)(a2[15] - v3);
  v10 = (float)(a2[16] - v4);
  if ( ((a2[12] - 2) & 0xFFFFFFFD) == 0 )
  {
    v5 = (float)(int)(a3[3] - a3[1]);
    v6 = (float)(int)(a3[2] - *a3);
  }
  DWORD2(v37) = 0;
  v38 = 0LL;
  *(float *)&v11 = v9 / v5;
  v12 = _mm_cvtsi32_si128(*a3);
  v31 = _xmm;
  v13 = _mm_cvtsi32_si128(a3[1]);
  *(_QWORD *)&v37 = v11;
  *((float *)&v37 + 3) = v10 / v6;
  v32 = (float)v3 - (float)(_mm_cvtepi32_ps(v12).m128_f32[0] * *(float *)&v11);
  v33 = (float)v4 - (float)(_mm_cvtepi32_ps(v13).m128_f32[0] * (float)(v10 / v6));
  Windows::Foundation::Numerics::operator*(v43, (float *)&v37, (float *)&v31);
  v15 = _mm_cvtsi32_si128(v14[17]);
  v16 = v3 - v14[17];
  v17 = _mm_cvtsi32_si128(*v14);
  v18 = _mm_cvtsi32_si128(v14[1]);
  v19 = v4 - v14[18];
  *(_QWORD *)((char *)&v31 + 4) = 0LL;
  v32 = 0.0;
  v33 = 0.0;
  v39 = _xmm;
  v40 = (float)v16;
  v41 = (float)v19;
  v34 = _xmm;
  *(float *)v13.m128i_i32 = (float)(int)v14[18] * (float)(v8 / v10);
  *(float *)&v31 = v7 / v9;
  *((float *)&v31 + 3) = v8 / v10;
  v35 = _mm_cvtepi32_ps(v17).m128_f32[0] - (float)(_mm_cvtepi32_ps(v15).m128_f32[0] * (float)(v7 / v9));
  v36 = _mm_cvtepi32_ps(v18).m128_f32[0] - *(float *)v13.m128i_i32;
  Windows::Foundation::Numerics::operator*((float *)&v37, (float *)&v31, (float *)&v34);
  v21 = v20 - 2;
  if ( !v21 )
  {
    v36 = 0.0;
    v34 = _xmm;
    v23 = _xmm;
    goto LABEL_9;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v34 = _xmm;
    v23 = _xmm_bf8000000000000000000000bf800000;
    v36 = v8;
LABEL_9:
    v35 = v7;
    goto LABEL_10;
  }
  if ( v22 == 1 )
  {
    v35 = 0.0;
    v34 = _xmm;
    v23 = _xmm;
    v36 = v8;
LABEL_10:
    v32 = 0.0;
    v33 = 0.0;
    v31 = v23;
    v24 = Windows::Foundation::Numerics::operator*(v42, (float *)&v31, (float *)&v34);
    v25 = Windows::Foundation::Numerics::operator*((float *)&v34, (float *)&v37, v24);
    v26 = *((_QWORD *)v25 + 2);
    v37 = *(_OWORD *)v25;
    v38 = v26;
  }
  v27 = Windows::Foundation::Numerics::operator*(v42, v43, (float *)&v39);
  Windows::Foundation::Numerics::operator*(v28, v27, (float *)&v37);
  return v29;
}
