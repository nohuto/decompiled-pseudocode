/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180196CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180197F50 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
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
  int v11; // edi
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __m128i v25; // xmm0
  int v26; // eax
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  unsigned int v40; // [rsp+20h] [rbp-B9h]
  unsigned int v41; // [rsp+40h] [rbp-99h]
  int v42; // [rsp+40h] [rbp-99h]
  __int128 v44; // [rsp+58h] [rbp-81h] BYREF
  __int64 v45; // [rsp+68h] [rbp-71h]
  unsigned int v46; // [rsp+70h] [rbp-69h]
  __int64 v47; // [rsp+78h] [rbp-61h]
  __int128 v48; // [rsp+80h] [rbp-59h] BYREF
  float v49; // [rsp+90h] [rbp-49h] BYREF
  float v50; // [rsp+94h] [rbp-45h]
  float v51; // [rsp+98h] [rbp-41h]
  float v52; // [rsp+9Ch] [rbp-3Dh]
  __int128 v53; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v54; // [rsp+B0h] [rbp-29h] BYREF
  _BYTE v55[20]; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-1h] BYREF

  v6 = a1[8];
  v8 = 0LL;
  v44 = 0LL;
  v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v12 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6u;
  v45 = 0LL;
  a1[8] = v12;
  v11 = 0;
  LOBYTE(v12) = (v6 ^ (v6 ^ (v6 + 2)) & 6) & 6;
  v46 = 0;
  v54 = v10;
  if ( (_BYTE)v12 == 2 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64, float *, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 224LL))(
      a1,
      a2,
      a3,
      a1 + 40,
      &v53,
      &v56);
    v14 = (int)a1[38];
    if ( (_DWORD)v14 )
    {
      v47 = (int)a1[38];
      if ( v14 > 0 )
      {
        v15 = v41;
        do
        {
          v16 = *((_QWORD *)a1 + 18);
          v48 = v53;
          v17 = *(_QWORD *)(v16 + 8 * v8);
          v18 = *(_QWORD *)(v17 + 24);
          v42 = *(_DWORD *)(*((_QWORD *)a1 + 17) + 4 * v8);
          if ( v18 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, 54LL);
            v20 = *(_QWORD *)(v17 + 24);
            if ( v19 )
            {
              v21 = a2;
              *(_OWORD *)v55 = v48;
              v22 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, float *, __int128 *))(*(_QWORD *)v20 + 208LL))(
                      v20,
                      a2,
                      v55,
                      v20 + 160,
                      a5,
                      &v48);
              v11 = v22;
              if ( v22 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1D5u);
                goto LABEL_53;
              }
            }
            else
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 37LL) )
              {
                v11 = -2147467263;
                v40 = 490;
LABEL_55:
                v13 = v11;
                goto LABEL_4;
              }
              v24 = *(_DWORD *)(v17 + 12) - *(_DWORD *)(v17 + 4);
              v49 = 0.0;
              v50 = 0.0;
              v25 = _mm_cvtsi32_si128(v24);
              v26 = *(_DWORD *)(v17 + 16) - *(_DWORD *)(v17 + 8);
              v21 = a2;
              LODWORD(v51) = _mm_cvtepi32_ps(v25).m128_u32[0];
              v52 = (float)v26;
              CMILMatrix::Transform2DBoundsHelper<1>(a2, &v49, &v49);
              v27 = *(float *)&v48;
              if ( v49 > *(float *)&v48 )
              {
                *(float *)&v48 = v49;
                v27 = v49;
              }
              v28 = *((float *)&v48 + 1);
              if ( v50 > *((float *)&v48 + 1) )
              {
                *((float *)&v48 + 1) = v50;
                v28 = v50;
              }
              v29 = *((float *)&v48 + 2);
              if ( *((float *)&v48 + 2) > v51 )
              {
                *((float *)&v48 + 2) = v51;
                v29 = v51;
              }
              v30 = *((float *)&v48 + 3);
              if ( *((float *)&v48 + 3) > v52 )
              {
                *((float *)&v48 + 3) = v52;
                v30 = v52;
              }
              if ( v29 <= v27 || v30 <= v28 )
                v48 = 0uLL;
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v48);
            }
          }
          else
          {
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v48);
            v21 = a2;
          }
          if ( (float)(*((float *)&v48 + 2) - *(float *)&v48) > 0.0000099999997
            && (float)(*((float *)&v48 + 3) - *((float *)&v48 + 1)) > 0.0000099999997 )
          {
            if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v21, &v48, &v48) )
            {
              v40 = 505;
              goto LABEL_3;
            }
            *(_DWORD *)v55 = v42;
            v31 = v46 + 1;
            *(_OWORD *)&v55[4] = v48;
            if ( v46 + 1 >= v46 )
              v15 = v46 + 1;
            v11 = v31 < v46 ? 0x80070216 : 0;
            if ( v31 < v46 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v11, 0xB5u);
            }
            else if ( v15 > HIDWORD(v45) )
            {
              v33 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v44, 20, 1, v55);
              v11 = v33;
              if ( v33 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v33, 0xC0u);
            }
            else
            {
              v32 = 5LL * v46;
              v12 = v44;
              *(_OWORD *)(v44 + 4 * v32) = *(_OWORD *)v55;
              *(_DWORD *)(v12 + 4 * v32 + 16) = *(_DWORD *)&v55[16];
              v46 = v15;
            }
            if ( v11 < 0 )
            {
              v40 = 508;
              goto LABEL_55;
            }
          }
          ++v8;
        }
        while ( v8 < v47 );
      }
      (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 184LL))(a1, &v44, &v54);
      CMILMatrix::Transform2DBoundsHelper<1>(a2, (float *)&v54, a6);
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
    }
    else
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v53);
      *(_OWORD *)a6 = v56;
    }
  }
  else
  {
    v40 = 427;
LABEL_3:
    v13 = -2147467259;
    v11 = -2147467259;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, v40);
  }
LABEL_53:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v44);
  return (unsigned int)v11;
}
