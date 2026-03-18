/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00874FC
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A8AB0 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v4; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  struct _KTHREAD *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct _KTHREAD *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  struct _KTHREAD *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  struct _KTHREAD *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  struct _KTHREAD *v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbx
  struct _KTHREAD *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbx
  struct _KTHREAD *v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rbx
  struct _KTHREAD *v58; // rbp
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rbx
  struct _KTHREAD *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rbx
  struct _KTHREAD *v70; // rbp
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rbx
  struct _KTHREAD *v76; // rbp
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rbx
  struct _KTHREAD *v82; // rbp
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rbx
  struct _KTHREAD *v88; // rbp
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rbx
  struct _KTHREAD *v94; // rbp
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 *v97; // rax
  __int64 v98; // rcx
  struct _KTHREAD *v99; // rbx
  __int64 *v100; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v102; // rax
  __int64 v103; // rbx
  struct _KTHREAD *v104; // rsi
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rbx
  struct _KTHREAD *v110; // rsi
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rbx
  struct _KTHREAD *v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rbx
  struct _KTHREAD *v122; // rsi
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rbx
  struct _KTHREAD *v128; // rsi
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rbx
  struct _KTHREAD *v134; // rsi
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 *v137; // rax
  __int64 v138; // rax
  __int64 v139; // rbx
  struct _KTHREAD *v140; // rsi
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 *v143; // rax
  __int64 v144; // rax
  __int64 v145; // rbx
  struct _KTHREAD *v146; // rsi
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 *v149; // rax
  __int64 v150; // rax
  __int64 v151; // rbx
  struct _KTHREAD *v152; // rsi
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rbx
  struct _KTHREAD *v158; // rsi
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 *v161; // rax
  __int64 v162; // rax
  __int64 v163; // rbx
  struct _KTHREAD *v164; // rsi
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 *v167; // rax
  __int64 v168; // rax
  __int64 v169; // rbx
  struct _KTHREAD *v170; // rsi
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 *v173; // rax
  __int64 v174; // rax
  __int64 v175; // rbx
  struct _KTHREAD *v176; // rsi
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 *v179; // rax
  __int64 v180; // rax
  __int64 v181; // rbx
  struct _KTHREAD *v182; // rsi
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 *v185; // rax
  struct _KTHREAD *v186; // rbx
  __int64 *v187; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = a2;
  v6 = IsThreadCrossSessionAttached(a1, a2, a3);
  v10 = 0LL;
  v11 = v4 == 0;
  v12 = 0LL;
  if ( v11 )
  {
    if ( !v6 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    v102 = *(_QWORD *)(v12 + 280);
    v103 = 0LL;
    *(_QWORD *)(v102 + 32) = 0LL;
    v104 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9) )
    {
      v107 = (__int64 *)PsGetThreadWin32Thread(v104);
      if ( v107 )
        v103 = *v107;
    }
    v108 = *(_QWORD *)(v103 + 280);
    v109 = 0LL;
    *(_QWORD *)(v108 + 40) = SpStrokeAndFillPath;
    v110 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStrokeAndFillPath, v105, v106) )
    {
      v113 = (__int64 *)PsGetThreadWin32Thread(v110);
      if ( v113 )
        v109 = *v113;
    }
    v114 = *(_QWORD *)(v109 + 280);
    v115 = 0LL;
    *(_QWORD *)(v114 + 48) = SpStrokePath;
    v116 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStrokePath, v111, v112) )
    {
      v119 = (__int64 *)PsGetThreadWin32Thread(v116);
      if ( v119 )
        v115 = *v119;
    }
    v120 = *(_QWORD *)(v115 + 280);
    v121 = 0LL;
    *(_QWORD *)(v120 + 56) = SpFillPath;
    v122 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpFillPath, v117, v118) )
    {
      v125 = (__int64 *)PsGetThreadWin32Thread(v122);
      if ( v125 )
        v121 = *v125;
    }
    v126 = *(_QWORD *)(v121 + 280);
    v127 = 0LL;
    *(_QWORD *)(v126 + 72) = SpBitBlt;
    v128 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpBitBlt, v123, v124) )
    {
      v131 = (__int64 *)PsGetThreadWin32Thread(v128);
      if ( v131 )
        v127 = *v131;
    }
    v132 = *(_QWORD *)(v127 + 280);
    v133 = 0LL;
    *(_QWORD *)(v132 + 80) = SpCopyBits;
    v134 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpCopyBits, v129, v130) )
    {
      v137 = (__int64 *)PsGetThreadWin32Thread(v134);
      if ( v137 )
        v133 = *v137;
    }
    v138 = *(_QWORD *)(v133 + 280);
    v139 = 0LL;
    *(_QWORD *)(v138 + 88) = SpStretchBlt;
    v140 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStretchBlt, v135, v136) )
    {
      v143 = (__int64 *)PsGetThreadWin32Thread(v140);
      if ( v143 )
        v139 = *v143;
    }
    v144 = *(_QWORD *)(v139 + 280);
    v145 = 0LL;
    *(_QWORD *)(v144 + 96) = SpTextOut;
    v146 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpTextOut, v141, v142) )
    {
      v149 = (__int64 *)PsGetThreadWin32Thread(v146);
      if ( v149 )
        v145 = *v149;
    }
    v150 = *(_QWORD *)(v145 + 280);
    v151 = 0LL;
    *(_QWORD *)(v150 + 104) = SpLineTo;
    v152 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpLineTo, v147, v148) )
    {
      v155 = (__int64 *)PsGetThreadWin32Thread(v152);
      if ( v155 )
        v151 = *v155;
    }
    v156 = *(_QWORD *)(v151 + 280);
    v157 = 0LL;
    *(_QWORD *)(v156 + 112) = SpTransparentBlt;
    v158 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpTransparentBlt, v153, v154) )
    {
      v161 = (__int64 *)PsGetThreadWin32Thread(v158);
      if ( v161 )
        v157 = *v161;
    }
    v162 = *(_QWORD *)(v157 + 280);
    v163 = 0LL;
    *(_QWORD *)(v162 + 120) = SpAlphaBlend;
    v164 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpAlphaBlend, v159, v160) )
    {
      v167 = (__int64 *)PsGetThreadWin32Thread(v164);
      if ( v167 )
        v163 = *v167;
    }
    v168 = *(_QWORD *)(v163 + 280);
    v169 = 0LL;
    *(_QWORD *)(v168 + 128) = SpPlgBlt;
    v170 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpPlgBlt, v165, v166) )
    {
      v173 = (__int64 *)PsGetThreadWin32Thread(v170);
      if ( v173 )
        v169 = *v173;
    }
    v174 = *(_QWORD *)(v169 + 280);
    v175 = 0LL;
    *(_QWORD *)(v174 + 136) = SpGradientFill;
    v176 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpGradientFill, v171, v172) )
    {
      v179 = (__int64 *)PsGetThreadWin32Thread(v176);
      if ( v179 )
        v175 = *v179;
    }
    v180 = *(_QWORD *)(v175 + 280);
    v181 = 0LL;
    *(_QWORD *)(v180 + 152) = SpStretchBltROP;
    v182 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStretchBltROP, v177, v178) )
    {
      v185 = (__int64 *)PsGetThreadWin32Thread(v182);
      if ( v185 )
        v181 = *v185;
    }
    *(_QWORD *)(*(_QWORD *)(v181 + 280) + 144LL) = SpSaveScreenBits;
    v186 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpSaveScreenBits, v183, v184) )
    {
      v187 = (__int64 *)PsGetThreadWin32Thread(v186);
      if ( v187 )
        v10 = *v187;
    }
    *(_QWORD *)(*(_QWORD *)(v10 + 280) + 160LL) = SpDrawStream;
  }
  else
  {
    if ( !v6 )
    {
      v13 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v13 )
        v12 = *v13;
    }
    v14 = *(_QWORD *)(v12 + 280);
    v15 = 0LL;
    *(_QWORD *)(v14 + 32) = a1;
    v16 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9) )
    {
      v19 = (__int64 *)PsGetThreadWin32Thread(v16);
      if ( v19 )
        v15 = *v19;
    }
    v20 = *(_QWORD *)(v15 + 280);
    v21 = 0LL;
    *(_QWORD *)(v20 + 40) = *((_QWORD *)a1 + 149);
    v22 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v17, v18) )
    {
      v25 = (__int64 *)PsGetThreadWin32Thread(v22);
      if ( v25 )
        v21 = *v25;
    }
    v26 = *(_QWORD *)(v21 + 280);
    v27 = 0LL;
    *(_QWORD *)(v26 + 48) = *((_QWORD *)a1 + 150);
    v28 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v23, v24) )
    {
      v31 = (__int64 *)PsGetThreadWin32Thread(v28);
      if ( v31 )
        v27 = *v31;
    }
    v32 = *(_QWORD *)(v27 + 280);
    v33 = 0LL;
    *(_QWORD *)(v32 + 56) = *((_QWORD *)a1 + 151);
    v34 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v29, v30) )
    {
      v37 = (__int64 *)PsGetThreadWin32Thread(v34);
      if ( v37 )
        v33 = *v37;
    }
    v38 = *(_QWORD *)(v33 + 280);
    v39 = 0LL;
    *(_QWORD *)(v38 + 72) = *((_QWORD *)a1 + 153);
    v40 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v35, v36) )
    {
      v43 = (__int64 *)PsGetThreadWin32Thread(v40);
      if ( v43 )
        v39 = *v43;
    }
    v44 = *(_QWORD *)(v39 + 280);
    v45 = 0LL;
    *(_QWORD *)(v44 + 80) = *((_QWORD *)a1 + 154);
    v46 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v44, v41, v42) )
    {
      v49 = (__int64 *)PsGetThreadWin32Thread(v46);
      if ( v49 )
        v45 = *v49;
    }
    v50 = *(_QWORD *)(v45 + 280);
    v51 = 0LL;
    *(_QWORD *)(v50 + 88) = *((_QWORD *)a1 + 155);
    v52 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v50, v47, v48) )
    {
      v55 = (__int64 *)PsGetThreadWin32Thread(v52);
      if ( v55 )
        v51 = *v55;
    }
    v56 = *(_QWORD *)(v51 + 280);
    v57 = 0LL;
    *(_QWORD *)(v56 + 96) = *((_QWORD *)a1 + 156);
    v58 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v56, v53, v54) )
    {
      v61 = (__int64 *)PsGetThreadWin32Thread(v58);
      if ( v61 )
        v57 = *v61;
    }
    v62 = *(_QWORD *)(v57 + 280);
    v63 = 0LL;
    *(_QWORD *)(v62 + 104) = *((_QWORD *)a1 + 157);
    v64 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v62, v59, v60) )
    {
      v67 = (__int64 *)PsGetThreadWin32Thread(v64);
      if ( v67 )
        v63 = *v67;
    }
    v68 = *(_QWORD *)(v63 + 280);
    v69 = 0LL;
    *(_QWORD *)(v68 + 112) = *((_QWORD *)a1 + 158);
    v70 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v68, v65, v66) )
    {
      v73 = (__int64 *)PsGetThreadWin32Thread(v70);
      if ( v73 )
        v69 = *v73;
    }
    v74 = *(_QWORD *)(v69 + 280);
    v75 = 0LL;
    *(_QWORD *)(v74 + 120) = *((_QWORD *)a1 + 159);
    v76 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v74, v71, v72) )
    {
      v79 = (__int64 *)PsGetThreadWin32Thread(v76);
      if ( v79 )
        v75 = *v79;
    }
    v80 = *(_QWORD *)(v75 + 280);
    v81 = 0LL;
    *(_QWORD *)(v80 + 128) = *((_QWORD *)a1 + 160);
    v82 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v80, v77, v78) )
    {
      v85 = (__int64 *)PsGetThreadWin32Thread(v82);
      if ( v85 )
        v81 = *v85;
    }
    v86 = *(_QWORD *)(v81 + 280);
    v87 = 0LL;
    *(_QWORD *)(v86 + 136) = *((_QWORD *)a1 + 161);
    v88 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v86, v83, v84) )
    {
      v91 = (__int64 *)PsGetThreadWin32Thread(v88);
      if ( v91 )
        v87 = *v91;
    }
    v92 = *(_QWORD *)(v87 + 280);
    v93 = 0LL;
    *(_QWORD *)(v92 + 152) = *((_QWORD *)a1 + 163);
    v94 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v92, v89, v90) )
    {
      v97 = (__int64 *)PsGetThreadWin32Thread(v94);
      if ( v97 )
        v93 = *v97;
    }
    v98 = *(_QWORD *)(v93 + 280);
    *(_QWORD *)(v98 + 144) = *((_QWORD *)a1 + 162);
    v99 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v98, v95, v96) )
    {
      v100 = (__int64 *)PsGetThreadWin32Thread(v99);
      if ( v100 )
        v10 = *v100;
    }
    *(_QWORD *)(*(_QWORD *)(v10 + 280) + 160LL) = *((_QWORD *)a1 + 164);
  }
}
