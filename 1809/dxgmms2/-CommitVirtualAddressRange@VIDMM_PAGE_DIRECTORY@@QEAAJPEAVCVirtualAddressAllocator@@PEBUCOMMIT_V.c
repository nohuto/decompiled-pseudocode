/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0073AE0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4AD4 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001E40 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00109F4 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027D3C (ExFreeToPagedLookasideList.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00593EC (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A5EC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00751C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00757A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075870 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0077F18 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00788FC (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0079A18 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0079B00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0079DE8 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C007E1D4 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C007E5B0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AB834 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B48D4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4AD4 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C00B53DC (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00B5A3C (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VA.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00B6394 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  enum _DXGK_PAGETABLEUPDATEMODE v9; // r13d
  __int64 v10; // r10
  VIDMM_PAGE_DIRECTORY *v13; // r12
  int v14; // r10d
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned int v17; // r8d
  __int64 v18; // rbx
  struct VIDMM_PROCESS *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r15
  int v23; // r8d
  unsigned int v24; // r9d
  __int64 v25; // rax
  char v26; // si
  char v27; // cl
  unsigned int v28; // eax
  __int64 v29; // rbx
  unsigned int v30; // r8d
  unsigned __int64 v31; // rdx
  struct COMMIT_VA_STATE *v32; // r11
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rcx
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v36; // r10
  __int64 v37; // r15
  __int64 v38; // rsi
  unsigned int v39; // r9d
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  unsigned int v42; // ecx
  unsigned __int64 v43; // rbp
  __int64 v44; // rcx
  struct CVirtualAddressAllocator *v45; // r10
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned int v48; // r10d
  char v49; // bp
  int v50; // edx
  struct VIDMM_ALLOC *v51; // rsi
  __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  int v56; // ecx
  char v57; // r9
  unsigned int v58; // r10d
  unsigned __int64 v59; // rsi
  struct CVirtualAddressAllocator *v60; // rdi
  unsigned int v61; // eax
  __int64 v62; // r10
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  VIDMM_PAGE_TABLE *v65; // rbx
  unsigned __int64 v66; // r12
  __int64 v67; // rdi
  __int64 v68; // rax
  int v69; // eax
  unsigned int v70; // r15d
  unsigned int v71; // r14d
  unsigned int v72; // r15d
  bool v73; // zf
  __int64 v74; // rax
  __int64 v75; // r8
  _QWORD *v76; // rdx
  int v77; // esi
  VIDMM_GLOBAL *v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  enum _DXGK_PAGETABLEUPDATEMODE v82; // eax
  void *v83; // rsi
  VIDMM_GLOBAL *v84; // r10
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // r14
  unsigned __int64 v88; // r13
  __int64 v89; // rsi
  unsigned int *v90; // rbx
  char *v91; // r9
  struct CVirtualAddressAllocator *v92; // r10
  VIDMM_GLOBAL *v93; // rdi
  __int64 v94; // rax
  int v95; // eax
  unsigned int v96; // r12d
  unsigned int v97; // r15d
  unsigned int v98; // r12d
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rdx
  VIDMM_GLOBAL *v102; // rsi
  int v103; // edi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  enum _DXGK_PAGETABLEUPDATEMODE v107; // eax
  void *v108; // rdi
  VIDMM_GLOBAL *v109; // r10
  int v110; // eax
  unsigned __int64 v111; // rdi
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v112; // rbx
  struct CVirtualAddressAllocator *v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r10
  unsigned __int64 v116; // rbx
  __int64 v117; // rdi
  _QWORD *v118; // r8
  __int64 v119; // rdi
  struct COMMIT_VA_STATE *v120; // rsi
  unsigned __int8 v121; // cl
  char v122; // r8
  unsigned __int64 v123; // rbp
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v124; // rbp
  __int64 result; // rax
  unsigned __int8 v126; // r8
  unsigned __int8 v127; // r9
  struct VIDMM_PAGE_TABLE *PageDirectory; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  char v131; // bl
  VIDMM_PAGE_TABLE *v132; // rcx
  unsigned __int64 v133; // r9
  int v134; // eax
  __int64 v135; // r10
  __int64 v136; // rdx
  char v137; // cl
  __int64 v138; // rcx
  char v139; // al
  unsigned int v140; // eax
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  unsigned __int64 v145; // rcx
  unsigned int v146; // edx
  struct _DXGK_PTE *v147; // r10
  unsigned __int64 v148; // rax
  struct VIDMM_ALLOC **v149; // rbx
  unsigned int v150; // r8d
  VIDMM_PAGE_TABLE *v151; // rcx
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rax
  unsigned __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rdx
  int v161; // r8d
  unsigned int v162; // ecx
  int v163; // eax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rbx
  _DWORD *v168; // rcx
  unsigned __int64 v169; // r8
  __int64 v170; // r11
  unsigned __int64 v171; // rbx
  unsigned __int64 v172; // rax
  _QWORD *v173; // r9
  bool v174; // cc
  unsigned int v175; // eax
  __int64 v176; // rcx
  __int64 v177; // rbp
  __int64 v178; // rsi
  _QWORD *v179; // r8
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rcx
  unsigned __int64 v186; // r8
  unsigned __int64 *v187; // rax
  __int64 v188; // rsi
  __int64 v189; // rbp
  _QWORD *v190; // r8
  __int64 v191; // rax
  __int64 *v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 **v195; // rax
  int v196; // eax
  VIDMM_PAGE_TABLE *v197; // rcx
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  struct VIDMM_ALLOC **v206; // [rsp+30h] [rbp-188h]
  struct VIDMM_ALLOC **v207; // [rsp+30h] [rbp-188h]
  char v208; // [rsp+38h] [rbp-180h]
  unsigned __int64 v209; // [rsp+38h] [rbp-180h]
  struct VIDMM_ALLOC **v210; // [rsp+40h] [rbp-178h]
  unsigned __int64 v211; // [rsp+78h] [rbp-140h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v212; // [rsp+80h] [rbp-138h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v213; // [rsp+80h] [rbp-138h]
  char v214; // [rsp+90h] [rbp-128h]
  unsigned __int8 v215; // [rsp+91h] [rbp-127h]
  char v216; // [rsp+92h] [rbp-126h]
  unsigned __int8 v217; // [rsp+93h] [rbp-125h] BYREF
  char v218; // [rsp+94h] [rbp-124h]
  char v219; // [rsp+95h] [rbp-123h]
  unsigned int v220[2]; // [rsp+98h] [rbp-120h]
  unsigned int v221; // [rsp+A0h] [rbp-118h]
  unsigned int v222; // [rsp+A4h] [rbp-114h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v223; // [rsp+A8h] [rbp-110h]
  char v224; // [rsp+B0h] [rbp-108h]
  unsigned int v225; // [rsp+B4h] [rbp-104h]
  unsigned __int64 v226; // [rsp+B8h] [rbp-100h]
  unsigned int v227; // [rsp+C0h] [rbp-F8h]
  struct VIDMM_ALLOC *v228; // [rsp+C8h] [rbp-F0h]
  unsigned int v229; // [rsp+D0h] [rbp-E8h]
  unsigned int v230; // [rsp+D4h] [rbp-E4h]
  __int64 v231; // [rsp+D8h] [rbp-E0h]
  unsigned int v232; // [rsp+E0h] [rbp-D8h]
  __int64 v233; // [rsp+E8h] [rbp-D0h]
  unsigned __int64 v234; // [rsp+F0h] [rbp-C8h]
  unsigned int v235; // [rsp+F8h] [rbp-C0h] BYREF
  unsigned int v236; // [rsp+FCh] [rbp-BCh] BYREF
  void *v237; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v238; // [rsp+108h] [rbp-B0h]
  unsigned __int64 v239; // [rsp+110h] [rbp-A8h]
  VIDMM_GLOBAL *v240; // [rsp+118h] [rbp-A0h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v241[2]; // [rsp+120h] [rbp-98h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+128h] [rbp-90h]
  struct VIDMM_ALLOC *VidMmAllocFromOwner; // [rsp+130h] [rbp-88h]
  unsigned __int64 v244; // [rsp+138h] [rbp-80h]
  __int64 v245; // [rsp+140h] [rbp-78h]
  void *v246; // [rsp+148h] [rbp-70h] BYREF
  void *v247; // [rsp+150h] [rbp-68h] BYREF
  __int64 v248; // [rsp+158h] [rbp-60h]
  void *v249; // [rsp+160h] [rbp-58h] BYREF
  unsigned __int64 v250; // [rsp+168h] [rbp-50h]
  struct COMMIT_VA_STATE *v253; // [rsp+1D0h] [rbp+18h] BYREF
  unsigned __int64 v254; // [rsp+1D8h] [rbp+20h]

  v254 = a4;
  v253 = a3;
  v9 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
  v10 = *(_QWORD *)a3;
  v234 = a4;
  v13 = this;
  *a9 = 0LL;
  v14 = v10 & 1;
  if ( !v14 )
  {
    v15 = *((_QWORD *)this + 1);
    if ( !v15 || !*(_QWORD *)(v15 + 136) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v205 = WdLogNewEntry5_WdAssertion(a5, a2);
    *(_QWORD *)(v205 + 24) = 5313LL;
    WdLogEvent5_WdAssertion(v205);
    return 3221225485LL;
  }
  v16 = a5 >> 12;
  v250 = a5 >> 12;
  v244 = a6 + (a5 >> 12);
  if ( v244 <= a5 >> 12 )
  {
    v155 = WdLogNewEntry5_WdAssertion(a5, a2);
    *(_QWORD *)(v155 + 24) = 5330LL;
    WdLogEvent5_WdAssertion(v155);
    return 3221225485LL;
  }
  v17 = *(_DWORD *)this;
  v240 = a2[10];
  v18 = *((_QWORD *)v240 + 5023);
  v19 = a2[11];
  v20 = (v17 >> 7) & 0x1F;
  VidMmGlobalAllocFromOwner = 0LL;
  v21 = 48LL * (v17 & 7);
  VidMmAllocFromOwner = 0LL;
  v245 = v18 + 1560 * v20;
  v22 = v21 + v245 + 88;
  v223 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)v22;
  v226 = (v16 & *(_QWORD *)(v22 + 16)) >> *(_QWORD *)(v22 + 24);
  v23 = v17 & 0x10;
  if ( v23 )
    v24 = *((_DWORD *)a2[14] + 8 * v20 + 4);
  else
    v24 = *(_DWORD *)(v21 + 1560 * v20 + v18 + 88);
  v222 = v24;
  if ( v23 && *((_QWORD *)v240 + 5115) )
  {
    v156 = a6 << 12;
    if ( v14 )
    {
      v206 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 4);
      VIDMM_GLOBAL::RecordVaPagingHistoryCommit(v240, v19, a5, v156, *((_DWORD *)a3 + 13), a7);
    }
    else
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v240, v19, a5, v156);
    }
    v24 = v222;
  }
  v25 = *((_QWORD *)v13 + 1);
  v26 = 0;
  v229 = 0;
  v227 = 0;
  v214 = 0;
  *(_QWORD *)v241 = 0LL;
  if ( v25 && *(_QWORD *)(v25 + 136) )
  {
    v27 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(v13, (struct CVirtualAddressAllocator *)a2, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)v13 &= ~0x10000u;
    v27 = 1;
    v24 = v222;
  }
  v28 = *(_DWORD *)v13;
  if ( (*(_DWORD *)v13 & 0x10000) == 0 )
  {
    v27 = 1;
    v241[0] = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
  }
  LODWORD(v29) = v226;
  if ( v27 )
  {
    if ( (_DWORD)v226 )
    {
      v152 = 0LL;
      v153 = (unsigned int)v226;
      do
      {
        v154 = *((_QWORD *)v13 + 3);
        v152 += 16LL;
        *(_QWORD *)(v152 + v154 - 16) = 0LL;
        *(_QWORD *)(v152 + v154 - 8) = 0LL;
        --v153;
      }
      while ( v153 );
      v28 = *(_DWORD *)v13;
    }
    v26 = 1;
    v227 = v24;
    v214 = 1;
  }
  v30 = 0;
  v31 = *(_QWORD *)(v22 + 40);
  v32 = v253;
  v33 = v16 & ~*(_QWORD *)(v22 + 32);
  *(_QWORD *)v220 = v16;
  v219 = 0;
  v232 = 0;
  v34 = v31 + v33;
  v35 = v31 + v33;
  if ( (v28 & 0x20) != 0 && *((_BYTE *)v253 + 57) )
  {
    if ( *((_BYTE *)v253 + 56) )
      v30 = v24;
    v232 = v30;
  }
  v36 = v223;
  LODWORD(v37) = 0;
  while ( 1 )
  {
    v224 = v26;
    if ( (unsigned int)v29 >= v24 )
      goto LABEL_277;
    v38 = v30 + (unsigned int)v29;
    v39 = v30 + v29;
    v215 = 0;
    v217 = 0;
    v218 = 0;
    v216 = 0;
    v225 = v30 + v29;
    v221 = v30 + v29;
    if ( *((_BYTE *)v32 + 58) && (*(_DWORD *)v13 & 0x20) != 0 )
    {
      v39 = v38 + v222;
      v216 = 1;
      if ( (_DWORD)v38 != (_DWORD)v29 )
        v39 = v29;
      v221 = v39;
    }
    if ( v35 >= v244 )
      v219 = 1;
    v40 = v244;
    v41 = *(_QWORD *)v32;
    if ( v35 < v244 )
      v40 = v35;
    v42 = v220[0];
    v239 = v40;
    v43 = v40 - *(_QWORD *)v220;
    v228 = (struct VIDMM_ALLOC *)(v40 - *(_QWORD *)v220);
    if ( (v41 & 1) == 0 )
    {
      v44 = *((_QWORD *)v13 + 3);
      if ( (*(_BYTE *)(v44 + 16LL * (unsigned int)v38) & 1) == 0 && (*(_BYTE *)(v44 + 16LL * v39) & 1) == 0 )
      {
LABEL_156:
        v120 = v253;
        goto LABEL_115;
      }
      v42 = v220[0];
    }
    if ( (v41 & 2) != 0 )
    {
      v157 = *((_QWORD *)v13 + 3);
      if ( (*(_BYTE *)(v157 + 16LL * (unsigned int)v38) & 2) != 0 )
      {
        v158 = (unsigned int)v38;
      }
      else
      {
        if ( !v216 || (*(_BYTE *)(v157 + 16LL * v39) & 2) == 0 )
        {
LABEL_202:
          v42 = v220[0];
          goto LABEL_37;
        }
        v158 = v39;
      }
      if ( (_DWORD)v158 != -1 && (((unsigned __int8)v41 ^ *(_BYTE *)(v157 + 16 * v158)) & 8) == 0 )
        goto LABEL_156;
      goto LABEL_202;
    }
LABEL_37:
    v45 = (struct CVirtualAddressAllocator *)a2;
    if ( v31 <= v43 && ((_DWORD)a2[17] & 4) == 0 )
    {
      if ( VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
             v13,
             (struct CVirtualAddressAllocator *)a2,
             *(const struct _DXGK_GPUMMUCAPS **)(v245 + 440),
             v32,
             v223,
             v38,
             v39,
             v42,
             a7,
             &v217) )
      {
        v159 = (unsigned int)v38;
        v120 = v253;
        if ( (*(_DWORD *)(*((_QWORD *)v13 + 3) + 16 * v159) & 0x400LL) != 0 )
        {
          VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(
                                                                      *((_DWORD *)v253 + 12),
                                                                      *((_QWORD *)v253 + 5));
          VidMmAllocFromOwner = (struct VIDMM_ALLOC *)GetVidMmAllocFromOwner(v161, v160);
        }
        v121 = v217;
        goto LABEL_113;
      }
      v32 = v253;
      v39 = v221;
      v45 = (struct CVirtualAddressAllocator *)a2;
      v215 = v217;
    }
    v46 = *((_QWORD *)v13 + 3);
    v47 = *(_QWORD *)(v46 + 16 * v38) & 0x400LL;
    if ( (*(_QWORD *)(v46 + 16 * v38) & 0x400) != 0 || v216 && (*(_DWORD *)(v46 + 16LL * v39) & 0x400LL) != 0 )
    {
      v162 = v38;
      if ( !v47 )
        v162 = v39;
      if ( *((_QWORD *)v223 + 5) <= v43 )
      {
        v167 = v162;
        ExFreeToPagedLookasideList(
          (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v45 + 10) + 40192LL),
          *(PVOID *)(*((_QWORD *)v13 + 4) + 8LL * v162));
        *(_QWORD *)(*((_QWORD *)v13 + 4) + 8 * v167) = 0LL;
        v29 = 2 * v167;
        *(_QWORD *)(*((_QWORD *)v13 + 3) + 8 * v29) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)v13 + 3) + 8 * v29) &= ~1uLL;
        --*((_DWORD *)v13 + 1);
        LODWORD(v29) = v226;
      }
      else
      {
        v124 = v223;
        v163 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
                 v13,
                 v45,
                 v223,
                 *((_BYTE *)v32 + 57),
                 (_DWORD)v33 << 12,
                 v162,
                 a9);
        v37 = v163;
        if ( v163 < 0 )
        {
          v166 = WdLogNewEntry5_WdWarning(v165, v164);
          *(_QWORD *)(v166 + 24) = v37;
          WdLogEvent5_WdWarning(v166);
          v122 = v214;
          v120 = v253;
          goto LABEL_118;
        }
      }
      v32 = v253;
      v218 = 1;
    }
    v48 = *(_DWORD *)v13;
    v49 = *((_BYTE *)v32 + 56);
    v50 = *(_DWORD *)v13 & 0x20;
    if ( !v50 || *((_DWORD *)v32 + 13) || !v49 )
    {
      v51 = v228;
      goto LABEL_44;
    }
    if ( !*((_BYTE *)v32 + 57) )
    {
      v168 = *(_DWORD **)(*((_QWORD *)v13 + 4) + 8 * v38);
      if ( v168 )
      {
        if ( v168[1] && (*v168 & 0x40) == 0 )
        {
          v51 = v228;
LABEL_226:
          v49 = 0;
          v225 = v29;
          if ( v216 )
            v221 = v29 + v222;
          goto LABEL_44;
        }
      }
    }
    v51 = v228;
    if ( ((unsigned __int8)v228 & 0xF) != 0 )
      goto LABEL_226;
    v169 = a7 >> 12;
    v170 = *((_QWORD *)v32 + 4) + 48LL;
    v171 = (a7 >> 12) + (unsigned int)v228;
    v172 = (unsigned int)(a7 >> 12);
    if ( v172 < v171 )
    {
      do
      {
        v173 = (_QWORD *)(v170 + 8 * v172);
        if ( (v169 & 0xF) != 0 )
        {
          if ( *v173 != *(_QWORD *)(v170 + 8LL * (unsigned int)(v169 - 1)) + 1LL )
            goto LABEL_225;
        }
        else if ( (*(_BYTE *)v173 & 0xF) != 0 )
        {
LABEL_225:
          v32 = v253;
          LODWORD(v29) = v226;
          goto LABEL_226;
        }
        LODWORD(v169) = v169 + 1;
        v172 = (unsigned int)v169;
      }
      while ( (unsigned int)v169 < v171 );
    }
    v32 = v253;
    v49 = 1;
LABEL_44:
    v52 = v225;
    if ( (*(_BYTE *)v32 & 1) == 0 && (*(_BYTE *)(*((_QWORD *)v13 + 3) + 16LL * v225) & 2) == 0
      || *(_QWORD *)(*((_QWORD *)v13 + 4) + 8LL * v225) )
    {
      goto LABEL_46;
    }
    if ( !v50 )
    {
      PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a2, (v48 >> 7) & 0x1F, (v48 & 7) - 1);
      goto LABEL_131;
    }
    if ( *((_BYTE *)v32 + 57) && v49 || *((_DWORD *)v32 + 13) == -3 )
    {
      v126 = 1;
    }
    else
    {
      v126 = 0;
      if ( v49 )
      {
        v127 = 1;
        goto LABEL_130;
      }
    }
    v127 = 0;
LABEL_130:
    PageDirectory = CreatePageTable((struct CVirtualAddressAllocator *)a2, (v48 >> 7) & 0x1F, v126, v127);
LABEL_131:
    v130 = *((_QWORD *)v13 + 4);
    *(_QWORD *)(v130 + 8 * v52) = PageDirectory;
    if ( !*(_QWORD *)(*((_QWORD *)v13 + 4) + 8 * v52) )
    {
      v198 = WdLogNewEntry5_WdAssertion(v130, v129);
      *(_QWORD *)(v198 + 24) = 5675LL;
      WdLogEvent5_WdAssertion(v198);
      LODWORD(v37) = -1073741801;
      goto LABEL_277;
    }
    v32 = v253;
LABEL_46:
    v53 = *((_QWORD *)v13 + 3);
    v233 = 16 * v52;
    v54 = *(_QWORD *)(v53 + 16 * v52);
    v55 = (unsigned __int8)v54;
    LOBYTE(v55) = (v54 & 1) == 0;
    v56 = v54 & 2;
    if ( v56 )
    {
      v58 = v221;
    }
    else
    {
      v57 = v55;
      if ( !v216 || (v58 = v221, (*(_BYTE *)(v53 + 16LL * v221) & 2) == 0) )
      {
        v59 = *(_QWORD *)v220;
        v60 = (struct CVirtualAddressAllocator *)a2;
        goto LABEL_50;
      }
    }
    v174 = *((_QWORD *)v223 + 5) <= (unsigned __int64)v51;
    v59 = *(_QWORD *)v220;
    if ( v174 )
    {
      v175 = v225;
      v60 = (struct CVirtualAddressAllocator *)a2;
      v57 = v55;
      if ( !v56 )
        v175 = v58;
      v176 = 2LL * v175;
      *(_QWORD *)(v53 + 8 * v176) &= ~2uLL;
      *(_QWORD *)(*((_QWORD *)v13 + 3) + 8 * v176) &= ~1uLL;
      --*((_DWORD *)v13 + 1);
      goto LABEL_240;
    }
    v209 = v33;
    v60 = (struct CVirtualAddressAllocator *)a2;
    LODWORD(v37) = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
                     v13,
                     (struct CVirtualAddressAllocator *)a2,
                     v32,
                     v225,
                     v58,
                     *(unsigned __int64 *)v220,
                     v239,
                     v209,
                     v34,
                     a9);
    if ( (int)v37 < 0 )
      break;
    v32 = v253;
    v57 = 0;
LABEL_240:
    v218 = 1;
LABEL_50:
    v61 = *(_DWORD *)v13;
    v62 = 8 * v52;
    v63 = *((_QWORD *)v13 + 4);
    v238 = 8 * v52;
    if ( (v61 & 0x20) == 0 )
    {
      v43 = (unsigned __int64)v228;
      v196 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
               *(VIDMM_PAGE_DIRECTORY **)(v62 + v63),
               v60,
               v32,
               v234,
               v59 << 12,
               (unsigned __int64)v228,
               a7,
               v57,
               a9);
      v32 = v253;
      LODWORD(v37) = v196;
LABEL_151:
      if ( (int)v37 < 0 )
        goto LABEL_282;
      goto LABEL_102;
    }
    v64 = v62 + v63;
    if ( (*(_BYTE *)v32 & 1) != 0 )
    {
      v131 = *((_BYTE *)v32 + 56);
      v132 = *(VIDMM_PAGE_TABLE **)v64;
      v210 = a9;
      v208 = v57;
      v133 = v234;
      v207 = (struct VIDMM_ALLOC **)a7;
      *((_BYTE *)v32 + 56) = v49;
      v43 = (unsigned __int64)v228;
      v134 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
               v132,
               v60,
               v32,
               v133,
               (_DWORD)v59 << 12,
               v228,
               (unsigned __int64)v207,
               v208,
               v210);
      v32 = v253;
      LODWORD(v37) = v134;
      *((_BYTE *)v253 + 56) = v131;
      goto LABEL_77;
    }
    v65 = *(VIDMM_PAGE_TABLE **)v64;
    v43 = (unsigned __int64)v228;
    if ( !*(_QWORD *)v64 || !*((_DWORD *)v65 + 1) )
      goto LABEL_77;
    v66 = v59 << 12;
    v55 = (unsigned __int64)v228 + (v59 & 0xFFFFFFFFFFFFFLL);
    if ( v55 <= (v59 & 0xFFFFFFFFFFFFFLL) )
    {
      LODWORD(v37) = -1073741811;
    }
    else
    {
      v67 = *((_QWORD *)v60 + 10);
      v68 = *((_QWORD *)v65 + 1);
      v64 = *(_QWORD *)(v67 + 40184) + 1560LL * ((*(_DWORD *)v65 >> 7) & 0x1F);
      if ( v68 && *(_QWORD *)(v68 + 136) )
      {
        v69 = *(_DWORD *)(v64 + 72);
        v70 = v69 & (v59 + (_DWORD)v228 - 1);
        v71 = v69 & v59;
        if ( (*(_DWORD *)v65 & 0x40) != 0 )
        {
          v71 >>= 4;
          v70 >>= 4;
          v66 &= 0xFFFFFFFFFFFF0000uLL;
        }
        v72 = v70 - v71 + 1;
        v73 = *(_QWORD *)(v67 + 40952) == 0LL;
        v230 = v72;
        if ( !v73 && v71 < v72 + v71 )
        {
          v177 = v72;
          v178 = 16LL * v71;
          do
          {
            v179 = (_QWORD *)(v178 + *((_QWORD *)v65 + 3));
            if ( (*v179 & 1) != 0 )
              VIDMM_GLOBAL::RecordPageMappingHistory(v67, (*v179 >> 5) & 0x1FLL, v179[1], 1LL, 1, 0LL, v206);
            v178 += 16LL;
            --v177;
          }
          while ( v177 );
          v72 = v230;
          v32 = v253;
          v43 = (unsigned __int64)v228;
          v59 = *(_QWORD *)v220;
        }
        if ( v71 < v72 + v71 )
        {
          v74 = 16LL * v71;
          v75 = v72;
          do
          {
            v76 = (_QWORD *)(v74 + *((_QWORD *)v65 + 3));
            v64 = *(unsigned __int8 *)v76;
            if ( (v64 & 1) != 0 )
            {
              --*((_DWORD *)v65 + 1);
              *v76 = 0LL;
              v64 = *((_QWORD *)v65 + 3);
              *(_QWORD *)(v74 + v64 + 8) = 0LL;
            }
            v74 += 16LL;
            --v75;
          }
          while ( v75 );
        }
        v55 = (unsigned __int64)a2;
        if ( *((_DWORD *)v65 + 1) || ((_DWORD)a2[17] & 4) != 0 )
        {
          if ( (*(_DWORD *)v65 & 0x40) != 0 )
            v77 = 8;
          else
            v77 = 0;
          v78 = a2[10];
          if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                      v65,
                      (struct CVirtualAddressAllocator *)a2,
                      &v235,
                      (unsigned __int64 *)&v246,
                      &v247) < 0 )
          {
            v180 = WdLogNewEntry5_WdError(v80, v79, v81);
            *(_QWORD *)(v180 + 24) = 3699LL;
            WdLogEvent5_WdError(v180);
            v183 = WdLogNewEntry5_WdAssertion(v182, v181);
            *(_QWORD *)(v183 + 24) = 6271LL;
            WdLogEvent5_WdAssertion(v183);
            v32 = v253;
            LODWORD(v37) = -1073741823;
            v59 = *(_QWORD *)v220;
            goto LABEL_76;
          }
          if ( (*((_BYTE *)v78 + 40872) & 0x10) != 0 )
            v82 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
          else
            v82 = (__int16)*(_DWORD *)v65 >> 13;
          v212 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v77;
          v83 = v246;
          VIDMM_GLOBAL::UpdatePageTable(
            v78,
            *(_DWORD *)v65 & 7,
            a2[11],
            0LL,
            0LL,
            0LL,
            0LL,
            v71,
            v72,
            0LL,
            0LL,
            (*(_DWORD *)v65 >> 7) & 0x1F,
            v235,
            (unsigned __int64)v246,
            v82,
            v66 >> 12,
            v212,
            0LL);
          v55 = (unsigned __int64)a2;
          v84 = a2[10];
          if ( (*((_BYTE *)v84 + 40872) & 0x10) != 0
            || (v64 = *(unsigned int *)v65, (v85 = (int)(*(_DWORD *)v65 << 16) >> 29) == 0) )
          {
            VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(v65, a2[10], v83, (struct _MDL *)v247);
          }
          else if ( v85 == 1 )
          {
            v64 = (v64 >> 7) & 0x1F;
            if ( *((VIDMM_GLOBAL ***)v84 + v64 + 5044) != a2 )
            {
              v184 = *((_QWORD *)v65 + 2) + 128LL;
              v55 = *(_QWORD *)v184;
              if ( *(_QWORD *)(*(_QWORD *)v184 + 8LL) != v184
                || (v185 = *(_QWORD *)v55, *(_QWORD *)(*(_QWORD *)v55 + 8LL) != v55)
                || (*(_QWORD *)v184 = v185,
                    *(_QWORD *)(v185 + 8) = v184,
                    *(_QWORD *)(v55 + 16) = *((_QWORD *)v84 + ((*(_DWORD *)v65 >> 7) & 0x1F) + 618),
                    v64 = 1560LL * ((*(_DWORD *)v65 >> 7) & 0x1F),
                    v186 = v64 + *((_QWORD *)v84 + 5023) + 464LL,
                    v187 = *(unsigned __int64 **)(v186 + 8),
                    *v187 != v186) )
              {
LABEL_278:
                __fastfail(3u);
              }
              *(_QWORD *)v55 = v186;
              *(_QWORD *)(v55 + 8) = v187;
              *v187 = v55;
              *(_QWORD *)(v186 + 8) = v55;
            }
          }
          v59 = *(_QWORD *)v220;
          v32 = v253;
        }
      }
      LODWORD(v37) = 0;
    }
LABEL_76:
    v13 = this;
LABEL_77:
    if ( !*((_BYTE *)v32 + 58) )
      goto LABEL_151;
    if ( (int)v37 < 0 )
      goto LABEL_282;
    v55 = v221;
    v86 = *((_QWORD *)v13 + 3);
    v87 = 16LL * v221;
    v248 = v87;
    v64 = *(unsigned __int8 *)(v87 + v86);
    if ( (v64 & 1) == 0 )
      goto LABEL_151;
    v64 = *((_QWORD *)v13 + 4);
    v88 = v59 << 12;
    v89 = 8LL * v221;
    v231 = v89;
    v90 = *(unsigned int **)(v64 + v89);
    v91 = (char *)((v88 >> 12) + v43);
    if ( (unsigned __int64)v91 <= v88 >> 12 )
    {
      LODWORD(v37) = -1073741811;
      goto LABEL_281;
    }
    v92 = (struct CVirtualAddressAllocator *)a2;
    v93 = a2[10];
    v94 = *((_QWORD *)v90 + 1);
    if ( v94 && *(_QWORD *)(v94 + 136) )
    {
      v95 = *(_DWORD *)(*((_QWORD *)v93 + 5023) + 1560LL * ((*v90 >> 7) & 0x1F) + 72);
      v96 = v95 & ((_DWORD)v91 - 1);
      v97 = v95 & (v88 >> 12);
      if ( (*v90 & 0x40) != 0 )
      {
        v97 >>= 4;
        v96 >>= 4;
        v88 &= 0xFFFFFFFFFFFF0000uLL;
      }
      v98 = v96 - v97 + 1;
      if ( *((_QWORD *)v93 + 5119) && v97 < v98 + v97 )
      {
        v188 = 16LL * v97;
        v189 = v98;
        do
        {
          v190 = (_QWORD *)(v188 + *((_QWORD *)v90 + 3));
          if ( (*v190 & 1) != 0 )
            VIDMM_GLOBAL::RecordPageMappingHistory(v93, (*v190 >> 5) & 0x1FLL, v190[1], 1LL, 1, 0LL, v206);
          v188 += 16LL;
          --v189;
        }
        while ( v189 );
        v87 = v248;
        v89 = v231;
        v32 = v253;
        v43 = (unsigned __int64)v228;
        v92 = (struct CVirtualAddressAllocator *)a2;
      }
      if ( v97 < v98 + v97 )
      {
        v99 = 16LL * v97;
        v100 = v98;
        do
        {
          v101 = *((_QWORD *)v90 + 3);
          if ( (*(_BYTE *)(v101 + v99) & 1) != 0 )
          {
            --v90[1];
            *(_QWORD *)(v101 + v99) = 0LL;
            *(_QWORD *)(v99 + *((_QWORD *)v90 + 3) + 8) = 0LL;
          }
          v99 += 16LL;
          --v100;
        }
        while ( v100 );
        v89 = v231;
      }
      if ( !v90[1] && (*((_DWORD *)v92 + 34) & 4) == 0 )
      {
        v9 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
LABEL_100:
        v13 = this;
        v64 = *((_QWORD *)this + 4);
        goto LABEL_101;
      }
      v102 = (VIDMM_GLOBAL *)*((_QWORD *)v92 + 10);
      v103 = (*v90 >> 3) & 8;
      if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                  (VIDMM_PAGE_TABLE_BASE *)v90,
                  v92,
                  &v236,
                  (unsigned __int64 *)&v249,
                  &v237) >= 0 )
      {
        if ( (*((_BYTE *)v102 + 40872) & 0x10) != 0 )
          v107 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
        else
          v107 = (__int16)*v90 >> 13;
        v213 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v103;
        v108 = v249;
        v211 = v88 >> 12;
        v9 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
        VIDMM_GLOBAL::UpdatePageTable(
          v102,
          *v90 & 7,
          a2[11],
          0LL,
          0LL,
          0LL,
          0LL,
          v97,
          v98,
          0LL,
          0LL,
          (*v90 >> 7) & 0x1F,
          v236,
          (unsigned __int64)v249,
          v107,
          v211,
          v213,
          0LL);
        v109 = a2[10];
        if ( (*((_BYTE *)v109 + 40872) & 0x10) != 0 || (v110 = (int)(*v90 << 16) >> 29) == 0 )
        {
          VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress((VIDMM_PAGE_TABLE_BASE *)v90, a2[10], v108, (struct _MDL *)v237);
          v32 = v253;
          v92 = (struct CVirtualAddressAllocator *)a2;
          v89 = v231;
        }
        else
        {
          if ( v110 == 1 && *((VIDMM_GLOBAL ***)v109 + (((unsigned __int64)*v90 >> 7) & 0x1F) + 5044) != a2 )
          {
            v191 = *((_QWORD *)v90 + 2) + 128LL;
            v192 = *(__int64 **)v191;
            if ( *(_QWORD *)(*(_QWORD *)v191 + 8LL) != v191 )
              goto LABEL_278;
            v193 = *v192;
            if ( *(__int64 **)(*v192 + 8) != v192 )
              goto LABEL_278;
            *(_QWORD *)v191 = v193;
            *(_QWORD *)(v193 + 8) = v191;
            v192[2] = *((_QWORD *)v109 + ((*v90 >> 7) & 0x1F) + 618);
            v194 = 1560LL * ((*v90 >> 7) & 0x1F) + *((_QWORD *)v109 + 5023) + 464LL;
            v195 = *(__int64 ***)(v194 + 8);
            if ( *v195 != (__int64 *)v194 )
              goto LABEL_278;
            *v192 = v194;
            v192[1] = (__int64)v195;
            *v195 = v192;
            *(_QWORD *)(v194 + 8) = v192;
          }
          v89 = v231;
          v32 = v253;
          v92 = (struct CVirtualAddressAllocator *)a2;
        }
        goto LABEL_100;
      }
      v199 = WdLogNewEntry5_WdError(v105, v104, v106);
      *(_QWORD *)(v199 + 24) = 3699LL;
      WdLogEvent5_WdError(v199);
      v202 = WdLogNewEntry5_WdAssertion(v201, v200);
      *(_QWORD *)(v202 + 24) = 6271LL;
      WdLogEvent5_WdAssertion(v202);
      v13 = this;
      LODWORD(v37) = -1073741823;
LABEL_281:
      v9 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
LABEL_282:
      v203 = WdLogNewEntry5_WdWarning(v64, v55);
      WdLogEvent5_WdWarning(v203);
LABEL_277:
      v120 = v253;
      v122 = v214;
LABEL_117:
      v124 = v223;
LABEL_118:
      v60 = (struct CVirtualAddressAllocator *)a2;
      goto LABEL_119;
    }
    v9 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
LABEL_101:
    LODWORD(v37) = 0;
    if ( !*(_DWORD *)(*(_QWORD *)(v64 + v89) + 4LL) )
    {
      v112 = v223;
      v111 = *(_QWORD *)v220;
      if ( (*((_DWORD *)v92 + 34) & 4) == 0 )
      {
        --*((_DWORD *)v13 + 1);
        v141 = *((_QWORD *)v13 + 3);
        v215 = 1;
        *(_QWORD *)(v87 + v141) = 0LL;
        *(_QWORD *)(v87 + v141 + 8) = 0LL;
        VIDMM_PAGE_TABLE::DestroyPageTable(
          *(VIDMM_PAGE_TABLE **)(v89 + *((_QWORD *)v13 + 4)),
          v92,
          v111 & ~*((_QWORD *)v112 + 4));
        v32 = v253;
        *(_QWORD *)(v89 + *((_QWORD *)v13 + 4)) = 0LL;
      }
      goto LABEL_103;
    }
LABEL_102:
    v111 = *(_QWORD *)v220;
    v112 = v223;
LABEL_103:
    if ( (*(_BYTE *)v32 & 1) != 0 )
    {
      v135 = v233;
      if ( (*(_DWORD *)v13 & 0x20) == 0
        || *((_BYTE *)v32 + 57)
        || (v136 = *((_QWORD *)v13 + 3),
            ((**(_DWORD **)(v238 + *((_QWORD *)v13 + 4)) >> 6) & 1) == ((*(_DWORD *)(v136 + v233) & 0x60000) == 0x20000LL)) )
      {
        v136 = *((_QWORD *)v13 + 3);
        v137 = 0;
      }
      else
      {
        v137 = 1;
      }
      if ( (*(_QWORD *)(v136 + v233) & 1) == 0 || v137 || v218 )
      {
        if ( (*(_QWORD *)(v136 + v233) & 1LL) == 0 )
        {
          *(_QWORD *)(v136 + v233) |= 1uLL;
          ++*((_DWORD *)v13 + 1);
          v136 = *((_QWORD *)v13 + 3);
        }
        *(_QWORD *)(v136 + v135) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)v13 + 3) + v135) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)v13 + 3) + v135) &= ~8uLL;
        if ( v216 )
        {
          v138 = 2LL * v221;
          *(_QWORD *)(*((_QWORD *)v13 + 3) + 8 * v138) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)v13 + 3) + 8 * v138) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)v13 + 3) + 8 * v138) &= ~8uLL;
        }
        VIDMM_PAGE_DIRECTORY::SetPageTableInPde(v13, (struct CVirtualAddressAllocator *)a2, v225);
        v120 = v253;
        LODWORD(v29) = v226;
        goto LABEL_145;
      }
    }
    else
    {
      if ( v218 )
        v215 = 1;
      v113 = (struct CVirtualAddressAllocator *)a2;
      if ( ((_DWORD)a2[17] & 4) == 0 )
      {
        v114 = *((_QWORD *)v13 + 3);
        v115 = v233;
        v116 = v111 & ~*((_QWORD *)v112 + 4);
        if ( (*(_BYTE *)(v114 + v233) & 1) != 0 )
        {
          v117 = v238;
          if ( !*(_DWORD *)(*(_QWORD *)(v238 + *((_QWORD *)v13 + 4)) + 4LL) )
          {
            --*((_DWORD *)v13 + 1);
            *(_QWORD *)(v114 + v115) = 0LL;
            *(_QWORD *)(v114 + v115 + 8) = 0LL;
            v151 = *(VIDMM_PAGE_TABLE **)(v117 + *((_QWORD *)v13 + 4));
            if ( (*(_DWORD *)v13 & 0x20) != 0 )
              VIDMM_PAGE_TABLE::DestroyPageTable(v151, (struct CVirtualAddressAllocator *)a2, v116);
            else
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
                v151,
                (struct CVirtualAddressAllocator *)a2,
                v116,
                (unsigned __int8)a2);
            v113 = (struct CVirtualAddressAllocator *)a2;
            v215 = 1;
            *(_QWORD *)(v117 + *((_QWORD *)v13 + 4)) = 0LL;
          }
        }
        if ( v221 != v225 )
        {
          v118 = (_QWORD *)(16LL * v221 + *((_QWORD *)v13 + 3));
          if ( (*(_BYTE *)v118 & 1) != 0 )
          {
            v119 = 8LL * v221;
            if ( !*(_DWORD *)(*(_QWORD *)(v119 + *((_QWORD *)v13 + 4)) + 4LL) )
            {
              --*((_DWORD *)v13 + 1);
              *v118 = 0LL;
              v118[1] = 0LL;
              v197 = *(VIDMM_PAGE_TABLE **)(v119 + *((_QWORD *)v13 + 4));
              if ( (*(_DWORD *)v13 & 0x20) != 0 )
                VIDMM_PAGE_TABLE::DestroyPageTable(v197, v113, v116);
              else
                VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v197, v113, v116, (unsigned __int8)v113);
              v120 = v253;
              LODWORD(v29) = v226;
              *(_QWORD *)(v119 + *((_QWORD *)v13 + 4)) = 0LL;
              goto LABEL_145;
            }
          }
        }
      }
    }
    v120 = v253;
    LODWORD(v29) = v226;
    v121 = v215;
LABEL_113:
    if ( !v121 )
    {
      v36 = v223;
LABEL_115:
      v122 = v214;
      goto LABEL_116;
    }
LABEL_145:
    v36 = v223;
    v139 = v214;
    if ( !v214 )
      v139 = 1;
    v122 = v139;
    v214 = v139;
    v140 = v29;
    if ( v224 )
      v140 = v229;
    v229 = v140;
    if ( (unsigned int)v29 >= v227 )
    {
      v229 = v140;
      v227 = v29 + 1;
    }
LABEL_116:
    v29 = (unsigned int)(v29 + 1);
    v31 = *((_QWORD *)v36 + 5);
    v33 = v239;
    v123 = v43 << 12;
    a7 += v123;
    v234 += v123;
    v35 = v239 + v31;
    v34 = v239 + v31;
    v226 = v29;
    *(_QWORD *)v220 = v239;
    if ( v219 )
      goto LABEL_117;
    v32 = v253;
    v30 = v232;
    v24 = v222;
    v26 = v214;
  }
  v120 = v253;
  v124 = v223;
  v122 = v214;
LABEL_119:
  if ( v122 )
  {
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v13,
                v60,
                (unsigned int *)&v253,
                (unsigned __int64 *)&a9,
                &v237) >= 0 )
    {
      v145 = *((_QWORD *)v124 + 5) * v229 + (v250 & ~(*((_QWORD *)v124 + 2) | *((_QWORD *)v124 + 4)));
      v146 = *(_DWORD *)v13;
      if ( *((_BYTE *)v120 + 57) && (v146 & 0x20) != 0 )
        v147 = (struct _DXGK_PTE *)(*((_QWORD *)v13 + 3) + 16LL * (v229 + v222));
      else
        v147 = 0LL;
      if ( (*((_BYTE *)v240 + 40872) & 0x10) == 0 )
        v9 = (__int16)v146 >> 13;
      v148 = *((_QWORD *)v120 + 8);
      v227 -= v229;
      v149 = a9;
      VIDMM_GLOBAL::UpdatePageTable(
        v240,
        v146 & 7,
        *((struct VIDMM_PROCESS **)v60 + 11),
        *((_QWORD *)v120 + 2),
        VidMmAllocFromOwner,
        VidMmGlobalAllocFromOwner,
        v254 + (v145 << 12) - (v250 << 12),
        v229,
        v227,
        (struct _DXGK_PTE *)(*((_QWORD *)v13 + 3) + 16LL * v229),
        v147,
        (v146 >> 7) & 0x1F,
        (unsigned int)v253,
        (unsigned __int64)a9,
        v9,
        v145,
        v241[0],
        v148);
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(v13, v60, v150, (unsigned __int64)v149, v237);
      *(_DWORD *)v13 |= 0x10000u;
      goto LABEL_120;
    }
    v204 = WdLogNewEntry5_WdError(v143, v142, v144);
    *(_QWORD *)(v204 + 24) = 5945LL;
    WdLogEvent5_WdError(v204);
    return 3221225473LL;
  }
  else
  {
LABEL_120:
    if ( !*((_DWORD *)v13 + 1) && (*((_DWORD *)v60 + 34) & 4) == 0 )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v13, v60, a5 & ~*((_QWORD *)v124 + 4), 1u, 1);
    return (unsigned int)v37;
  }
}
