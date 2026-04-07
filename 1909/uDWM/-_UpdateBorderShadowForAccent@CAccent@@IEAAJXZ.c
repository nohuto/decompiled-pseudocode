/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800017C4
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B9E0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002D0B0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180002030 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z @ 0x1800020F8 (-GetShadowMargins@CAccent@@KA-AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18001309C (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800379E4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CAccent *this)
{
  int v2; // r15d
  int v3; // r12d
  struct CTopLevelWindow::WindowFrame *v4; // rdx
  double v5; // xmm2_8
  int v6; // eax
  int v7; // edi
  int v8; // r14d
  int v9; // ebx
  int v10; // esi
  struct _MARGINS *ShadowMargins; // rax
  __m128i v12; // xmm0
  int v13; // r11d
  int v14; // r9d
  int v15; // r8d
  int v16; // r10d
  __int32 v17; // esi
  __int32 v18; // edi
  int v19; // r8d
  LONG *v20; // rdi
  __int64 v21; // r14
  CAtlasedImage **v22; // rbx
  struct _MARGINS *v23; // rsi
  CAtlasedImage *v25; // rcx
  CAtlasedImage *v26; // rcx
  struct _MARGINS v27; // [rsp+28h] [rbp-E0h] BYREF
  struct tagSIZE v28; // [rsp+38h] [rbp-D0h] BYREF
  struct _MARGINS v29; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v30[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+9Ch] [rbp-6Ch]
  int v33; // [rsp+A0h] [rbp-68h]
  int v34; // [rsp+A4h] [rbp-64h]
  int v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+ACh] [rbp-5Ch]
  int v37; // [rsp+B0h] [rbp-58h]
  int v38; // [rsp+B4h] [rbp-54h]
  int v39; // [rsp+B8h] [rbp-50h]
  int v40; // [rsp+BCh] [rbp-4Ch]
  int v41; // [rsp+C0h] [rbp-48h]
  int v42; // [rsp+C4h] [rbp-44h]
  int v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+CCh] [rbp-3Ch]
  int v45; // [rsp+D0h] [rbp-38h]
  int v46; // [rsp+D4h] [rbp-34h]
  int v47; // [rsp+D8h] [rbp-30h]
  int v48; // [rsp+DCh] [rbp-2Ch]
  int v49; // [rsp+E0h] [rbp-28h]
  int v50; // [rsp+E4h] [rbp-24h]
  int v51; // [rsp+E8h] [rbp-20h]
  int v52; // [rsp+ECh] [rbp-1Ch]
  int v53; // [rsp+F0h] [rbp-18h]
  int v54; // [rsp+F4h] [rbp-14h]
  int v55; // [rsp+F8h] [rbp-10h]
  int v56; // [rsp+FCh] [rbp-Ch]
  int v57; // [rsp+100h] [rbp-8h]
  int v58; // [rsp+104h] [rbp-4h]
  int v59; // [rsp+108h] [rbp+0h]
  int v60; // [rsp+10Ch] [rbp+4h]
  int v61; // [rsp+110h] [rbp+8h]
  int v62; // [rsp+114h] [rbp+Ch]
  int v63; // [rsp+118h] [rbp+10h]
  int v64; // [rsp+11Ch] [rbp+14h]
  int v65; // [rsp+120h] [rbp+18h]
  int v66; // [rsp+124h] [rbp+1Ch]
  int v67; // [rsp+128h] [rbp+20h]
  int v68; // [rsp+12Ch] [rbp+24h]
  int v69; // [rsp+130h] [rbp+28h]
  int v70; // [rsp+134h] [rbp+2Ch]
  int v71; // [rsp+138h] [rbp+30h]
  int v72; // [rsp+13Ch] [rbp+34h]
  int v73; // [rsp+140h] [rbp+38h]
  int v74; // [rsp+144h] [rbp+3Ch]
  int v75; // [rsp+148h] [rbp+40h]
  int v76; // [rsp+14Ch] [rbp+44h]
  int v77; // [rsp+150h] [rbp+48h]
  int v78; // [rsp+154h] [rbp+4Ch]
  int v79; // [rsp+158h] [rbp+50h]
  int v80; // [rsp+15Ch] [rbp+54h]
  int v81; // [rsp+160h] [rbp+58h]
  int v82; // [rsp+164h] [rbp+5Ch]
  int v83; // [rsp+168h] [rbp+60h]
  int v84; // [rsp+16Ch] [rbp+64h]
  int v85; // [rsp+170h] [rbp+68h]
  int v86; // [rsp+174h] [rbp+6Ch]
  int v87; // [rsp+178h] [rbp+70h]
  int v88; // [rsp+17Ch] [rbp+74h]
  int v89; // [rsp+180h] [rbp+78h]
  int v90; // [rsp+184h] [rbp+7Ch]
  int v91; // [rsp+188h] [rbp+80h]
  int v92; // [rsp+18Ch] [rbp+84h]
  int v93; // [rsp+190h] [rbp+88h]
  int v94; // [rsp+194h] [rbp+8Ch]
  int v95; // [rsp+198h] [rbp+90h]
  int v96; // [rsp+19Ch] [rbp+94h]
  int v97; // [rsp+1A0h] [rbp+98h]
  int v98; // [rsp+1A4h] [rbp+9Ch]
  int v99; // [rsp+1A8h] [rbp+A0h]
  int v100; // [rsp+1ACh] [rbp+A4h]
  int v101; // [rsp+1B0h] [rbp+A8h]
  int v102; // [rsp+1B4h] [rbp+ACh]
  int v103; // [rsp+1B8h] [rbp+B0h]
  int v104; // [rsp+1BCh] [rbp+B4h]
  int v105; // [rsp+1C0h] [rbp+B8h]
  int v106; // [rsp+1C4h] [rbp+BCh]
  int v107; // [rsp+1C8h] [rbp+C0h]
  int v108; // [rsp+1CCh] [rbp+C4h]
  int v109; // [rsp+1D0h] [rbp+C8h]
  int v110; // [rsp+1D4h] [rbp+CCh]
  int v111; // [rsp+1D8h] [rbp+D0h]
  int v112; // [rsp+1DCh] [rbp+D4h]
  int v113; // [rsp+1E0h] [rbp+D8h]
  int v114; // [rsp+1E4h] [rbp+DCh]
  int v115; // [rsp+1E8h] [rbp+E0h]
  int v116; // [rsp+1ECh] [rbp+E4h]
  int v117; // [rsp+1F0h] [rbp+E8h]
  int v118; // [rsp+1F4h] [rbp+ECh]
  __int32 v119; // [rsp+1F8h] [rbp+F0h]
  int v120; // [rsp+1FCh] [rbp+F4h]
  int v121; // [rsp+200h] [rbp+F8h]
  int v122; // [rsp+204h] [rbp+FCh]
  __int32 v123; // [rsp+208h] [rbp+100h]
  int v124; // [rsp+20Ch] [rbp+104h]
  int v125; // [rsp+210h] [rbp+108h]
  int v126; // [rsp+214h] [rbp+10Ch]
  int v127; // [rsp+218h] [rbp+110h]
  int v128; // [rsp+21Ch] [rbp+114h]
  __int32 v129; // [rsp+220h] [rbp+118h]
  int v130; // [rsp+224h] [rbp+11Ch]
  __int32 v131; // [rsp+228h] [rbp+120h]
  int v132; // [rsp+22Ch] [rbp+124h]
  __int32 v133; // [rsp+230h] [rbp+128h]
  int v134; // [rsp+234h] [rbp+12Ch]
  int v135; // [rsp+238h] [rbp+130h]
  __int32 v136; // [rsp+23Ch] [rbp+134h]
  __int32 v137; // [rsp+240h] [rbp+138h]
  int v138; // [rsp+244h] [rbp+13Ch]
  int v139; // [rsp+248h] [rbp+140h]
  __int32 v140; // [rsp+24Ch] [rbp+144h]
  int v141; // [rsp+250h] [rbp+148h]
  __int32 v142; // [rsp+254h] [rbp+14Ch]

  v2 = 0;
  v3 = 0;
  v4 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  *(_QWORD *)&v27.cxLeftWidth = 0LL;
  *(_QWORD *)&v27.cyTopHeight = 0LL;
  if ( v4 )
  {
    v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
    v3 = (int)((double)*(int *)(*((_QWORD *)v4 + 187) + 28LL) * v5);
    v2 = (int)((double)(*(_DWORD *)(*((_QWORD *)v4 + 187) + 24LL) - 1) * v5);
  }
  v6 = 0;
  if ( v2 >= 0 )
    v6 = v2;
  v7 = v27.cxRightWidth - v6;
  v8 = v27.cyBottomHeight - v6;
  v9 = v27.cyTopHeight - v6;
  v10 = -v6;
  ShadowMargins = CAccent::GetShadowMargins(&v27, v4);
  v29.cxLeftWidth = v10;
  v29.cxRightWidth = 0x7FFFFFFF;
  v29.cyTopHeight = v9;
  v12 = *(__m128i *)ShadowMargins;
  v29.cyBottomHeight = 0x7FFFFFFF;
  v30[0] = v2;
  v30[1] = v3;
  v30[2] = v13;
  v30[3] = v14;
  v30[4] = v9;
  v30[5] = 0x7FFFFFFF;
  v30[6] = 0x7FFFFFFF;
  v30[7] = v3;
  v30[8] = 0x7FFFFFFF;
  v30[9] = v7;
  v30[10] = v9;
  v30[11] = 0x7FFFFFFF;
  v30[12] = v2;
  v30[13] = v3;
  v30[14] = v10;
  v30[15] = 0x7FFFFFFF;
  v31 = v15;
  v32 = v16;
  v33 = v2;
  v34 = 0x7FFFFFFF;
  v35 = 0x7FFFFFFF;
  v36 = v7;
  v37 = v15;
  v38 = v16;
  v39 = v2;
  v40 = 0x7FFFFFFF;
  v41 = v10;
  v42 = 0x7FFFFFFF;
  v43 = 0x7FFFFFFF;
  v44 = v8;
  v45 = v2;
  v46 = v2;
  v47 = v13;
  v48 = v14;
  v49 = 0x7FFFFFFF;
  v50 = v8;
  v51 = 0x7FFFFFFF;
  v52 = v2;
  v53 = 0x7FFFFFFF;
  v54 = v7;
  v55 = 0x7FFFFFFF;
  v56 = v8;
  v57 = v2;
  v58 = v2;
  v59 = v13;
  v60 = v14;
  v61 = v9;
  v62 = 0x7FFFFFFF;
  v63 = 0x7FFFFFFF;
  v64 = v3;
  v65 = v10;
  v66 = 0x7FFFFFFF;
  v67 = v9;
  v68 = 0x7FFFFFFF;
  v69 = v2;
  v70 = v3;
  v71 = v10;
  v123 = v12.m128i_i32[0];
  v83 = v10;
  v95 = v10;
  v17 = v10 - v12.m128i_i32[0];
  v129 = v12.m128i_i32[1];
  v72 = v7;
  v78 = v7;
  v90 = v7;
  v108 = v7;
  v18 = v7 - v12.m128i_i32[1];
  v12.m128i_i64[0] = _mm_srli_si128(v12, 8).m128i_u64[0];
  v73 = v9;
  v79 = v9;
  v121 = v9;
  v127 = v9;
  v136 = v12.m128i_i32[0];
  v98 = v8;
  v104 = v8;
  v110 = v8;
  v122 = v8;
  v128 = v8;
  v140 = v8 - v12.m128i_i32[1];
  v74 = 0x7FFFFFFF;
  v75 = 0x7FFFFFFF;
  v76 = v3;
  v77 = 0x7FFFFFFF;
  v80 = 0x7FFFFFFF;
  v81 = v2;
  v82 = v3;
  v84 = 0x7FFFFFFF;
  v85 = v15;
  v86 = v16;
  v87 = v2;
  v88 = 0x7FFFFFFF;
  v89 = 0x7FFFFFFF;
  v91 = v15;
  v92 = v16;
  v93 = v2;
  v94 = 0x7FFFFFFF;
  v96 = 0x7FFFFFFF;
  v97 = 0x7FFFFFFF;
  v99 = v2;
  v100 = v2;
  v101 = v13;
  v102 = v14;
  v103 = 0x7FFFFFFF;
  v105 = 0x7FFFFFFF;
  v106 = v2;
  v107 = 0x7FFFFFFF;
  v109 = 0x7FFFFFFF;
  v111 = v2;
  v112 = v2;
  v113 = v13;
  v114 = v14;
  v115 = v15;
  v116 = v16;
  v117 = 0x7FFFFFFF;
  v118 = 0x7FFFFFFF;
  v119 = v17;
  v120 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v125 = 0x7FFFFFFF;
  v126 = v18;
  v130 = 0x7FFFFFFF;
  v131 = v17;
  v132 = v18;
  v133 = v9 - v12.m128i_i32[0];
  v134 = 0x7FFFFFFF;
  v135 = 0x7FFFFFFF;
  v137 = v17;
  v138 = v18;
  v139 = 0x7FFFFFFF;
  v141 = 0x7FFFFFFF;
  v142 = v12.m128i_i32[1];
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 20) )
  {
    v121 = 0;
    v127 = 0;
    v31 = 0;
    v37 = 0;
  }
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 21) )
  {
    v122 = v19;
    v128 = v19;
  }
  v20 = v30;
  v21 = 22LL;
  v22 = (CAtlasedImage **)((char *)this + 440);
  v23 = &v29;
  do
  {
    if ( *v22 )
    {
      CAtlasedImage::SetInsetFromParent(*v22, v23);
      if ( *v20 != 0x7FFFFFFF )
      {
        v25 = *v22;
        v28.cx = *v20;
        v28.cy = *((_DWORD *)v25 + 7);
        CAtlasedImage::SetSize(v25, &v28);
      }
      if ( v20[1] != 0x7FFFFFFF )
      {
        v26 = *v22;
        v27.cxRightWidth = v20[1];
        v27.cxLeftWidth = *((_DWORD *)v26 + 6);
        CAtlasedImage::SetSize(v26, (const struct tagSIZE *)&v27);
      }
    }
    v23 = (struct _MARGINS *)((char *)v23 + 24);
    ++v22;
    v20 += 6;
    --v21;
  }
  while ( v21 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 53) + 24LL))(*((_QWORD *)this + 53), 4096LL);
  return 0LL;
}
