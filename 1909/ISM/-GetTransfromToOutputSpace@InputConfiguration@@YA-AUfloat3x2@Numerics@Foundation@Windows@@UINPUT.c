/*
 * XREFs of ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_SPACE_REGION@@UtagRECT@@@Z @ 0x1800D27C8
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x180125F8C (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat3x2@012@AEBU3012@0@Z @ 0x1800D2194 (--DNumerics@Foundation@Windows@@YA-AUfloat3x2@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall InputConfiguration::GetTransfromToOutputSpace(__int64 a1, __int64 a2, int *a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // r14d
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  unsigned int v16; // xmm6_4
  __int64 v17; // r11
  __int64 v18; // xmm1_8
  __int64 v19; // r9
  __m128i v20; // xmm1
  int v21; // esi
  int v22; // r14d
  float v23; // xmm0_4
  int v24; // r10d
  int v25; // r10d
  int v26; // r10d
  __int128 v27; // xmm0
  float *v28; // rax
  float *v29; // rax
  __int64 v30; // xmm1_8
  float *v31; // rax
  float *v32; // r11
  __int128 v34; // [rsp+28h] [rbp-79h] BYREF
  float v35; // [rsp+38h] [rbp-69h]
  float v36; // [rsp+3Ch] [rbp-65h]
  __int128 v37; // [rsp+40h] [rbp-61h] BYREF
  __int64 v38; // [rsp+50h] [rbp-51h]
  __int128 v39; // [rsp+58h] [rbp-49h] BYREF
  float v40; // [rsp+68h] [rbp-39h]
  float v41; // [rsp+6Ch] [rbp-35h]
  __int128 v42; // [rsp+70h] [rbp-31h] BYREF
  __int64 v43; // [rsp+80h] [rbp-21h]
  float v44[6]; // [rsp+88h] [rbp-19h] BYREF
  float v45[22]; // [rsp+A0h] [rbp-1h] BYREF

  v4 = a3[1];
  v5 = *a3;
  v6 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 52);
  v9 = *(_DWORD *)(a2 + 56);
  v10 = (float)(a3[2] - *a3);
  v11 = (float)(a3[3] - v4);
  v12 = (float)(*(_DWORD *)(a2 + 8) - *(_DWORD *)a2);
  v13 = (float)(*(_DWORD *)(a2 + 12) - v7);
  v14 = (float)(*(_DWORD *)(a2 + 60) - v8);
  v15 = (float)(*(_DWORD *)(a2 + 64) - v9);
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
  {
    if ( ((*(_DWORD *)(a2 + 48) - 2) & 0xFFFFFFFD) == 0 )
    {
      v10 = (float)(a3[3] - a3[1]);
      v11 = (float)(a3[2] - *a3);
    }
    DWORD2(v37) = 0;
    v38 = 0LL;
    v34 = _xmm;
    *(_QWORD *)&v37 = COERCE_UNSIGNED_INT(v14 / v10);
    *((float *)&v37 + 3) = v15 / v11;
    v35 = (float)v8 - (float)((float)v5 * (float)(v14 / v10));
    v36 = (float)v9 - (float)((float)v4 * (float)(v15 / v11));
    Windows::Foundation::Numerics::operator*(v45, (float *)&v37, (float *)&v34);
    v20 = _mm_cvtsi32_si128(*(_DWORD *)(v19 + 68));
    v21 = v8 - *(_DWORD *)(v19 + 68);
    v22 = v9 - *(_DWORD *)(v19 + 72);
    *(_QWORD *)((char *)&v34 + 4) = 0LL;
    v35 = 0.0;
    v36 = 0.0;
    v42 = _xmm;
    *(float *)&v43 = (float)v21;
    *((float *)&v43 + 1) = (float)v22;
    v39 = _xmm;
    v23 = (float)*(int *)(v19 + 72) * (float)(v13 / v15);
    *(float *)&v34 = v12 / v14;
    *((float *)&v34 + 3) = v13 / v15;
    v40 = (float)v6 - (float)(_mm_cvtepi32_ps(v20).m128_f32[0] * (float)(v12 / v14));
    v41 = (float)v7 - v23;
    Windows::Foundation::Numerics::operator*((float *)&v37, (float *)&v34, (float *)&v39);
    v25 = v24 - 2;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
        {
LABEL_13:
          v31 = Windows::Foundation::Numerics::operator*(v44, v45, (float *)&v42);
          Windows::Foundation::Numerics::operator*(v32, v31, (float *)&v37);
          return v17;
        }
        v40 = 0.0;
        v39 = _xmm;
        v27 = _xmm;
        v41 = v13;
LABEL_12:
        v35 = 0.0;
        v36 = 0.0;
        v34 = v27;
        v28 = Windows::Foundation::Numerics::operator*(v44, (float *)&v34, (float *)&v39);
        v29 = Windows::Foundation::Numerics::operator*((float *)&v39, (float *)&v37, v28);
        v30 = *((_QWORD *)v29 + 2);
        v37 = *(_OWORD *)v29;
        v38 = v30;
        goto LABEL_13;
      }
      v39 = _xmm;
      v27 = _xmm_bf8000000000000000000000bf800000;
      v41 = v13;
    }
    else
    {
      v41 = 0.0;
      v39 = _xmm;
      v27 = _xmm;
    }
    v40 = v12;
    goto LABEL_12;
  }
  DWORD2(v37) = 0;
  v38 = 0LL;
  *(float *)&v16 = v12 / v10;
  v34 = _xmm;
  *(_QWORD *)&v37 = v16;
  *((float *)&v37 + 3) = v13 / v11;
  v35 = (float)v6 - (float)((float)v5 * *(float *)&v16);
  v36 = (float)v7 - (float)((float)v4 * (float)(v13 / v11));
  Windows::Foundation::Numerics::operator*((float *)&v42, (float *)&v37, (float *)&v34);
  v18 = v43;
  *(_OWORD *)v17 = v42;
  *(_QWORD *)(v17 + 16) = v18;
  return v17;
}
