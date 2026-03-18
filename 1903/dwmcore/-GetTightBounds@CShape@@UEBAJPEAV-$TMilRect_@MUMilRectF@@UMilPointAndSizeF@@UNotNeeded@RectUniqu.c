/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180017770
 * Callers:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AF090 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800178B0 (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180064380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180083B38 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rsi
  __int64 v5; // r10
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  int *v12; // r8
  int v13; // xmm0_4
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h]
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-10h]

  v16 = 0LL;
  v3 = 0LL;
  v5 = a1;
  if ( !a3 )
    goto LABEL_2;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a3, a2, a3, a3) )
  {
    v13 = *v12;
    v3 = &v19;
    v14 = (__m128)(unsigned int)v12[13];
    DWORD1(v17) = v12[1];
    HIDWORD(v17) = v12[5];
    v15 = (__m128)(unsigned int)v12[12];
    LODWORD(v17) = v13;
    DWORD2(v17) = v12[4];
    v19 = v17;
    v20 = _mm_unpacklo_ps(v15, v14).m128_u64[0];
LABEL_2:
    v6 = 0LL;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, v6, &v16);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x373u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v16 + 32LL))(v16, v3, &v18);
    v17 = v18;
    *(_OWORD *)a2 = v18;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues(a2) )
    {
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered() )
      {
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)a2 = 0;
      }
    }
    else
    {
      v9 = -2003304438;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003304438, 0x37Fu, 0LL);
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v9;
}
