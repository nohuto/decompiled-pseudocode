/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801CBF60
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180070580 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x1801CD2A4 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        float *a5,
        float *a6)
{
  int v6; // eax
  __int64 v8; // r12
  __int128 v10; // xmm0
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned int v13; // r9d
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __m128i v24; // xmm0
  int v25; // eax
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdx
  signed int v33; // eax
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  unsigned int v40; // [rsp+20h] [rbp-B9h]
  int v41; // [rsp+40h] [rbp-99h]
  __int128 v43; // [rsp+50h] [rbp-89h] BYREF
  __int64 v44; // [rsp+60h] [rbp-79h]
  unsigned int v45; // [rsp+68h] [rbp-71h]
  __int64 v46; // [rsp+70h] [rbp-69h]
  __int128 v47; // [rsp+78h] [rbp-61h] BYREF
  float v48; // [rsp+88h] [rbp-51h] BYREF
  float v49; // [rsp+8Ch] [rbp-4Dh]
  float v50; // [rsp+90h] [rbp-49h]
  float v51; // [rsp+94h] [rbp-45h]
  __int128 v52; // [rsp+98h] [rbp-41h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v54[20]; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v55; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a1[8];
  v8 = 0LL;
  v43 = 0LL;
  v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v44 = 0LL;
  v12 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6u;
  v45 = 0;
  a1[8] = v12;
  v11 = a2;
  LOBYTE(v12) = (v6 ^ (v6 ^ (v6 + 2)) & 6) & 6;
  v53 = v10;
  if ( (_BYTE)v12 == 2 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64, float *, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 264LL))(
      a1,
      a2,
      a3,
      a1 + 40,
      &v52,
      &v55);
    v15 = (int)a1[38];
    if ( !(_DWORD)v15 )
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v52);
      v14 = 0;
      *(_OWORD *)a6 = v55;
      goto LABEL_50;
    }
    v46 = (int)a1[38];
    v14 = 0;
    if ( v15 <= 0 )
    {
LABEL_38:
      (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 224LL))(a1, &v43, &v53);
      CMILMatrix::Transform2DBoundsHelper<1>(v11, (float *)&v53, a6);
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
      {
        if ( *a3 > *a6 )
          *a6 = *a3;
        v34 = a3[1];
        if ( v34 > a6[1] )
          a6[1] = v34;
        v35 = a3[2];
        v36 = a6[2];
        if ( v36 > v35 )
        {
          a6[2] = v35;
          v36 = v35;
        }
        v37 = a3[3];
        v38 = a6[3];
        if ( v38 > v37 )
        {
          a6[3] = v37;
          v38 = v37;
          v36 = a6[2];
        }
        if ( v36 <= *a6 || v38 <= a6[1] )
        {
          *((_QWORD *)a6 + 1) = 0LL;
          *(_QWORD *)a6 = 0LL;
        }
      }
      goto LABEL_50;
    }
    while ( 1 )
    {
      v16 = *((_QWORD *)a1 + 18);
      v47 = v52;
      v17 = *(_QWORD *)(v16 + 8 * v8);
      v18 = *(_QWORD *)(v17 + 24);
      v41 = *(_DWORD *)(*((_QWORD *)a1 + 17) + 4 * v8);
      if ( v18 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, 56LL);
        v20 = *(_QWORD *)(v17 + 24);
        if ( v19 )
        {
          v11 = a2;
          *(_OWORD *)v54 = v47;
          v21 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, float *, __int128 *))(*(_QWORD *)v20 + 248LL))(
                  v20,
                  a2,
                  v54,
                  v20 + 160,
                  a5,
                  &v47);
          v14 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1D3u, 0LL);
            goto LABEL_50;
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 39LL) )
          {
            v14 = -2147467263;
            v40 = 488;
LABEL_52:
            v13 = v14;
            goto LABEL_4;
          }
          v23 = *(_DWORD *)(v17 + 12) - *(_DWORD *)(v17 + 4);
          v48 = 0.0;
          v49 = 0.0;
          v24 = _mm_cvtsi32_si128(v23);
          v25 = *(_DWORD *)(v17 + 16) - *(_DWORD *)(v17 + 8);
          v11 = a2;
          LODWORD(v50) = _mm_cvtepi32_ps(v24).m128_u32[0];
          v51 = (float)v25;
          CMILMatrix::Transform2DBoundsHelper<1>(a2, &v48, &v48);
          v26 = *(float *)&v47;
          if ( v48 > *(float *)&v47 )
          {
            *(float *)&v47 = v48;
            v26 = v48;
          }
          v27 = *((float *)&v47 + 1);
          if ( v49 > *((float *)&v47 + 1) )
          {
            *((float *)&v47 + 1) = v49;
            v27 = v49;
          }
          v28 = *((float *)&v47 + 2);
          if ( *((float *)&v47 + 2) > v50 )
          {
            *((float *)&v47 + 2) = v50;
            v28 = v50;
          }
          v29 = *((float *)&v47 + 3);
          if ( *((float *)&v47 + 3) > v51 )
          {
            *((float *)&v47 + 3) = v51;
            v29 = v51;
          }
          if ( v28 <= v26 || v29 <= v27 )
            v47 = 0uLL;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v47);
        }
      }
      else
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v47);
        v11 = a2;
      }
      if ( (float)(*((float *)&v47 + 2) - *(float *)&v47) > 0.0000099999997
        && (float)(*((float *)&v47 + 3) - *((float *)&v47 + 1)) > 0.0000099999997 )
      {
        if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v11, &v47, &v47) )
        {
          v40 = 503;
          goto LABEL_3;
        }
        *(_DWORD *)v54 = v41;
        *(_OWORD *)&v54[4] = v47;
        v30 = v45 + 1;
        if ( v45 + 1 >= v45 )
        {
          if ( v30 <= HIDWORD(v44) )
          {
            v31 = v43;
            v32 = 5LL * v45;
            v14 = 0;
            *(_OWORD *)(v43 + 4 * v32) = *(_OWORD *)v54;
            *(_DWORD *)(v31 + 4 * v32 + 16) = *(_DWORD *)&v54[16];
            v45 = v30;
            goto LABEL_37;
          }
          v33 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v43, 20, 1, v54);
          v14 = v33;
          if ( v33 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v33, 0xC3u, 0LL);
        }
        else
        {
          v14 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x80070216, 0xB8u, 0LL);
        }
        if ( v14 < 0 )
        {
          v40 = 506;
          goto LABEL_52;
        }
      }
LABEL_37:
      if ( ++v8 >= v46 )
        goto LABEL_38;
    }
  }
  v40 = 425;
LABEL_3:
  v13 = -2147467259;
  v14 = -2147467259;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, v40, 0LL);
LABEL_50:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v43);
  return (unsigned int)v14;
}
