/*
 * XREFs of ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180062BD4
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800623B4 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1800206B8 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180062374 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x180064F70 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18006FF40 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??9?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@QEBA_NAEBV01@@Z @ 0x1800ABC70 (--9-$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@QEBA_NAEBV01@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterfaceNoNULL@VIAdvancedDirectFlipBitmapRealization@@@@YAXPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x18015E124 (--$ReleaseInterfaceNoNULL@VIAdvancedDirectFlipBitmapRealization@@@@YAXPEAVIAdvancedDirectFlipBit.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        struct CBitmapRealization *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5,
        bool a6)
{
  bool v6; // r14
  char v7; // r13
  char v8; // r12
  char v9; // r15
  const struct CSM_BUFFER_ATTRIBUTES *v10; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __m128 v16; // xmm6
  float v17; // xmm9_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  __int64 v20; // rax
  __int64 v21; // xmm0_8
  __m128 v22; // xmm10
  float v23; // xmm11_4
  float v24; // xmm12_4
  float v25; // xmm13_4
  char v26; // bl
  struct CBitmapRealization *v27; // rcx
  int (__fastcall **v28)(struct CBitmapRealization *, GUID *, __int64 *); // rax
  __int64 v29; // rax
  const struct ScrollOptimization *v30; // rdx
  __int64 v31; // rbx
  char v32; // r15
  __int64 v33; // rcx
  const struct ScrollOptimization *v34; // rbx
  const struct ScrollOptimization *v36; // [rsp+30h] [rbp-D8h]
  char v37; // [rsp+48h] [rbp-C0h]
  char v38; // [rsp+49h] [rbp-BFh]
  const struct ScrollOptimization *v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  int v41; // [rsp+60h] [rbp-A8h]
  int v42; // [rsp+64h] [rbp-A4h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  __int64 v45; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-80h]
  HRGN v47; // [rsp+90h] [rbp-78h]
  __int64 v48; // [rsp+98h] [rbp-70h]
  _OWORD v49[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v50; // [rsp+E8h] [rbp-20h]
  _OWORD v51[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int16 v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+148h] [rbp+40h] BYREF
  __int64 v54; // [rsp+150h] [rbp+48h]
  __int128 v55; // [rsp+158h] [rbp+50h] BYREF
  __int128 v56; // [rsp+168h] [rbp+60h] BYREF
  int *v57; // [rsp+178h] [rbp+70h] BYREF
  int v58; // [rsp+180h] [rbp+78h] BYREF

  v6 = 0;
  v7 = 0;
  v47 = a4;
  v8 = 0;
  v39 = a5;
  v9 = 0;
  v38 = 0;
  v10 = a3;
  if ( !a3 || (v37 = 1, (*((_DWORD *)a3 + 29) & 0x400) == 0) )
    v37 = 0;
  v58 = 0;
  v57 = &v58;
  if ( a6 || *((_BYTE *)this + 80) )
  {
    v6 = 1;
    v7 = 1;
    v8 = 1;
    if ( a2 && a3 )
      (*(void (__fastcall **)(struct CBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 40LL))(
        a2,
        a3);
    v26 = v37;
  }
  else
  {
    v13 = 0LL;
    v44 = 0LL;
    v41 = 0;
    v42 = 0;
    v14 = *((_QWORD *)this + 20);
    v51[1] = _xmm;
    v49[0] = _xmm;
    v56 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v55 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v51[0] = _xmm;
    v51[2] = _xmm;
    v48 = 0LL;
    v51[3] = _xmm;
    v52 = 32085;
    v49[1] = _xmm;
    v49[2] = _xmm;
    v49[3] = _xmm;
    v50 = 32085;
    v53 = 0LL;
    v54 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    LODWORD(v43) = 0;
    LODWORD(v40) = 0;
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64, _OWORD *, __int128 *))(*(_QWORD *)(v14 + 144) + 40LL))(v14 + 144, v51, &v56);
      v15 = *((_QWORD *)this + 20);
      v16 = (__m128)_mm_loadu_si128((const __m128i *)(v15 + 172));
      v41 = *(_DWORD *)(v15 + 168);
      LODWORD(v17) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
      LODWORD(v18) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
      LODWORD(v19) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
      v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v15 + 144) + 24LL))(v15 + 144, &v53);
      v13 = (unsigned int)v40;
      v21 = *(_QWORD *)v20;
      LODWORD(v20) = *(_DWORD *)(v20 + 8);
      v44 = v21;
      LODWORD(v43) = v20;
    }
    else
    {
      v19 = *((float *)&v54 + 1);
      v18 = *(float *)&v54;
      v17 = *((float *)&v53 + 1);
      v16.m128_i32[0] = v53;
    }
    if ( a2 )
    {
      if ( v10 )
        (*(void (__fastcall **)(struct CBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *, __int64))(*(_QWORD *)a2 + 40LL))(
          a2,
          v10,
          v13);
      (*(void (__fastcall **)(char *, _OWORD *, __int128 *))(*((_QWORD *)a2 + 18) + 40LL))((char *)a2 + 144, v49, &v55);
      v22 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 172));
      v42 = *((_DWORD *)a2 + 42);
      LODWORD(v23) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
      LODWORD(v24) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
      LODWORD(v25) = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
      v48 = *(_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)a2 + 18) + 24LL))(
                         (char *)a2 + 144,
                         &v53);
    }
    else
    {
      v25 = *((float *)&v46 + 1);
      v24 = *(float *)&v46;
      v23 = *((float *)&v45 + 1);
      v22.m128_i32[0] = v45;
    }
    if ( operator!=((float *)&v56, (float *)&v55) || !(unsigned __int8)CMILMatrix::IsEqualTo<0>(v51, v49) )
      v7 = 1;
    v26 = v37;
    if ( v37
      || HIDWORD(v44) != HIDWORD(v48)
      || v41 != v42
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16.m128_f32[0] - v22.m128_f32[0])) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - v23)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18 - v24)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - v25)) & _xmm) > 0.0000011920929
      || (_DWORD)v43 != (_DWORD)a3 )
    {
      v8 = 1;
    }
  }
  v27 = (struct CBitmapRealization *)*((_QWORD *)this + 20);
  if ( v27 != a2 )
  {
    if ( v27 )
    {
      v28 = *(int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v27;
      v40 = 0LL;
      if ( (*v28)(v27, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v40) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
        ReleaseInterfaceNoNULL<IAdvancedDirectFlipBitmapRealization>(v40);
      }
    }
    v29 = *((_QWORD *)this + 31);
    if ( v29 )
      *(_BYTE *)(v29 + 205) = 0;
    *((_QWORD *)this + 20) = a2;
    v27 = a2;
    v6 = 1;
  }
  if ( v26 )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
    v27 = (struct CBitmapRealization *)*((_QWORD *)this + 20);
  }
  if ( v27 )
    v9 = CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(this, v6, v47, (struct CRegion *)&v57);
  if ( *((_BYTE *)this + 80) )
  {
    if ( v6 )
    {
      v34 = (const struct ScrollOptimization *)*((_QWORD *)this + 6);
      v40 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v39 = v34;
        if ( !(unsigned __int8)detail::basic_iterator<CD3DDeviceLevel1::CUnpinResource>::operator!=(&v39, &v40) )
          break;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 16LL))(*(_QWORD *)v34);
        v34 = (const struct ScrollOptimization *)((char *)v34 + 8);
      }
    }
  }
  else
  {
    v30 = v39;
    *((_BYTE *)this + 80) = 1;
    if ( v6 || v7 || v8 || v9 || v30 && *(_DWORD *)v30 )
    {
      v31 = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3;
      v38 = 1;
      if ( v31 )
      {
        v32 = -v9;
        do
        {
          LOBYTE(a4) = v8;
          v36 = v30;
          LOBYTE(a3) = v7;
          LOBYTE(v30) = v6;
          v33 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v31 - 8);
          (*(void (__fastcall **)(__int64, const struct ScrollOptimization *, const struct CSM_BUFFER_ATTRIBUTES *, HRGN, unsigned __int64, const struct ScrollOptimization *))(*(_QWORD *)v33 + 8LL))(
            v33,
            v30,
            a3,
            a4,
            (unsigned __int64)&v57 & -(__int64)(v32 != 0),
            v36);
          v30 = v39;
          --v31;
        }
        while ( v31 );
      }
    }
    *((_BYTE *)this + 80) = 0;
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v57);
  return v38;
}
