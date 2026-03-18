/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C007A86C
 * Callers:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C007A474 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  struct _KTHREAD *v14; // rbp
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct _KTHREAD *v19; // rbp
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  struct _KTHREAD *v24; // rbp
  __int64 v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  struct _KTHREAD *v29; // rbp
  __int64 v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  struct _KTHREAD *v34; // rbp
  __int64 v35; // rdx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  struct _KTHREAD *v39; // rbp
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  struct _KTHREAD *v44; // rbp
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  struct _KTHREAD *v49; // rbp
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rbx
  struct _KTHREAD *v54; // rbp
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rbx
  struct _KTHREAD *v59; // rbp
  __int64 v60; // rdx
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rbx
  struct _KTHREAD *v64; // rbp
  __int64 v65; // rdx
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rbx
  struct _KTHREAD *v69; // rbp
  __int64 v70; // rdx
  __int64 *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rbx
  struct _KTHREAD *v74; // rbp
  __int64 v75; // rdx
  __int64 *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rbx
  struct _KTHREAD *v79; // rbp
  __int64 v80; // rdx
  __int64 *v81; // rax
  __int64 v82; // rcx
  struct _KTHREAD *v83; // rbx
  __int64 *v84; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v86; // rax
  __int64 v87; // rbx
  struct _KTHREAD *v88; // rsi
  __int64 v89; // rdx
  __int64 *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rbx
  struct _KTHREAD *v93; // rsi
  __int64 v94; // rdx
  __int64 *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rbx
  struct _KTHREAD *v98; // rsi
  __int64 v99; // rdx
  __int64 *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rbx
  struct _KTHREAD *v103; // rsi
  __int64 v104; // rdx
  __int64 *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rbx
  struct _KTHREAD *v108; // rsi
  __int64 v109; // rdx
  __int64 *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rbx
  struct _KTHREAD *v113; // rsi
  __int64 v114; // rdx
  __int64 *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rbx
  struct _KTHREAD *v118; // rsi
  __int64 v119; // rdx
  __int64 *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rbx
  struct _KTHREAD *v123; // rsi
  __int64 v124; // rdx
  __int64 *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rbx
  struct _KTHREAD *v128; // rsi
  __int64 v129; // rdx
  __int64 *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rbx
  struct _KTHREAD *v133; // rsi
  __int64 v134; // rdx
  __int64 *v135; // rax
  __int64 v136; // rax
  __int64 v137; // rbx
  struct _KTHREAD *v138; // rsi
  __int64 v139; // rdx
  __int64 *v140; // rax
  __int64 v141; // rax
  __int64 v142; // rbx
  struct _KTHREAD *v143; // rsi
  __int64 v144; // rdx
  __int64 *v145; // rax
  __int64 v146; // rax
  __int64 v147; // rbx
  struct _KTHREAD *v148; // rsi
  __int64 v149; // rdx
  __int64 *v150; // rax
  __int64 v151; // rax
  __int64 v152; // rbx
  struct _KTHREAD *v153; // rsi
  __int64 v154; // rdx
  __int64 *v155; // rax
  struct _KTHREAD *v156; // rbx
  __int64 *v157; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  v5 = IsThreadCrossSessionAttached(a1, a2);
  v8 = 0LL;
  v9 = v3 == 0;
  v10 = 0LL;
  if ( v9 )
  {
    if ( !v5 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v10 = *ThreadWin32Thread;
    }
    v86 = *(_QWORD *)(v10 + 280);
    v87 = 0LL;
    *(_QWORD *)(v86 + 32) = 0LL;
    v88 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
    {
      v90 = (__int64 *)PsGetThreadWin32Thread(v88);
      if ( v90 )
        v87 = *v90;
    }
    v91 = *(_QWORD *)(v87 + 280);
    v92 = 0LL;
    *(_QWORD *)(v91 + 40) = SpStrokeAndFillPath;
    v93 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStrokeAndFillPath, v89) )
    {
      v95 = (__int64 *)PsGetThreadWin32Thread(v93);
      if ( v95 )
        v92 = *v95;
    }
    v96 = *(_QWORD *)(v92 + 280);
    v97 = 0LL;
    *(_QWORD *)(v96 + 48) = SpStrokePath;
    v98 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStrokePath, v94) )
    {
      v100 = (__int64 *)PsGetThreadWin32Thread(v98);
      if ( v100 )
        v97 = *v100;
    }
    v101 = *(_QWORD *)(v97 + 280);
    v102 = 0LL;
    *(_QWORD *)(v101 + 56) = SpFillPath;
    v103 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpFillPath, v99) )
    {
      v105 = (__int64 *)PsGetThreadWin32Thread(v103);
      if ( v105 )
        v102 = *v105;
    }
    v106 = *(_QWORD *)(v102 + 280);
    v107 = 0LL;
    *(_QWORD *)(v106 + 72) = SpBitBlt;
    v108 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpBitBlt, v104) )
    {
      v110 = (__int64 *)PsGetThreadWin32Thread(v108);
      if ( v110 )
        v107 = *v110;
    }
    v111 = *(_QWORD *)(v107 + 280);
    v112 = 0LL;
    *(_QWORD *)(v111 + 80) = SpCopyBits;
    v113 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpCopyBits, v109) )
    {
      v115 = (__int64 *)PsGetThreadWin32Thread(v113);
      if ( v115 )
        v112 = *v115;
    }
    v116 = *(_QWORD *)(v112 + 280);
    v117 = 0LL;
    *(_QWORD *)(v116 + 88) = SpStretchBlt;
    v118 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStretchBlt, v114) )
    {
      v120 = (__int64 *)PsGetThreadWin32Thread(v118);
      if ( v120 )
        v117 = *v120;
    }
    v121 = *(_QWORD *)(v117 + 280);
    v122 = 0LL;
    *(_QWORD *)(v121 + 96) = SpTextOut;
    v123 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpTextOut, v119) )
    {
      v125 = (__int64 *)PsGetThreadWin32Thread(v123);
      if ( v125 )
        v122 = *v125;
    }
    v126 = *(_QWORD *)(v122 + 280);
    v127 = 0LL;
    *(_QWORD *)(v126 + 104) = SpLineTo;
    v128 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpLineTo, v124) )
    {
      v130 = (__int64 *)PsGetThreadWin32Thread(v128);
      if ( v130 )
        v127 = *v130;
    }
    v131 = *(_QWORD *)(v127 + 280);
    v132 = 0LL;
    *(_QWORD *)(v131 + 112) = SpTransparentBlt;
    v133 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpTransparentBlt, v129) )
    {
      v135 = (__int64 *)PsGetThreadWin32Thread(v133);
      if ( v135 )
        v132 = *v135;
    }
    v136 = *(_QWORD *)(v132 + 280);
    v137 = 0LL;
    *(_QWORD *)(v136 + 120) = SpAlphaBlend;
    v138 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpAlphaBlend, v134) )
    {
      v140 = (__int64 *)PsGetThreadWin32Thread(v138);
      if ( v140 )
        v137 = *v140;
    }
    v141 = *(_QWORD *)(v137 + 280);
    v142 = 0LL;
    *(_QWORD *)(v141 + 128) = SpPlgBlt;
    v143 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpPlgBlt, v139) )
    {
      v145 = (__int64 *)PsGetThreadWin32Thread(v143);
      if ( v145 )
        v142 = *v145;
    }
    v146 = *(_QWORD *)(v142 + 280);
    v147 = 0LL;
    *(_QWORD *)(v146 + 136) = SpGradientFill;
    v148 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpGradientFill, v144) )
    {
      v150 = (__int64 *)PsGetThreadWin32Thread(v148);
      if ( v150 )
        v147 = *v150;
    }
    v151 = *(_QWORD *)(v147 + 280);
    v152 = 0LL;
    *(_QWORD *)(v151 + 152) = SpStretchBltROP;
    v153 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStretchBltROP, v149) )
    {
      v155 = (__int64 *)PsGetThreadWin32Thread(v153);
      if ( v155 )
        v152 = *v155;
    }
    *(_QWORD *)(*(_QWORD *)(v152 + 280) + 144LL) = SpSaveScreenBits;
    v156 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpSaveScreenBits, v154) )
    {
      v157 = (__int64 *)PsGetThreadWin32Thread(v156);
      if ( v157 )
        v8 = *v157;
    }
    *(_QWORD *)(*(_QWORD *)(v8 + 280) + 160LL) = SpDrawStream;
  }
  else
  {
    if ( !v5 )
    {
      v11 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v11 )
        v10 = *v11;
    }
    v12 = *(_QWORD *)(v10 + 280);
    v13 = 0LL;
    *(_QWORD *)(v12 + 32) = a1;
    v14 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
    {
      v16 = (__int64 *)PsGetThreadWin32Thread(v14);
      if ( v16 )
        v13 = *v16;
    }
    v17 = *(_QWORD *)(v13 + 280);
    v18 = 0LL;
    *(_QWORD *)(v17 + 40) = *((_QWORD *)a1 + 149);
    v19 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v15) )
    {
      v21 = (__int64 *)PsGetThreadWin32Thread(v19);
      if ( v21 )
        v18 = *v21;
    }
    v22 = *(_QWORD *)(v18 + 280);
    v23 = 0LL;
    *(_QWORD *)(v22 + 48) = *((_QWORD *)a1 + 150);
    v24 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v22, v20) )
    {
      v26 = (__int64 *)PsGetThreadWin32Thread(v24);
      if ( v26 )
        v23 = *v26;
    }
    v27 = *(_QWORD *)(v23 + 280);
    v28 = 0LL;
    *(_QWORD *)(v27 + 56) = *((_QWORD *)a1 + 151);
    v29 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v25) )
    {
      v31 = (__int64 *)PsGetThreadWin32Thread(v29);
      if ( v31 )
        v28 = *v31;
    }
    v32 = *(_QWORD *)(v28 + 280);
    v33 = 0LL;
    *(_QWORD *)(v32 + 72) = *((_QWORD *)a1 + 153);
    v34 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v30) )
    {
      v36 = (__int64 *)PsGetThreadWin32Thread(v34);
      if ( v36 )
        v33 = *v36;
    }
    v37 = *(_QWORD *)(v33 + 280);
    v38 = 0LL;
    *(_QWORD *)(v37 + 80) = *((_QWORD *)a1 + 154);
    v39 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v37, v35) )
    {
      v41 = (__int64 *)PsGetThreadWin32Thread(v39);
      if ( v41 )
        v38 = *v41;
    }
    v42 = *(_QWORD *)(v38 + 280);
    v43 = 0LL;
    *(_QWORD *)(v42 + 88) = *((_QWORD *)a1 + 155);
    v44 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v40) )
    {
      v46 = (__int64 *)PsGetThreadWin32Thread(v44);
      if ( v46 )
        v43 = *v46;
    }
    v47 = *(_QWORD *)(v43 + 280);
    v48 = 0LL;
    *(_QWORD *)(v47 + 96) = *((_QWORD *)a1 + 156);
    v49 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v47, v45) )
    {
      v51 = (__int64 *)PsGetThreadWin32Thread(v49);
      if ( v51 )
        v48 = *v51;
    }
    v52 = *(_QWORD *)(v48 + 280);
    v53 = 0LL;
    *(_QWORD *)(v52 + 104) = *((_QWORD *)a1 + 157);
    v54 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v52, v50) )
    {
      v56 = (__int64 *)PsGetThreadWin32Thread(v54);
      if ( v56 )
        v53 = *v56;
    }
    v57 = *(_QWORD *)(v53 + 280);
    v58 = 0LL;
    *(_QWORD *)(v57 + 112) = *((_QWORD *)a1 + 158);
    v59 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v57, v55) )
    {
      v61 = (__int64 *)PsGetThreadWin32Thread(v59);
      if ( v61 )
        v58 = *v61;
    }
    v62 = *(_QWORD *)(v58 + 280);
    v63 = 0LL;
    *(_QWORD *)(v62 + 120) = *((_QWORD *)a1 + 159);
    v64 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v62, v60) )
    {
      v66 = (__int64 *)PsGetThreadWin32Thread(v64);
      if ( v66 )
        v63 = *v66;
    }
    v67 = *(_QWORD *)(v63 + 280);
    v68 = 0LL;
    *(_QWORD *)(v67 + 128) = *((_QWORD *)a1 + 160);
    v69 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v67, v65) )
    {
      v71 = (__int64 *)PsGetThreadWin32Thread(v69);
      if ( v71 )
        v68 = *v71;
    }
    v72 = *(_QWORD *)(v68 + 280);
    v73 = 0LL;
    *(_QWORD *)(v72 + 136) = *((_QWORD *)a1 + 161);
    v74 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v72, v70) )
    {
      v76 = (__int64 *)PsGetThreadWin32Thread(v74);
      if ( v76 )
        v73 = *v76;
    }
    v77 = *(_QWORD *)(v73 + 280);
    v78 = 0LL;
    *(_QWORD *)(v77 + 152) = *((_QWORD *)a1 + 163);
    v79 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v77, v75) )
    {
      v81 = (__int64 *)PsGetThreadWin32Thread(v79);
      if ( v81 )
        v78 = *v81;
    }
    v82 = *(_QWORD *)(v78 + 280);
    *(_QWORD *)(v82 + 144) = *((_QWORD *)a1 + 162);
    v83 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v82, v80) )
    {
      v84 = (__int64 *)PsGetThreadWin32Thread(v83);
      if ( v84 )
        v8 = *v84;
    }
    *(_QWORD *)(*(_QWORD *)(v8 + 280) + 160LL) = *((_QWORD *)a1 + 164);
  }
}
