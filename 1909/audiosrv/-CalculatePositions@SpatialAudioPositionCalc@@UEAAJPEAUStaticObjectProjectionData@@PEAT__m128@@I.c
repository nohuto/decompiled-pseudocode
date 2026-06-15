/*
 * XREFs of ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x18001E7C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     sinf_0 @ 0x18006C933 (sinf_0.c)
 *     ?ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x180133ABC (-ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets.c)
 */

__int64 __fastcall SpatialAudioPositionCalc::CalculatePositions(
        SpatialAudioPositionCalc *this,
        struct StaticObjectProjectionData *a2,
        const GUID *a3,
        const GUID *a4)
{
  unsigned __int8 *v4; // rbx
  GUID *v5; // rsi
  float v7; // xmm6_4
  float v8; // xmm14_4
  __m128 v9; // xmm12
  float v10; // xmm10_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  __m128 v18; // xmm7
  float v19; // xmm6_4
  float v20; // xmm13_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  unsigned int v23; // xmm13_4
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __m128 v26; // xmm15
  __m128 v27; // xmm6
  __m128 v28; // xmm13
  __m128 v29; // xmm0
  __m128 v30; // xmm14
  __m128 v31; // xmm0
  __m128 Ptr_low; // xmm1
  __m128 Reserved; // xmm4
  __m128 v34; // xmm9
  __m128 v35; // xmm10
  unsigned int v36; // r10d
  __int64 v37; // r9
  int v38; // edx
  float v39; // xmm7_4
  int v40; // eax
  __m128 v41; // xmm3
  __m128 v42; // xmm3
  int v43; // eax
  __m128 v44; // xmm2
  int v45; // eax
  __m128 v46; // xmm0
  __m128 v47; // xmm3
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  __m128 v50; // xmm4
  __m128 v51; // xmm1
  __m128 v52; // xmm2
  __m128 v53; // xmm3
  __m128 v54; // xmm2
  __m128 v55; // xmm3
  __m128 v56; // xmm3
  __m128 v58; // xmm2
  float v59; // [rsp+38h] [rbp-D0h]
  float v60; // [rsp+3Ch] [rbp-CCh]
  unsigned int v61; // [rsp+40h] [rbp-C8h] BYREF
  float v62; // [rsp+44h] [rbp-C4h]
  float v63; // [rsp+48h] [rbp-C0h]
  float v64; // [rsp+4Ch] [rbp-BCh]
  unsigned int v65; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  float v67; // [rsp+68h] [rbp-A0h]
  float v68; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v69; // [rsp+70h] [rbp-98h]
  float v70; // [rsp+74h] [rbp-94h]
  const char *v71; // [rsp+78h] [rbp-90h]
  __int64 v72; // [rsp+80h] [rbp-88h]
  unsigned int *v73; // [rsp+88h] [rbp-80h]
  __int64 v74; // [rsp+90h] [rbp-78h]
  unsigned int *v75; // [rsp+98h] [rbp-70h]
  __int64 v76; // [rsp+A0h] [rbp-68h]

  v4 = (unsigned __int8 *)&SpatialAudioPositionCalc::_offsetMapTable;
  v5 = (GUID *)a3;
  if ( a2 && a3 && (_DWORD)a4 == 272 )
  {
    if ( *((_DWORD *)a2 + 27) )
    {
      SpatialAudioPositionCalc::ComputeRadialProjectionOffsets(this, (struct SpatialAudioProjectionOffsets *)&pData, a2);
      Reserved = (__m128)pData.Reserved;
      Ptr_low = (__m128)LODWORD(pData.Ptr);
      v34 = (__m128)(unsigned int)v73;
      v30 = (__m128)HIDWORD(v72);
      v28 = (__m128)(unsigned int)v72;
      v26 = (__m128)HIDWORD(v71);
      v9 = (__m128)(unsigned int)v71;
      v35 = (__m128)v69;
      v63 = v70;
      v62 = v68;
      v60 = v67;
      v59 = *(float *)&pData.Size;
      v61 = pData.Reserved;
      v64 = *(float *)&pData.Ptr;
    }
    else
    {
      v9 = (__m128)*(unsigned int *)a2;
      v7 = *((float *)a2 + 9);
      v8 = *((float *)a2 + 1) * 0.5;
      v9.m128_f32[0] = v9.m128_f32[0] * 0.5;
      v60 = v8;
      v63 = *((float *)a2 + 2) * 0.5;
      v10 = sinf_0(v7 * 0.017453292) * v9.m128_f32[0];
      v11 = sinf_0((float)(90.0 - v7) * 0.017453292);
      v12 = *((float *)a2 + 6);
      v13 = v10 / v11;
      v64 = v63;
      v61 = LODWORD(v63) ^ _xmm;
      v14 = sinf_0(v12 * 0.017453292) * v8;
      v15 = sinf_0((float)(90.0 - v12) * 0.017453292);
      v16 = 90.0 - *((float *)a2 + 7);
      v59 = v14 / v15;
      v17 = sinf_0(v16 * 0.017453292) * v63;
      v62 = v17 / sinf_0((float)(90.0 - v16) * 0.017453292);
      v18 = (__m128)LODWORD(FLOAT_180_0);
      v19 = 180.0 - *((float *)a2 + 8);
      v20 = sinf_0(v19 * 0.017453292) * v8;
      v21 = sinf_0((float)(90.0 - v19) * 0.017453292);
      v22 = *((float *)a2 + 10);
      *(float *)&v23 = v20 / v21;
      v24 = (__m128)LODWORD(v22);
      v65 = v23;
      v24.m128_f32[0] = sinf_0(v22 * 0.017453292);
      v26 = v24;
      v25 = (__m128)LODWORD(FLOAT_90_0);
      v26.m128_f32[0] = v26.m128_f32[0] * v13;
      v25.m128_f32[0] = sinf_0((float)(90.0 - v22) * 0.017453292);
      v27 = (__m128)*((unsigned int *)a2 + 11);
      v28 = v25;
      v28.m128_f32[0] = v25.m128_f32[0] * v13;
      v18.m128_f32[0] = (float)(180.0 - v27.m128_f32[0]) * 0.017453292;
      v29 = v18;
      v29.m128_f32[0] = sinf_0(v18.m128_f32[0]);
      v30 = v29;
      v30.m128_f32[0] = v29.m128_f32[0] * v13;
      v27.m128_f32[0] = (float)(v27.m128_f32[0] - 90.0) * 0.017453292;
      v31 = v27;
      v31.m128_f32[0] = sinf_0(v27.m128_f32[0]);
      Ptr_low = (__m128)LODWORD(v63);
      v34 = v31;
      Reserved = (__m128)(LODWORD(v63) ^ (unsigned int)_xmm);
      v34.m128_f32[0] = v31.m128_f32[0] * v13;
      v35 = (__m128)v65;
    }
    v36 = 0;
    v37 = 0LL;
    while ( 1 )
    {
      v38 = dword_180170DD0[v37];
      v39 = FLOAT_1_0;
      if ( (v38 & 0x10) != 0 )
      {
        v39 = *((float *)a2 + 17);
      }
      else if ( (v38 & 0x20) != 0 )
      {
        v39 = *((float *)a2 + 18);
      }
      else if ( (v38 & 0x41) == 0x41 )
      {
        v39 = *((float *)a2 + 15);
      }
      else if ( (v38 & 0x42) == 0x42 )
      {
        v39 = *((float *)a2 + 16);
      }
      else if ( (v38 & 0x80u) != 0 )
      {
        v39 = *((float *)a2 + 13);
      }
      else if ( (v38 & 1) != 0 )
      {
        v39 = *((float *)a2 + 12);
      }
      else if ( (v38 & 2) != 0 )
      {
        v39 = *((float *)a2 + 14);
      }
      v40 = *v4;
      v41 = 0LL;
      if ( !*v4 )
        goto LABEL_25;
      switch ( v40 )
      {
        case 12:
          v42 = v26;
          break;
        case 13:
          v41 = v26;
          goto LABEL_25;
        case 15:
          v41 = v30;
          goto LABEL_25;
        case 14:
          v42 = v30;
          break;
        default:
          switch ( *v4 )
          {
            case 1u:
              v42 = (__m128)LODWORD(v59);
              goto LABEL_24;
            case 2u:
              v41 = (__m128)LODWORD(v59);
              break;
            case 3u:
              v42 = Ptr_low;
              goto LABEL_24;
            case 4u:
              v41 = Ptr_low;
              break;
            case 5u:
              v41 = Reserved;
              break;
            case 6u:
              v42 = (__m128)LODWORD(v62);
              goto LABEL_24;
            case 7u:
              v42 = (__m128)LODWORD(v60);
              goto LABEL_24;
            case 8u:
              v41 = (__m128)LODWORD(v60);
              break;
            case 9u:
              v42 = v35;
              goto LABEL_24;
            case 0xAu:
              v41 = v35;
              break;
            case 0xBu:
              v41 = (__m128)LODWORD(v63);
              break;
            case 0x10u:
              v42 = v28;
              goto LABEL_24;
            case 0x11u:
              v41 = v28;
              break;
            case 0x12u:
              v42 = v34;
              goto LABEL_24;
            case 0x13u:
              v41 = v34;
              break;
            case 0x14u:
              v42 = v9;
              goto LABEL_24;
            case 0x15u:
              v41 = v9;
              break;
            default:
              goto LABEL_25;
          }
          goto LABEL_25;
      }
LABEL_24:
      v41 = _mm_xor_ps(v42, (__m128)(unsigned int)_xmm);
LABEL_25:
      v43 = v4[1];
      v44 = 0LL;
      if ( v4[1] )
      {
        if ( v43 == 20 )
        {
          v58 = v9;
LABEL_53:
          v44 = _mm_xor_ps(v58, (__m128)(unsigned int)_xmm);
        }
        else if ( v43 == 21 )
        {
          v44 = v9;
        }
        else
        {
          switch ( v4[1] )
          {
            case 1u:
              v58 = (__m128)LODWORD(v59);
              goto LABEL_53;
            case 2u:
              v44 = (__m128)LODWORD(v59);
              break;
            case 3u:
              v58 = Ptr_low;
              goto LABEL_53;
            case 4u:
              v44 = Ptr_low;
              break;
            case 5u:
              v44 = Reserved;
              break;
            case 6u:
              v58 = (__m128)LODWORD(v62);
              goto LABEL_53;
            case 7u:
              v58 = (__m128)LODWORD(v60);
              goto LABEL_53;
            case 8u:
              v44 = (__m128)LODWORD(v60);
              break;
            case 9u:
              v58 = v35;
              goto LABEL_53;
            case 0xAu:
              v44 = v35;
              break;
            case 0xBu:
              v44 = (__m128)LODWORD(v63);
              break;
            case 0xCu:
              v58 = v26;
              goto LABEL_53;
            case 0xDu:
              v44 = v26;
              break;
            case 0xEu:
              v58 = v30;
              goto LABEL_53;
            case 0xFu:
              v44 = v30;
              break;
            case 0x10u:
              v58 = v28;
              goto LABEL_53;
            case 0x11u:
              v44 = v28;
              break;
            case 0x12u:
              v58 = v34;
              goto LABEL_53;
            case 0x13u:
              v44 = v34;
              break;
            default:
              break;
          }
        }
      }
      v45 = v4[2];
      v46 = 0LL;
      switch ( v45 )
      {
        case 19:
          v46 = v34;
          break;
        case 16:
          v46 = _mm_xor_ps(v28, (__m128)(unsigned int)_xmm);
          break;
        case 5:
          v46 = Reserved;
          break;
        case 11:
          v46 = (__m128)LODWORD(v63);
          break;
        case 6:
          v46 = _mm_xor_ps((__m128)LODWORD(v62), (__m128)(unsigned int)_xmm);
          break;
        default:
          switch ( v4[2] )
          {
            case 1u:
              v46 = _mm_xor_ps((__m128)LODWORD(v59), (__m128)(unsigned int)_xmm);
              break;
            case 2u:
              v46 = (__m128)LODWORD(v59);
              break;
            case 3u:
              v46 = _mm_xor_ps(Ptr_low, (__m128)(unsigned int)_xmm);
              break;
            case 4u:
              v46 = Ptr_low;
              break;
            case 7u:
              v46 = _mm_xor_ps((__m128)LODWORD(v60), (__m128)(unsigned int)_xmm);
              break;
            case 8u:
              v46 = (__m128)LODWORD(v60);
              break;
            case 9u:
              v46 = _mm_xor_ps(v35, (__m128)(unsigned int)_xmm);
              break;
            case 0xAu:
              v46 = v35;
              break;
            case 0xCu:
              v46 = _mm_xor_ps(v26, (__m128)(unsigned int)_xmm);
              break;
            case 0xDu:
              v46 = v26;
              break;
            case 0xEu:
              v46 = _mm_xor_ps(v30, (__m128)(unsigned int)_xmm);
              break;
            case 0xFu:
              v46 = v30;
              break;
            case 0x11u:
              v46 = v28;
              break;
            case 0x12u:
              v46 = _mm_xor_ps(v34, (__m128)(unsigned int)_xmm);
              break;
            case 0x14u:
              v46 = _mm_xor_ps(v9, (__m128)(unsigned int)_xmm);
              break;
            case 0x15u:
              v46 = v9;
              break;
            default:
              goto LABEL_37;
          }
          break;
      }
LABEL_37:
      v47 = _mm_unpacklo_ps(_mm_unpacklo_ps(v41, v46), _mm_unpacklo_ps(v44, (__m128)0LL));
      *v5 = (GUID)v47;
      v48 = v47;
      if ( !*((_DWORD *)a2 + 27) )
      {
        v49 = (__m128)LODWORD(FLOAT_1_0);
        if ( (v38 & 0x10) != 0 )
        {
          v49 = (__m128)*((unsigned int *)a2 + 24);
        }
        else if ( (v38 & 0x20) != 0 )
        {
          v49 = (__m128)*((unsigned int *)a2 + 25);
        }
        else if ( (v38 & 0x41) == 0x41 )
        {
          v49 = (__m128)*((unsigned int *)a2 + 22);
        }
        else if ( (v38 & 0x42) == 0x42 )
        {
          v49 = (__m128)*((unsigned int *)a2 + 23);
        }
        else if ( (v38 & 0x80u) != 0 )
        {
          v49 = (__m128)*((unsigned int *)a2 + 20);
        }
        else if ( (v38 & 1) != 0 )
        {
          v49 = (__m128)*((unsigned int *)a2 + 19);
        }
        else if ( (v38 & 2) != 0 )
        {
          v49 = (__m128)*((unsigned int *)a2 + 21);
        }
        v48 = v47;
        if ( v49.m128_f32[0] != 1.0 )
        {
          v48 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v49, v49), _mm_unpacklo_ps(v49, (__m128)0LL)), v47);
          *v5 = (GUID)v48;
        }
      }
      v50 = _mm_mul_ps(v48, (__m128)_xmm);
      v4 += 3;
      ++v36;
      ++v37;
      v51 = _mm_or_ps(_mm_and_ps(v50, DirectX::g_XMNegativeZero), DirectX::g_XMNoFraction);
      v52 = _mm_cmple_ps(_mm_and_ps(v50, DirectX::g_XMAbsMask), DirectX::g_XMNoFraction);
      v53 = _mm_and_ps(_mm_sub_ps(_mm_add_ps(v50, v51), v51), v52);
      v54 = _mm_andnot_ps(v52, v50);
      Reserved = (__m128)v61;
      v55 = _mm_div_ps(_mm_xor_ps(v53, v54), (__m128)_xmm);
      v56 = _mm_shuffle_ps(v55, v55, 39);
      v56.m128_f32[0] = v39;
      Ptr_low = (__m128)LODWORD(v64);
      *(__m128 *)v5++ = _mm_shuffle_ps(v56, v56, 39);
      if ( v36 >= 0x11 )
        return 0LL;
    }
  }
  if ( (unsigned int)dword_1801B53C0 > 2 )
  {
    v72 = 45LL;
    v71 = "SpatialAudioPositionCalc::CalculatePositions";
    v65 = 263;
    v73 = &v65;
    v74 = 4LL;
    v61 = -2147024809;
    v75 = &v61;
    v76 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, a3, a4, 5u, &pData);
  }
  return 2147942487LL;
}
