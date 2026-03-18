/*
 * XREFs of ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800A3110
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800A302C (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180020878 (-EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18004A9A0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A2FEC (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z @ 0x1800A3648 (-SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800A36C8 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceInfo::UpdateRenderingRealization(
        CCompositionSurfaceInfo *this,
        struct CBitmapRealization *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5,
        bool a6)
{
  char v9; // r12
  char v10; // r15
  bool v11; // r14
  char v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rcx
  __m128 v15; // xmm6
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  __int64 v19; // rax
  __m128 v20; // xmm10
  float v21; // xmm11_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  int v24; // r8d
  bool v25; // al
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // si
  const struct ScrollOptimization *v29; // rdx
  int v30; // ebx
  unsigned __int64 v31; // r14
  __int64 v32; // rcx
  const struct ScrollOptimization *v34; // [rsp+30h] [rbp-D8h]
  __int16 v35; // [rsp+48h] [rbp-C0h]
  int v36; // [rsp+58h] [rbp-B0h]
  int v37; // [rsp+5Ch] [rbp-ACh]
  int v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+90h] [rbp-78h]
  _OWORD v42[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v43; // [rsp+E8h] [rbp-20h]
  _OWORD v44[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int16 v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+148h] [rbp+40h] BYREF
  __int64 v47; // [rsp+150h] [rbp+48h]
  __int128 v48; // [rsp+158h] [rbp+50h] BYREF
  __int128 v49; // [rsp+168h] [rbp+60h] BYREF
  int *v50; // [rsp+178h] [rbp+70h] BYREF
  int v51; // [rsp+180h] [rbp+78h] BYREF

  v35 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !a3 || (v12 = 1, (*((_DWORD *)a3 + 29) & 0x400) == 0) )
    v12 = 0;
  v51 = 0;
  v50 = &v51;
  if ( a6 || *((_BYTE *)this + 408) )
  {
    LOBYTE(v35) = 1;
    v9 = 1;
    v10 = 1;
    if ( a2 && a3 )
      (*(void (__fastcall **)(struct CBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 40LL))(
        a2,
        a3);
  }
  else
  {
    v13 = *((_QWORD *)this + 15);
    v44[1] = _xmm;
    v42[0] = _xmm;
    v49 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v48 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v44[0] = _xmm;
    v44[2] = _xmm;
    HIDWORD(v39) = 0;
    HIDWORD(v41) = 0;
    v44[3] = _xmm;
    v45 = 32085;
    v42[1] = _xmm;
    v42[2] = _xmm;
    v42[3] = _xmm;
    v43 = 32085;
    v36 = 0;
    v37 = 0;
    v46 = 0LL;
    v47 = 0LL;
    v38 = 0;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64, _OWORD *, __int128 *))(*(_QWORD *)(v13 + 144) + 40LL))(v13 + 144, v44, &v49);
      v14 = *((_QWORD *)this + 15);
      v15 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + 172));
      v36 = *(_DWORD *)(v14 + 168);
      LODWORD(v16) = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
      LODWORD(v17) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
      LODWORD(v18) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
      v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v14 + 144) + 24LL))(v14 + 144, &v46);
      v39 = *(_QWORD *)v19;
      v38 = *(_DWORD *)(v19 + 8);
    }
    else
    {
      v18 = *((float *)&v47 + 1);
      v17 = *(float *)&v47;
      v16 = *((float *)&v46 + 1);
      v15.m128_i32[0] = v46;
    }
    if ( a2 )
    {
      if ( a3 )
        (*(void (__fastcall **)(struct CBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *, _QWORD))(*(_QWORD *)a2 + 40LL))(
          a2,
          a3,
          0LL);
      (*(void (__fastcall **)(char *, _OWORD *, __int128 *))(*((_QWORD *)a2 + 18) + 40LL))((char *)a2 + 144, v42, &v48);
      v20 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 172));
      v37 = *((_DWORD *)a2 + 42);
      LODWORD(v21) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
      LODWORD(v22) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
      LODWORD(v23) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
      v41 = *(_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)a2 + 18) + 24LL))(
                         (char *)a2 + 144,
                         &v46);
    }
    else
    {
      v23 = 0.0;
      v22 = 0.0;
      v21 = 0.0;
      v20.m128_i32[0] = 0;
    }
    if ( operator!=((float *)&v49, (float *)&v48) || !CMILMatrix::IsEqualTo<0>((float *)v44, (float *)v42) )
      v9 = 1;
    if ( v12
      || HIDWORD(v39) != HIDWORD(v41)
      || v36 != v37
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15.m128_f32[0] - v20.m128_f32[0])) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16 - v21)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - v22)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18 - v23)) & _xmm) > 0.0000011920929
      || v38 != v24 )
    {
      v10 = 1;
    }
  }
  v25 = CCompositionSurfaceInfo::SetRenderingRealization(this, a2);
  v28 = v35;
  if ( v25 )
    v28 = 1;
  if ( v12 )
    CCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CCompositionSurfaceInfo *)((char *)this + 48));
  if ( *((_QWORD *)this + 15) )
    v11 = CCompositionSurfaceInfo::DirtyRenderingRealization(this, v28, a4, (struct CRegion *)&v50);
  if ( !*((_BYTE *)this + 408) )
  {
    v29 = a5;
    *((_BYTE *)this + 408) = 1;
    if ( v28 || v9 || v10 || v11 || a5 && *(_DWORD *)a5 )
    {
      HIBYTE(v35) = 1;
      v30 = *((_DWORD *)this + 98);
      if ( v30 > 0 )
      {
        v31 = (unsigned __int64)&v50 & -(__int64)v11;
        do
        {
          v34 = v29;
          LOBYTE(v27) = v10;
          LOBYTE(v26) = v9;
          LOBYTE(v29) = v28;
          v32 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * (unsigned int)(v30 - 1));
          (*(void (__fastcall **)(__int64, const struct ScrollOptimization *, __int64, __int64, unsigned __int64, const struct ScrollOptimization *))(*(_QWORD *)v32 + 8LL))(
            v32,
            v29,
            v26,
            v27,
            v31,
            v34);
          v29 = a5;
          --v30;
        }
        while ( v30 > 0 );
      }
    }
    *((_BYTE *)this + 408) = 0;
  }
  FastRegion::CRegion::FreeMemory((void **)&v50);
  return HIBYTE(v35);
}
