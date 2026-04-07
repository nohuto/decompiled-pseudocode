/*
 * XREFs of ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x180080B18
 * Callers:
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180080954 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180080A94 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x18008E6A0 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateColorTransform(CFullScreenMagnifier *this)
{
  float v1; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm14_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  float v24; // xmm8_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm8_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  float v44; // xmm8_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm8_4
  float v49; // xmm6_4
  float v50; // xmm8_4
  float v51; // xmm7_4
  float v52; // xmm3_4
  float v53; // xmm8_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  float v56; // xmm3_4
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  float v62; // xmm8_4
  float v63; // xmm3_4
  float v64; // xmm4_4
  float v65; // xmm0_4
  float v66; // xmm8_4
  float v67; // xmm5_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm8_4
  float v71; // xmm6_4
  float v72; // xmm3_4
  float v73; // xmm0_4
  float v74; // xmm8_4
  float v75; // xmm7_4
  float v76; // xmm3_4
  float v77; // xmm8_4
  float v78; // xmm2_4
  float v79; // xmm0_4
  float v80; // xmm3_4
  float v81; // xmm3_4
  float v82; // xmm0_4
  float v83; // xmm2_4
  float v84; // xmm3_4
  float v85; // xmm2_4
  float v86; // xmm1_4
  float v87; // xmm8_4
  float v88; // xmm5_4
  float v89; // xmm3_4
  float v90; // xmm4_4
  float v91; // xmm0_4
  float v92; // xmm8_4
  float v93; // xmm5_4
  float v94; // xmm3_4
  float v95; // xmm8_4
  float v96; // xmm0_4
  float v97; // xmm6_4
  float v98; // xmm3_4
  float v99; // xmm1_4
  float v100; // xmm8_4
  float v101; // xmm7_4
  float v102; // xmm8_4
  float v103; // xmm2_4
  float v104; // xmm1_4
  float v105; // xmm3_4
  float v106; // xmm0_4
  float v107; // xmm2_4
  float v108; // xmm1_4
  float v109; // xmm3_4
  float v110; // xmm8_4
  float v111; // xmm0_4
  float v112; // xmm3_4
  float v113; // xmm1_4
  float v114; // xmm7_4
  float v115; // xmm1_4
  CVisual *v116; // rcx
  int v117; // eax
  unsigned int v118; // ebx
  int v119; // eax
  float v121[28]; // [rsp+38h] [rbp-69h] BYREF

  v1 = *((float *)this + 43);
  v3 = *((float *)this + 42);
  v4 = *((float *)this + 44);
  v5 = *((float *)this + 45);
  v6 = *((float *)this + 46);
  v7 = *((float *)this + 36);
  v8 = *((float *)this + 23) * v1;
  v9 = *((float *)this + 28) * v4;
  v121[0] = (float)((float)((float)((float)(v3 * *((float *)this + 17)) + (float)(v1 * *((float *)this + 22)))
                          + (float)(v4 * *((float *)this + 27)))
                  + (float)(v5 * *((float *)this + 32)))
          + (float)(v6 * *((float *)this + 37));
  v10 = (float)(*((float *)this + 18) * v3) + v8;
  v11 = *((float *)this + 24) * v1;
  v12 = (float)((float)(v10 + v9) + (float)(*((float *)this + 33) * v5)) + (float)(*((float *)this + 38) * v6);
  v13 = *((float *)this + 29) * v4;
  v121[1] = v12;
  v14 = (float)(*((float *)this + 19) * v3) + v11;
  v15 = *((float *)this + 25) * v1;
  v16 = (float)((float)(v14 + v13) + (float)(*((float *)this + 34) * v5)) + (float)(*((float *)this + 39) * v6);
  v17 = *((float *)this + 30) * v4;
  v121[2] = v16;
  v18 = (float)(*((float *)this + 20) * v3) + v15;
  v19 = *((float *)this + 26) * v1;
  v20 = (float)((float)(v18 + v17) + (float)(*((float *)this + 35) * v5)) + (float)(*((float *)this + 40) * v6);
  v21 = *((float *)this + 31) * v4;
  v121[3] = v20;
  v22 = (float)((float)((float)((float)(*((float *)this + 21) * v3) + v19) + v21) + (float)(v7 * v5))
      + (float)(*((float *)this + 41) * v6);
  v23 = *((float *)this + 48);
  v24 = *((float *)this + 47);
  v25 = v23 * *((float *)this + 22);
  v26 = v24 * *((float *)this + 18);
  v27 = *((float *)this + 49);
  v28 = *((float *)this + 50);
  v29 = v27 * *((float *)this + 27);
  v30 = *((float *)this + 51);
  v121[4] = v22;
  v31 = (float)(v24 * *((float *)this + 17)) + v25;
  v32 = v28 * *((float *)this + 33);
  v33 = (float)(v26 + (float)(v23 * *((float *)this + 23))) + (float)(v27 * *((float *)this + 28));
  v121[5] = (float)((float)(v31 + v29) + (float)(v28 * *((float *)this + 32))) + (float)(v30 * *((float *)this + 37));
  v34 = v33 + v32;
  v35 = v28 * *((float *)this + 34);
  v36 = (float)((float)(v24 * *((float *)this + 19)) + (float)(v23 * *((float *)this + 24)))
      + (float)(v27 * *((float *)this + 29));
  v121[6] = v34 + (float)(v30 * *((float *)this + 38));
  v37 = v24;
  v38 = v36 + v35;
  v39 = v27 * *((float *)this + 30);
  v40 = (float)(v24 * *((float *)this + 21)) + (float)(v23 * *((float *)this + 26));
  v41 = (float)(v37 * *((float *)this + 20)) + (float)(v23 * *((float *)this + 25));
  v42 = *((float *)this + 53);
  v43 = v28 * *((float *)this + 35);
  v44 = v40 + (float)(v27 * *((float *)this + 31));
  v45 = *((float *)this + 54);
  v46 = v41 + v39;
  v47 = v30;
  v121[7] = v38 + (float)(v30 * *((float *)this + 39));
  v48 = v44 + (float)(v28 * v7);
  v49 = *((float *)this + 55);
  v50 = v48 + (float)(v30 * *((float *)this + 41));
  v51 = *((float *)this + 56);
  v52 = (float)(v46 + v43) + (float)(v47 * *((float *)this + 40));
  v121[9] = v50;
  v53 = *((float *)this + 52);
  v121[8] = v52;
  v54 = v49 * *((float *)this + 33);
  v55 = (float)((float)(v53 * *((float *)this + 18)) + (float)(v42 * *((float *)this + 23)))
      + (float)(v45 * *((float *)this + 28));
  v121[10] = (float)((float)((float)((float)(v53 * *((float *)this + 17)) + (float)(v42 * *((float *)this + 22)))
                           + (float)(v45 * *((float *)this + 27)))
                   + (float)(v49 * *((float *)this + 32)))
           + (float)(v51 * *((float *)this + 37));
  v56 = v55 + v54;
  v57 = v49 * *((float *)this + 34);
  v58 = (float)((float)(v53 * *((float *)this + 19)) + (float)(v42 * *((float *)this + 24)))
      + (float)(v45 * *((float *)this + 29));
  v121[11] = v56 + (float)(v51 * *((float *)this + 38));
  v59 = v53;
  v60 = v58 + v57;
  v61 = v45 * *((float *)this + 30);
  v62 = (float)(v53 * *((float *)this + 21)) + (float)(v42 * *((float *)this + 26));
  v63 = (float)(v59 * *((float *)this + 20)) + (float)(v42 * *((float *)this + 25));
  v64 = *((float *)this + 58);
  v65 = v49 * *((float *)this + 35);
  v66 = v62 + (float)(v45 * *((float *)this + 31));
  v121[12] = v60 + (float)(v51 * *((float *)this + 39));
  v67 = *((float *)this + 59);
  v68 = v63 + v61;
  v69 = v51;
  v70 = v66 + (float)(v49 * v7);
  v71 = *((float *)this + 60);
  v72 = v68 + v65;
  v73 = v64 * *((float *)this + 22);
  v74 = v70 + (float)(v51 * *((float *)this + 41));
  v75 = *((float *)this + 61);
  v76 = v72 + (float)(v69 * *((float *)this + 40));
  v121[14] = v74;
  v77 = *((float *)this + 57);
  v121[13] = v76;
  v78 = (float)(v77 * *((float *)this + 17)) + v73;
  v79 = v71 * *((float *)this + 33);
  v80 = (float)((float)(v77 * *((float *)this + 18)) + (float)(v64 * *((float *)this + 23)))
      + (float)(v67 * *((float *)this + 28));
  v121[15] = (float)((float)(v78 + (float)(v67 * *((float *)this + 27))) + (float)(v71 * *((float *)this + 32)))
           + (float)(v75 * *((float *)this + 37));
  v81 = v80 + v79;
  v82 = v71 * *((float *)this + 34);
  v83 = (float)((float)(v77 * *((float *)this + 19)) + (float)(v64 * *((float *)this + 24)))
      + (float)(v67 * *((float *)this + 29));
  v121[16] = v81 + (float)(v75 * *((float *)this + 38));
  v84 = v77;
  v85 = v83 + v82;
  v86 = v67 * *((float *)this + 30);
  v87 = (float)(v77 * *((float *)this + 21)) + (float)(v64 * *((float *)this + 26));
  v88 = v67 * *((float *)this + 31);
  v89 = (float)(v84 * *((float *)this + 20)) + (float)(v64 * *((float *)this + 25));
  v90 = *((float *)this + 63);
  v91 = v71 * *((float *)this + 35);
  v121[17] = v85 + (float)(v75 * *((float *)this + 39));
  v92 = v87 + v88;
  v93 = *((float *)this + 64);
  v94 = (float)(v89 + v86) + v91;
  v95 = v92 + (float)(v71 * v7);
  v96 = v90 * *((float *)this + 22);
  v97 = *((float *)this + 65);
  v98 = v94 + (float)(v75 * *((float *)this + 40));
  v99 = v93 * *((float *)this + 27);
  v100 = v95 + (float)(v75 * *((float *)this + 41));
  v101 = *((float *)this + 66);
  v121[18] = v98;
  v121[19] = v100;
  v102 = *((float *)this + 62);
  v103 = (float)((float)((float)((float)(v102 * *((float *)this + 17)) + v96) + v99)
               + (float)(v97 * *((float *)this + 32)))
       + (float)(v101 * *((float *)this + 37));
  v104 = v93 * *((float *)this + 28);
  v105 = (float)(v102 * *((float *)this + 18)) + (float)(v90 * *((float *)this + 23));
  v121[20] = v103;
  v106 = v97 * *((float *)this + 34);
  v107 = (float)((float)(v102 * *((float *)this + 19)) + (float)(v90 * *((float *)this + 24)))
       + (float)(v93 * *((float *)this + 29));
  v121[21] = (float)((float)(v105 + v104) + (float)(v97 * *((float *)this + 33)))
           + (float)(v101 * *((float *)this + 38));
  v108 = v93 * *((float *)this + 30);
  v109 = (float)(v102 * *((float *)this + 20)) + (float)(v90 * *((float *)this + 25));
  v110 = (float)((float)(v102 * *((float *)this + 21)) + (float)(v90 * *((float *)this + 26)))
       + (float)(v93 * *((float *)this + 31));
  v121[22] = (float)(v107 + v106) + (float)(v101 * *((float *)this + 39));
  v111 = v97 * *((float *)this + 35);
  v112 = v109 + v108;
  v113 = v101;
  v114 = v101 * *((float *)this + 41);
  v115 = v113 * *((float *)this + 40);
  v116 = (CVisual *)*((_QWORD *)this + 4);
  v121[24] = (float)(v110 + (float)(v97 * v7)) + v114;
  v121[23] = (float)(v112 + v111) + v115;
  v117 = CVisual::SetColorTransform(v116, (const struct MilColorTransform *)v121);
  v118 = v117;
  if ( v117 >= 0 )
  {
    v119 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    v118 = v119;
    if ( v119 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v119, 0x153u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v117, 0x14Eu);
  }
  return v118;
}
