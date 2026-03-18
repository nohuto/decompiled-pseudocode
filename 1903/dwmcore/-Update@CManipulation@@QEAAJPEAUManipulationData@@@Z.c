/*
 * XREFs of ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x1801E34C4
 * Callers:
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801E2A34 (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?Thunk_UpdateManipulation_118@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18022D460 (-Thunk_UpdateManipulation_118@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulation::Update(CManipulation *this, struct ManipulationData *a2)
{
  __m128 v2; // xmm4
  _OWORD *v3; // r14
  __m128 v4; // xmm2
  float *v5; // r9
  float *v6; // r10
  __m128 v7; // xmm5
  float *v8; // rsi
  __m128 v9; // xmm3
  int v11; // edi
  char *v12; // rcx
  __int128 v13; // xmm0
  char *v14; // rdx
  float v15; // eax
  float v16; // eax
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned int v20; // ecx
  int v21; // eax
  CManipulation *v22; // r8
  __int64 v23; // rdx
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  float v31; // [rsp+50h] [rbp-B0h]
  CManipulation *v32; // [rsp+58h] [rbp-A8h] BYREF
  float v33; // [rsp+60h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  CManipulation **v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  _OWORD *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  char *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  char *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  char *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  char *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  char *v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  float *v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h]
  char *v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]
  char *v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  char *v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  char *v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  char *v69; // [rsp+1A0h] [rbp+A0h]
  __int64 v70; // [rsp+1A8h] [rbp+A8h]
  char *v71; // [rsp+1B0h] [rbp+B0h]
  __int64 v72; // [rsp+1B8h] [rbp+B8h]
  char *v73; // [rsp+1C0h] [rbp+C0h]
  __int64 v74; // [rsp+1C8h] [rbp+C8h]
  char *v75; // [rsp+1D0h] [rbp+D0h]
  __int64 v76; // [rsp+1D8h] [rbp+D8h]
  char *v77; // [rsp+1E0h] [rbp+E0h]
  __int64 v78; // [rsp+1E8h] [rbp+E8h]
  char *v79; // [rsp+1F0h] [rbp+F0h]
  __int64 v80; // [rsp+1F8h] [rbp+F8h]
  char *v81; // [rsp+200h] [rbp+100h]
  __int64 v82; // [rsp+208h] [rbp+108h]
  int *v83; // [rsp+210h] [rbp+110h]
  __int64 v84; // [rsp+218h] [rbp+118h]
  int *v85; // [rsp+220h] [rbp+120h]
  __int64 v86; // [rsp+228h] [rbp+128h]
  int *v87; // [rsp+230h] [rbp+130h]
  __int64 v88; // [rsp+238h] [rbp+138h]
  int *v89; // [rsp+240h] [rbp+140h]
  __int64 v90; // [rsp+248h] [rbp+148h]
  int *v91; // [rsp+250h] [rbp+150h]
  __int64 v92; // [rsp+258h] [rbp+158h]
  int *v93; // [rsp+260h] [rbp+160h]
  __int64 v94; // [rsp+268h] [rbp+168h]

  v2 = (__m128)*((unsigned int *)a2 + 9);
  v3 = (_OWORD *)((char *)this + 256);
  v4 = (__m128)*((unsigned int *)a2 + 10);
  v5 = (float *)((char *)this + 268);
  v6 = (float *)((char *)this + 292);
  v7 = (__m128)*((unsigned int *)this + 67);
  v8 = (float *)((char *)this + 300);
  v7.m128_f32[0] = v7.m128_f32[0] + *((float *)a2 + 3);
  v9 = (__m128)*((unsigned int *)this + 68);
  v9.m128_f32[0] = v9.m128_f32[0] + *((float *)a2 + 4);
  v2.m128_f32[0] = v2.m128_f32[0] * *((float *)this + 73);
  v11 = *((_DWORD *)this + 103);
  v4.m128_f32[0] = v4.m128_f32[0] * *((float *)this + 74);
  v33 = *((float *)this + 69) + *((float *)a2 + 5);
  v12 = (char *)this + 384;
  v31 = *((float *)a2 + 11) * *v8;
  *v3 = *(_OWORD *)a2;
  v3[1] = *((_OWORD *)a2 + 1);
  v3[2] = *((_OWORD *)a2 + 2);
  v3[3] = *((_OWORD *)a2 + 3);
  v3[4] = *((_OWORD *)a2 + 4);
  v3[5] = *((_OWORD *)a2 + 5);
  v3[6] = *((_OWORD *)a2 + 6);
  v13 = *((_OWORD *)a2 + 7);
  v14 = (char *)a2 + 128;
  *((_OWORD *)v12 - 1) = v13;
  *(_OWORD *)v12 = *(_OWORD *)v14;
  *((_OWORD *)v12 + 1) = *((_OWORD *)v14 + 1);
  *((_OWORD *)v12 + 2) = *((_OWORD *)v14 + 2);
  *((_QWORD *)v12 + 6) = *((_QWORD *)v14 + 6);
  v15 = v33;
  *(_QWORD *)v5 = _mm_unpacklo_ps(v7, v9).m128_u64[0];
  v5[2] = v15;
  v16 = v31;
  *(_QWORD *)v6 = _mm_unpacklo_ps(v2, v4).m128_u64[0];
  v6[2] = v16;
  if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
  {
    v32 = this;
    v35 = &v32;
    v39 = (char *)this + 260;
    v41 = (char *)this + 264;
    v45 = (char *)this + 272;
    v47 = (char *)this + 276;
    v49 = (char *)this + 280;
    v51 = (char *)this + 284;
    v53 = (char *)this + 288;
    v61 = (char *)this + 308;
    v63 = (char *)this + 312;
    v65 = (char *)this + 316;
    v67 = (char *)this + 304;
    v69 = (char *)this + 408;
    v71 = (char *)this + 384;
    v73 = (char *)this + 388;
    v75 = (char *)this + 392;
    v77 = (char *)this + 396;
    v79 = (char *)this + 400;
    v81 = (char *)this + 404;
    v25 = *((_DWORD *)this + 103);
    v83 = &v25;
    v26 = *((_DWORD *)this + 106);
    v85 = &v26;
    v27 = *((_DWORD *)this + 107);
    v36 = 8LL;
    v37 = v3;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v43 = v17;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v55 = v18;
    v56 = 4LL;
    v57 = v19;
    v58 = 4LL;
    v59 = v8;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 4LL;
    v84 = 4LL;
    v86 = 4LL;
    v20 = *((unsigned __int8 *)this + 436);
    v87 = &v27;
    v28 = *((_DWORD *)this + 108);
    v89 = &v28;
    v29 = v20 & 1;
    v88 = 4LL;
    v91 = &v29;
    v93 = &v30;
    v90 = 4LL;
    v92 = 4LL;
    v30 = (v20 >> 1) & 1;
    v94 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC65F, 0LL, 0LL, 0x20u, &pData);
  }
  v21 = *((_DWORD *)this + 103);
  if ( v21 == v11 )
  {
    if ( v21 || v11 )
    {
      v22 = 0LL;
      v23 = 0LL;
    }
    else
    {
      v22 = this;
      v23 = 10LL;
    }
  }
  else
  {
    v22 = this;
    v23 = 7LL;
  }
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 64LL))(this, v23, v22);
  CResource::InvalidateAnimationSources(this, 0);
  CResource::InvalidateAnimationSources(this, 1);
  CResource::InvalidateAnimationSources(this, 2);
  CResource::InvalidateAnimationSources(this, 3);
  CResource::InvalidateAnimationSources(this, 4);
  CResource::InvalidateAnimationSources(this, 5);
  CResource::InvalidateAnimationSources(this, 6);
  CResource::InvalidateAnimationSources(this, 7);
  return 0LL;
}
