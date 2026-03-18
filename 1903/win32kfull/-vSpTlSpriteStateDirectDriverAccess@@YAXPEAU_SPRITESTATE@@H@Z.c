/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00434F8
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C005ED8C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  struct _KTHREAD *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  struct _KTHREAD *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  struct _KTHREAD *v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  struct _KTHREAD *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbx
  struct _KTHREAD *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbx
  struct _KTHREAD *v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rbx
  struct _KTHREAD *v60; // rbp
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rbx
  struct _KTHREAD *v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rbx
  struct _KTHREAD *v74; // rbp
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rbx
  struct _KTHREAD *v81; // rbp
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rbx
  struct _KTHREAD *v88; // rbp
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rbx
  struct _KTHREAD *v95; // rbp
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rbx
  struct _KTHREAD *v102; // rbp
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rbx
  struct _KTHREAD *v109; // rbp
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 *v113; // rax
  __int64 v114; // rcx
  struct _KTHREAD *v115; // rbx
  __int64 *v116; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v118; // rax
  __int64 v119; // rbx
  struct _KTHREAD *v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 *v124; // rax
  __int64 v125; // rax
  __int64 v126; // rbx
  struct _KTHREAD *v127; // rsi
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rbx
  struct _KTHREAD *v134; // rsi
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 *v138; // rax
  __int64 v139; // rax
  __int64 v140; // rbx
  struct _KTHREAD *v141; // rsi
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 *v145; // rax
  __int64 v146; // rax
  __int64 v147; // rbx
  struct _KTHREAD *v148; // rsi
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 *v152; // rax
  __int64 v153; // rax
  __int64 v154; // rbx
  struct _KTHREAD *v155; // rsi
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rbx
  struct _KTHREAD *v162; // rsi
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 *v166; // rax
  __int64 v167; // rax
  __int64 v168; // rbx
  struct _KTHREAD *v169; // rsi
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 *v173; // rax
  __int64 v174; // rax
  __int64 v175; // rbx
  struct _KTHREAD *v176; // rsi
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 *v180; // rax
  __int64 v181; // rax
  __int64 v182; // rbx
  struct _KTHREAD *v183; // rsi
  __int64 v184; // rdx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 *v187; // rax
  __int64 v188; // rax
  __int64 v189; // rbx
  struct _KTHREAD *v190; // rsi
  __int64 v191; // rdx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 *v194; // rax
  __int64 v195; // rax
  __int64 v196; // rbx
  struct _KTHREAD *v197; // rsi
  __int64 v198; // rdx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 *v201; // rax
  __int64 v202; // rax
  __int64 v203; // rbx
  struct _KTHREAD *v204; // rsi
  __int64 v205; // rdx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 *v208; // rax
  __int64 v209; // rax
  __int64 v210; // rbx
  struct _KTHREAD *v211; // rsi
  __int64 v212; // rdx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 *v215; // rax
  struct _KTHREAD *v216; // rbx
  __int64 *v217; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v7 = IsThreadCrossSessionAttached(a1, a2, a3, a4);
  v12 = 0LL;
  v13 = v5 == 0;
  v14 = 0LL;
  if ( v13 )
  {
    if ( !v7 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    v118 = *(_QWORD *)(v14 + 280);
    v119 = 0LL;
    *(_QWORD *)(v118 + 32) = 0LL;
    v120 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10, v11) )
    {
      v124 = (__int64 *)PsGetThreadWin32Thread(v120);
      if ( v124 )
        v119 = *v124;
    }
    v125 = *(_QWORD *)(v119 + 280);
    v126 = 0LL;
    *(_QWORD *)(v125 + 40) = SpStrokeAndFillPath;
    v127 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStrokeAndFillPath, v121, v122, v123) )
    {
      v131 = (__int64 *)PsGetThreadWin32Thread(v127);
      if ( v131 )
        v126 = *v131;
    }
    v132 = *(_QWORD *)(v126 + 280);
    v133 = 0LL;
    *(_QWORD *)(v132 + 48) = SpStrokePath;
    v134 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStrokePath, v128, v129, v130) )
    {
      v138 = (__int64 *)PsGetThreadWin32Thread(v134);
      if ( v138 )
        v133 = *v138;
    }
    v139 = *(_QWORD *)(v133 + 280);
    v140 = 0LL;
    *(_QWORD *)(v139 + 56) = SpFillPath;
    v141 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpFillPath, v135, v136, v137) )
    {
      v145 = (__int64 *)PsGetThreadWin32Thread(v141);
      if ( v145 )
        v140 = *v145;
    }
    v146 = *(_QWORD *)(v140 + 280);
    v147 = 0LL;
    *(_QWORD *)(v146 + 72) = SpBitBlt;
    v148 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpBitBlt, v142, v143, v144) )
    {
      v152 = (__int64 *)PsGetThreadWin32Thread(v148);
      if ( v152 )
        v147 = *v152;
    }
    v153 = *(_QWORD *)(v147 + 280);
    v154 = 0LL;
    *(_QWORD *)(v153 + 80) = SpCopyBits;
    v155 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpCopyBits, v149, v150, v151) )
    {
      v159 = (__int64 *)PsGetThreadWin32Thread(v155);
      if ( v159 )
        v154 = *v159;
    }
    v160 = *(_QWORD *)(v154 + 280);
    v161 = 0LL;
    *(_QWORD *)(v160 + 88) = SpStretchBlt;
    v162 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStretchBlt, v156, v157, v158) )
    {
      v166 = (__int64 *)PsGetThreadWin32Thread(v162);
      if ( v166 )
        v161 = *v166;
    }
    v167 = *(_QWORD *)(v161 + 280);
    v168 = 0LL;
    *(_QWORD *)(v167 + 96) = SpTextOut;
    v169 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpTextOut, v163, v164, v165) )
    {
      v173 = (__int64 *)PsGetThreadWin32Thread(v169);
      if ( v173 )
        v168 = *v173;
    }
    v174 = *(_QWORD *)(v168 + 280);
    v175 = 0LL;
    *(_QWORD *)(v174 + 104) = SpLineTo;
    v176 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpLineTo, v170, v171, v172) )
    {
      v180 = (__int64 *)PsGetThreadWin32Thread(v176);
      if ( v180 )
        v175 = *v180;
    }
    v181 = *(_QWORD *)(v175 + 280);
    v182 = 0LL;
    *(_QWORD *)(v181 + 112) = SpTransparentBlt;
    v183 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpTransparentBlt, v177, v178, v179) )
    {
      v187 = (__int64 *)PsGetThreadWin32Thread(v183);
      if ( v187 )
        v182 = *v187;
    }
    v188 = *(_QWORD *)(v182 + 280);
    v189 = 0LL;
    *(_QWORD *)(v188 + 120) = SpAlphaBlend;
    v190 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpAlphaBlend, v184, v185, v186) )
    {
      v194 = (__int64 *)PsGetThreadWin32Thread(v190);
      if ( v194 )
        v189 = *v194;
    }
    v195 = *(_QWORD *)(v189 + 280);
    v196 = 0LL;
    *(_QWORD *)(v195 + 128) = SpPlgBlt;
    v197 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpPlgBlt, v191, v192, v193) )
    {
      v201 = (__int64 *)PsGetThreadWin32Thread(v197);
      if ( v201 )
        v196 = *v201;
    }
    v202 = *(_QWORD *)(v196 + 280);
    v203 = 0LL;
    *(_QWORD *)(v202 + 136) = SpGradientFill;
    v204 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpGradientFill, v198, v199, v200) )
    {
      v208 = (__int64 *)PsGetThreadWin32Thread(v204);
      if ( v208 )
        v203 = *v208;
    }
    v209 = *(_QWORD *)(v203 + 280);
    v210 = 0LL;
    *(_QWORD *)(v209 + 152) = SpStretchBltROP;
    v211 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStretchBltROP, v205, v206, v207) )
    {
      v215 = (__int64 *)PsGetThreadWin32Thread(v211);
      if ( v215 )
        v210 = *v215;
    }
    *(_QWORD *)(*(_QWORD *)(v210 + 280) + 144LL) = SpSaveScreenBits;
    v216 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpSaveScreenBits, v212, v213, v214) )
    {
      v217 = (__int64 *)PsGetThreadWin32Thread(v216);
      if ( v217 )
        v12 = *v217;
    }
    *(_QWORD *)(*(_QWORD *)(v12 + 280) + 160LL) = SpDrawStream;
  }
  else
  {
    if ( !v7 )
    {
      v15 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v15 )
        v14 = *v15;
    }
    v16 = *(_QWORD *)(v14 + 280);
    v17 = 0LL;
    *(_QWORD *)(v16 + 32) = a1;
    v18 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10, v11) )
    {
      v22 = (__int64 *)PsGetThreadWin32Thread(v18);
      if ( v22 )
        v17 = *v22;
    }
    v23 = *(_QWORD *)(v17 + 280);
    v24 = 0LL;
    *(_QWORD *)(v23 + 40) = *((_QWORD *)a1 + 149);
    v25 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v19, v20, v21) )
    {
      v29 = (__int64 *)PsGetThreadWin32Thread(v25);
      if ( v29 )
        v24 = *v29;
    }
    v30 = *(_QWORD *)(v24 + 280);
    v31 = 0LL;
    *(_QWORD *)(v30 + 48) = *((_QWORD *)a1 + 150);
    v32 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v30, v26, v27, v28) )
    {
      v36 = (__int64 *)PsGetThreadWin32Thread(v32);
      if ( v36 )
        v31 = *v36;
    }
    v37 = *(_QWORD *)(v31 + 280);
    v38 = 0LL;
    *(_QWORD *)(v37 + 56) = *((_QWORD *)a1 + 151);
    v39 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v37, v33, v34, v35) )
    {
      v43 = (__int64 *)PsGetThreadWin32Thread(v39);
      if ( v43 )
        v38 = *v43;
    }
    v44 = *(_QWORD *)(v38 + 280);
    v45 = 0LL;
    *(_QWORD *)(v44 + 72) = *((_QWORD *)a1 + 153);
    v46 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v44, v40, v41, v42) )
    {
      v50 = (__int64 *)PsGetThreadWin32Thread(v46);
      if ( v50 )
        v45 = *v50;
    }
    v51 = *(_QWORD *)(v45 + 280);
    v52 = 0LL;
    *(_QWORD *)(v51 + 80) = *((_QWORD *)a1 + 154);
    v53 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v51, v47, v48, v49) )
    {
      v57 = (__int64 *)PsGetThreadWin32Thread(v53);
      if ( v57 )
        v52 = *v57;
    }
    v58 = *(_QWORD *)(v52 + 280);
    v59 = 0LL;
    *(_QWORD *)(v58 + 88) = *((_QWORD *)a1 + 155);
    v60 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v58, v54, v55, v56) )
    {
      v64 = (__int64 *)PsGetThreadWin32Thread(v60);
      if ( v64 )
        v59 = *v64;
    }
    v65 = *(_QWORD *)(v59 + 280);
    v66 = 0LL;
    *(_QWORD *)(v65 + 96) = *((_QWORD *)a1 + 156);
    v67 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v65, v61, v62, v63) )
    {
      v71 = (__int64 *)PsGetThreadWin32Thread(v67);
      if ( v71 )
        v66 = *v71;
    }
    v72 = *(_QWORD *)(v66 + 280);
    v73 = 0LL;
    *(_QWORD *)(v72 + 104) = *((_QWORD *)a1 + 157);
    v74 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v72, v68, v69, v70) )
    {
      v78 = (__int64 *)PsGetThreadWin32Thread(v74);
      if ( v78 )
        v73 = *v78;
    }
    v79 = *(_QWORD *)(v73 + 280);
    v80 = 0LL;
    *(_QWORD *)(v79 + 112) = *((_QWORD *)a1 + 158);
    v81 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v79, v75, v76, v77) )
    {
      v85 = (__int64 *)PsGetThreadWin32Thread(v81);
      if ( v85 )
        v80 = *v85;
    }
    v86 = *(_QWORD *)(v80 + 280);
    v87 = 0LL;
    *(_QWORD *)(v86 + 120) = *((_QWORD *)a1 + 159);
    v88 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v86, v82, v83, v84) )
    {
      v92 = (__int64 *)PsGetThreadWin32Thread(v88);
      if ( v92 )
        v87 = *v92;
    }
    v93 = *(_QWORD *)(v87 + 280);
    v94 = 0LL;
    *(_QWORD *)(v93 + 128) = *((_QWORD *)a1 + 160);
    v95 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v93, v89, v90, v91) )
    {
      v99 = (__int64 *)PsGetThreadWin32Thread(v95);
      if ( v99 )
        v94 = *v99;
    }
    v100 = *(_QWORD *)(v94 + 280);
    v101 = 0LL;
    *(_QWORD *)(v100 + 136) = *((_QWORD *)a1 + 161);
    v102 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v100, v96, v97, v98) )
    {
      v106 = (__int64 *)PsGetThreadWin32Thread(v102);
      if ( v106 )
        v101 = *v106;
    }
    v107 = *(_QWORD *)(v101 + 280);
    v108 = 0LL;
    *(_QWORD *)(v107 + 152) = *((_QWORD *)a1 + 163);
    v109 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v107, v103, v104, v105) )
    {
      v113 = (__int64 *)PsGetThreadWin32Thread(v109);
      if ( v113 )
        v108 = *v113;
    }
    v114 = *(_QWORD *)(v108 + 280);
    *(_QWORD *)(v114 + 144) = *((_QWORD *)a1 + 162);
    v115 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v114, v110, v111, v112) )
    {
      v116 = (__int64 *)PsGetThreadWin32Thread(v115);
      if ( v116 )
        v12 = *v116;
    }
    *(_QWORD *)(*(_QWORD *)(v12 + 280) + 160LL) = *((_QWORD *)a1 + 164);
  }
}
