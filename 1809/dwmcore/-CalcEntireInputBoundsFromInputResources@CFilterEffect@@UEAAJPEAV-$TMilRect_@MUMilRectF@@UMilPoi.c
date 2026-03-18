/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801966E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  int v5; // xmm6_4
  unsigned int v6; // esi
  int v7; // xmm7_4
  int v8; // xmm8_4
  int v9; // xmm9_4
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  __int128 v13; // xmm0
  int v14; // eax
  __int64 v15; // rcx
  float *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v20; // r13
  unsigned int v21; // r12d
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rcx
  char v25; // al
  _OWORD *v26; // r14
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __m128i v34; // xmm0
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  _QWORD v41[3]; // [rsp+38h] [rbp-D0h] BYREF
  int v42; // [rsp+50h] [rbp-B8h]
  unsigned int v43; // [rsp+54h] [rbp-B4h]
  __int64 v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  __m256i v46; // [rsp+68h] [rbp-A0h] BYREF
  int v47; // [rsp+88h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-78h] BYREF
  int v49; // [rsp+94h] [rbp-74h]
  int v50; // [rsp+98h] [rbp-70h]
  int v51; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v52[20]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-50h] BYREF
  float v54[4]; // [rsp+C8h] [rbp-40h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = 0;
  v7 = DWORD1(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v8 = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v9 = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v42 = 0;
  v43 = 0;
  v10 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6u;
  v48 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_DWORD *)(a1 + 32) = v10;
  LOBYTE(v10) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v49 = v7;
  v50 = v8;
  v51 = v9;
  v45 = a3;
  v46.m256i_i64[0] = (__int64)a2;
  LODWORD(v44) = 0;
  *(_OWORD *)&v41[1] = 0LL;
  if ( (_BYTE)v10 != 2 )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467259, 0x21Eu);
    goto LABEL_15;
  }
  v12 = *(_DWORD *)(a1 + 152);
  if ( !v12 )
  {
    v13 = *a2;
    *(_DWORD *)v52 = 0;
    *(_OWORD *)&v52[4] = v13;
    v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v41[1], 20, 1, v52);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u);
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v11, 0x225u);
      goto LABEL_15;
    }
    v6 = v44;
LABEL_10:
    if ( v6 )
    {
      v16 = (float *)(v41[1] + 4LL);
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v48, v16);
        v16 = (float *)(v17 + 20);
      }
      while ( v18 != 1 );
      v9 = v51;
      v8 = v50;
      v7 = v49;
      v5 = v48;
    }
LABEL_14:
    *(_DWORD *)(a1 + 160) = v5;
    *(_DWORD *)(a1 + 164) = v7;
    *(_DWORD *)(a1 + 168) = v8;
    *(_DWORD *)(a1 + 172) = v9;
    goto LABEL_15;
  }
  v11 = 0;
  v20 = *(int *)(a1 + 152);
  if ( v12 <= 0 )
    goto LABEL_14;
  v21 = v41[0];
  v22 = 0LL;
  while ( 1 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v22);
    LODWORD(v41[0]) = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v22);
    v53 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v24 = *(_QWORD *)(v23 + 24);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, 54LL);
      v26 = *(_OWORD **)(v23 + 24);
      v27 = v25 == 0;
      v28 = *(_QWORD *)v26;
      if ( v27 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_OWORD *, __int64))(v28 + 48))(v26, 37LL) )
        {
          v11 = -2147467263;
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147467263, 0x252u);
          goto LABEL_15;
        }
        v33 = *(_DWORD *)(v23 + 12) - *(_DWORD *)(v23 + 4);
        v54[0] = 0.0;
        v54[1] = 0.0;
        v34 = _mm_cvtsi32_si128(v33);
        v35 = *(_DWORD *)(v23 + 16) - *(_DWORD *)(v23 + 8);
        LODWORD(v54[2]) = _mm_cvtepi32_ps(v34).m128_u32[0];
        v54[3] = (float)v35;
        CMILMatrix::Transform2DBoundsHelper<1>(v45, v54, (float *)&v53);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(_OWORD *, __int64, __int64))(v28 + 216))(v26, v46.m256i_i64[0], v45);
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v11, 0x237u);
          goto LABEL_15;
        }
        v47 = 0;
        *(_DWORD *)v52 = v41[0];
        memset(&v46.m256i_u64[1], 0, 24);
        *(_OWORD *)&v52[4] = v26[10];
        v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v46.m256i_i64[1], 20, 1, v52);
        v11 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xC0u);
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v11, 0x23Bu);
          DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v46.m256i_i64[1]);
          goto LABEL_15;
        }
        (*(void (__fastcall **)(_OWORD *, unsigned __int64 *, __int128 *))(*(_QWORD *)v26 + 184LL))(
          v26,
          &v46.m256i_u64[1],
          &v53);
        DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v46.m256i_i64[1]);
      }
    }
    else
    {
      v53 = *a2;
    }
    *(_DWORD *)v52 = v41[0];
    v36 = v6 + 1;
    *(_OWORD *)&v52[4] = v53;
    if ( v6 + 1 >= v6 )
      v21 = v6 + 1;
    v11 = v36 < v6 ? 0x80070216 : 0;
    if ( v36 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v11, 0xB5u);
    }
    else if ( v21 > v43 )
    {
      v40 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v41[1], 20, 1, v52);
      v11 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v40, 0xC0u);
      v6 = v44;
    }
    else
    {
      v37 = v41[1];
      v38 = v6;
      v6 = v21;
      LODWORD(v44) = v21;
      v39 = 5 * v38;
      *(_OWORD *)(v41[1] + 4 * v39) = *(_OWORD *)v52;
      *(_DWORD *)(v37 + 4 * v39 + 16) = *(_DWORD *)&v52[16];
    }
    if ( v11 < 0 )
      break;
    if ( ++v22 >= v20 )
      goto LABEL_10;
    a2 = (__int128 *)v46.m256i_i64[0];
  }
  MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v11, 0x25Au);
LABEL_15:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v41[1]);
  return (unsigned int)v11;
}
