/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180085F84
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180005D20 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180025514 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800258D8 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z @ 0x1800851C8 (-GetShadowMargins@CAccent@@KA-AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180085D44 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CAccent *this)
{
  int v1; // r15d
  int v2; // r12d
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
  LONG *v19; // rdi
  __int64 v20; // r14
  CAtlasedImage **v21; // rbx
  struct _MARGINS *v22; // rsi
  CAtlasedImage *v23; // rcx
  CAtlasedImage *v24; // rcx
  struct _MARGINS v26; // [rsp+28h] [rbp-E0h] BYREF
  struct tagSIZE v27; // [rsp+38h] [rbp-D0h] BYREF
  struct _MARGINS v28; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v29[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+98h] [rbp-70h]
  int v31; // [rsp+9Ch] [rbp-6Ch]
  int v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+A4h] [rbp-64h]
  int v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+ACh] [rbp-5Ch]
  int v36; // [rsp+B0h] [rbp-58h]
  int v37; // [rsp+B4h] [rbp-54h]
  int v38; // [rsp+B8h] [rbp-50h]
  int v39; // [rsp+BCh] [rbp-4Ch]
  int v40; // [rsp+C0h] [rbp-48h]
  int v41; // [rsp+C4h] [rbp-44h]
  int v42; // [rsp+C8h] [rbp-40h]
  int v43; // [rsp+CCh] [rbp-3Ch]
  int v44; // [rsp+D0h] [rbp-38h]
  int v45; // [rsp+D4h] [rbp-34h]
  int v46; // [rsp+D8h] [rbp-30h]
  int v47; // [rsp+DCh] [rbp-2Ch]
  int v48; // [rsp+E0h] [rbp-28h]
  int v49; // [rsp+E4h] [rbp-24h]
  int v50; // [rsp+E8h] [rbp-20h]
  int v51; // [rsp+ECh] [rbp-1Ch]
  int v52; // [rsp+F0h] [rbp-18h]
  int v53; // [rsp+F4h] [rbp-14h]
  int v54; // [rsp+F8h] [rbp-10h]
  int v55; // [rsp+FCh] [rbp-Ch]
  int v56; // [rsp+100h] [rbp-8h]
  int v57; // [rsp+104h] [rbp-4h]
  int v58; // [rsp+108h] [rbp+0h]
  int v59; // [rsp+10Ch] [rbp+4h]
  int v60; // [rsp+110h] [rbp+8h]
  int v61; // [rsp+114h] [rbp+Ch]
  int v62; // [rsp+118h] [rbp+10h]
  int v63; // [rsp+11Ch] [rbp+14h]
  int v64; // [rsp+120h] [rbp+18h]
  int v65; // [rsp+124h] [rbp+1Ch]
  int v66; // [rsp+128h] [rbp+20h]
  int v67; // [rsp+12Ch] [rbp+24h]
  int v68; // [rsp+130h] [rbp+28h]
  int v69; // [rsp+134h] [rbp+2Ch]
  int v70; // [rsp+138h] [rbp+30h]
  int v71; // [rsp+13Ch] [rbp+34h]
  int v72; // [rsp+140h] [rbp+38h]
  int v73; // [rsp+144h] [rbp+3Ch]
  int v74; // [rsp+148h] [rbp+40h]
  int v75; // [rsp+14Ch] [rbp+44h]
  int v76; // [rsp+150h] [rbp+48h]
  int v77; // [rsp+154h] [rbp+4Ch]
  int v78; // [rsp+158h] [rbp+50h]
  int v79; // [rsp+15Ch] [rbp+54h]
  int v80; // [rsp+160h] [rbp+58h]
  int v81; // [rsp+164h] [rbp+5Ch]
  int v82; // [rsp+168h] [rbp+60h]
  int v83; // [rsp+16Ch] [rbp+64h]
  int v84; // [rsp+170h] [rbp+68h]
  int v85; // [rsp+174h] [rbp+6Ch]
  int v86; // [rsp+178h] [rbp+70h]
  int v87; // [rsp+17Ch] [rbp+74h]
  int v88; // [rsp+180h] [rbp+78h]
  int v89; // [rsp+184h] [rbp+7Ch]
  int v90; // [rsp+188h] [rbp+80h]
  int v91; // [rsp+18Ch] [rbp+84h]
  int v92; // [rsp+190h] [rbp+88h]
  int v93; // [rsp+194h] [rbp+8Ch]
  int v94; // [rsp+198h] [rbp+90h]
  int v95; // [rsp+19Ch] [rbp+94h]
  int v96; // [rsp+1A0h] [rbp+98h]
  int v97; // [rsp+1A4h] [rbp+9Ch]
  int v98; // [rsp+1A8h] [rbp+A0h]
  int v99; // [rsp+1ACh] [rbp+A4h]
  int v100; // [rsp+1B0h] [rbp+A8h]
  int v101; // [rsp+1B4h] [rbp+ACh]
  int v102; // [rsp+1B8h] [rbp+B0h]
  int v103; // [rsp+1BCh] [rbp+B4h]
  int v104; // [rsp+1C0h] [rbp+B8h]
  int v105; // [rsp+1C4h] [rbp+BCh]
  int v106; // [rsp+1C8h] [rbp+C0h]
  int v107; // [rsp+1CCh] [rbp+C4h]
  int v108; // [rsp+1D0h] [rbp+C8h]
  int v109; // [rsp+1D4h] [rbp+CCh]
  int v110; // [rsp+1D8h] [rbp+D0h]
  int v111; // [rsp+1DCh] [rbp+D4h]
  int v112; // [rsp+1E0h] [rbp+D8h]
  int v113; // [rsp+1E4h] [rbp+DCh]
  int v114; // [rsp+1E8h] [rbp+E0h]
  int v115; // [rsp+1ECh] [rbp+E4h]
  int v116; // [rsp+1F0h] [rbp+E8h]
  int v117; // [rsp+1F4h] [rbp+ECh]
  __int32 v118; // [rsp+1F8h] [rbp+F0h]
  int v119; // [rsp+1FCh] [rbp+F4h]
  int v120; // [rsp+200h] [rbp+F8h]
  int v121; // [rsp+204h] [rbp+FCh]
  __int32 v122; // [rsp+208h] [rbp+100h]
  int v123; // [rsp+20Ch] [rbp+104h]
  int v124; // [rsp+210h] [rbp+108h]
  int v125; // [rsp+214h] [rbp+10Ch]
  int v126; // [rsp+218h] [rbp+110h]
  int v127; // [rsp+21Ch] [rbp+114h]
  __int32 v128; // [rsp+220h] [rbp+118h]
  int v129; // [rsp+224h] [rbp+11Ch]
  __int32 v130; // [rsp+228h] [rbp+120h]
  int v131; // [rsp+22Ch] [rbp+124h]
  __int32 v132; // [rsp+230h] [rbp+128h]
  int v133; // [rsp+234h] [rbp+12Ch]
  int v134; // [rsp+238h] [rbp+130h]
  __int32 v135; // [rsp+23Ch] [rbp+134h]
  __int32 v136; // [rsp+240h] [rbp+138h]
  int v137; // [rsp+244h] [rbp+13Ch]
  int v138; // [rsp+248h] [rbp+140h]
  __int32 v139; // [rsp+24Ch] [rbp+144h]
  int v140; // [rsp+250h] [rbp+148h]
  __int32 v141; // [rsp+254h] [rbp+14Ch]

  v1 = 0;
  v2 = 0;
  v4 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  *(_QWORD *)&v26.cxLeftWidth = 0LL;
  *(_QWORD *)&v26.cyTopHeight = 0LL;
  if ( v4 )
  {
    v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
    v2 = (int)((double)*(int *)(*((_QWORD *)v4 + 187) + 28LL) * v5);
    v1 = (int)((double)(*(_DWORD *)(*((_QWORD *)v4 + 187) + 24LL) - 1) * v5);
  }
  v6 = 0;
  if ( v1 >= 0 )
    v6 = v1;
  v7 = v26.cxRightWidth - v6;
  v8 = v26.cyBottomHeight - v6;
  v9 = v26.cyTopHeight - v6;
  v10 = -v6;
  ShadowMargins = CAccent::GetShadowMargins(&v26, v4);
  v28.cxLeftWidth = v10;
  v28.cxRightWidth = 0x7FFFFFFF;
  v28.cyTopHeight = v9;
  v12 = *(__m128i *)ShadowMargins;
  v28.cyBottomHeight = 0x7FFFFFFF;
  v29[0] = v1;
  v29[1] = v2;
  v29[2] = v13;
  v29[3] = v14;
  v29[4] = v9;
  v29[5] = 0x7FFFFFFF;
  v29[6] = 0x7FFFFFFF;
  v29[7] = v2;
  v29[8] = 0x7FFFFFFF;
  v29[9] = v7;
  v29[10] = v9;
  v29[11] = 0x7FFFFFFF;
  v29[12] = v1;
  v29[13] = v2;
  v29[14] = v10;
  v29[15] = 0x7FFFFFFF;
  v30 = v15;
  v31 = v16;
  v32 = v1;
  v33 = 0x7FFFFFFF;
  v34 = 0x7FFFFFFF;
  v35 = v7;
  v36 = v15;
  v37 = v16;
  v38 = v1;
  v39 = 0x7FFFFFFF;
  v40 = v10;
  v41 = 0x7FFFFFFF;
  v42 = 0x7FFFFFFF;
  v43 = v8;
  v44 = v1;
  v45 = v1;
  v46 = v13;
  v47 = v14;
  v48 = 0x7FFFFFFF;
  v49 = v8;
  v50 = 0x7FFFFFFF;
  v51 = v1;
  v52 = 0x7FFFFFFF;
  v53 = v7;
  v54 = 0x7FFFFFFF;
  v55 = v8;
  v56 = v1;
  v57 = v1;
  v58 = v13;
  v59 = v14;
  v60 = v9;
  v61 = 0x7FFFFFFF;
  v62 = 0x7FFFFFFF;
  v63 = v2;
  v64 = v10;
  v65 = 0x7FFFFFFF;
  v66 = v9;
  v67 = 0x7FFFFFFF;
  v68 = v1;
  v69 = v2;
  v70 = v10;
  v82 = v10;
  v122 = v12.m128i_i32[0];
  v94 = v10;
  v17 = v10 - v12.m128i_i32[0];
  v128 = v12.m128i_i32[1];
  v71 = v7;
  v77 = v7;
  v89 = v7;
  v107 = v7;
  v18 = v7 - v12.m128i_i32[1];
  v12.m128i_i64[0] = _mm_srli_si128(v12, 8).m128i_u64[0];
  v72 = v9;
  v78 = v9;
  v120 = v9;
  v126 = v9;
  v135 = v12.m128i_i32[0];
  v97 = v8;
  v103 = v8;
  v109 = v8;
  v121 = v8;
  v127 = v8;
  v139 = v8 - v12.m128i_i32[1];
  v73 = 0x7FFFFFFF;
  v74 = 0x7FFFFFFF;
  v75 = v2;
  v76 = 0x7FFFFFFF;
  v79 = 0x7FFFFFFF;
  v80 = v1;
  v81 = v2;
  v83 = 0x7FFFFFFF;
  v84 = v15;
  v85 = v16;
  v86 = v1;
  v87 = 0x7FFFFFFF;
  v88 = 0x7FFFFFFF;
  v90 = v15;
  v91 = v16;
  v92 = v1;
  v93 = 0x7FFFFFFF;
  v95 = 0x7FFFFFFF;
  v96 = 0x7FFFFFFF;
  v98 = v1;
  v99 = v1;
  v100 = v13;
  v101 = v14;
  v102 = 0x7FFFFFFF;
  v104 = 0x7FFFFFFF;
  v105 = v1;
  v106 = 0x7FFFFFFF;
  v108 = 0x7FFFFFFF;
  v110 = v1;
  v111 = v1;
  v112 = v13;
  v113 = v14;
  v114 = v15;
  v115 = v16;
  v116 = 0x7FFFFFFF;
  v117 = 0x7FFFFFFF;
  v118 = v17;
  v119 = 0x7FFFFFFF;
  v123 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v125 = v18;
  v129 = 0x7FFFFFFF;
  v130 = v17;
  v131 = v18;
  v132 = v9 - v12.m128i_i32[0];
  v133 = 0x7FFFFFFF;
  v134 = 0x7FFFFFFF;
  v136 = v17;
  v137 = v18;
  v138 = 0x7FFFFFFF;
  v140 = 0x7FFFFFFF;
  v141 = v12.m128i_i32[1];
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 20) )
  {
    v120 = 0;
    v126 = 0;
    v30 = 0;
    v36 = 0;
  }
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 21) )
  {
    v121 = 0;
    v127 = 0;
  }
  v19 = v29;
  v20 = 22LL;
  v21 = (CAtlasedImage **)((char *)this + 440);
  v22 = &v28;
  do
  {
    if ( *v21 )
    {
      CAtlasedImage::SetInsetFromParent(*v21, v22);
      if ( *v19 != 0x7FFFFFFF )
      {
        v23 = *v21;
        v27.cx = *v19;
        v27.cy = *((_DWORD *)v23 + 7);
        CAtlasedImage::SetSize((struct tagSIZE *)v23, &v27);
      }
      if ( v19[1] != 0x7FFFFFFF )
      {
        v24 = *v21;
        v26.cxRightWidth = v19[1];
        v26.cxLeftWidth = *((_DWORD *)v24 + 6);
        CAtlasedImage::SetSize((struct tagSIZE *)v24, (const struct tagSIZE *)&v26);
      }
    }
    v22 = (struct _MARGINS *)((char *)v22 + 24);
    ++v21;
    v19 += 6;
    --v20;
  }
  while ( v20 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 53) + 24LL))(*((_QWORD *)this + 53), 4096LL);
  return 0LL;
}
