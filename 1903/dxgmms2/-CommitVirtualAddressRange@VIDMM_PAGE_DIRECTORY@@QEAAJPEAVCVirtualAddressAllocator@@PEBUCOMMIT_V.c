/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006E2C0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DB80 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006E0D0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006E2C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B7F88 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00028CC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C002557C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027840 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C714 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060020 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00600F0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006041C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C006106C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C006D97C (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C006DB2C (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006E2C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C006F660 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C006FC70 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FE00 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C00703BC (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0080990 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C0080BF0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C0083CFC (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AEE10 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z @ 0x1C00B7AC0 (-CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B7D88 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B7F88 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00B8CBC (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VA.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00B9614 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
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
  VIDMM_PAGE_DIRECTORY *v12; // rbp
  int v13; // r10d
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rbx
  struct VIDMM_PROCESS *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r9
  unsigned __int64 v21; // r14
  struct CVirtualAddressAllocator *v22; // rcx
  int v23; // r8d
  unsigned int v24; // r9d
  __int64 v25; // rax
  int v26; // ebx
  char v27; // cl
  unsigned int v28; // eax
  unsigned int v29; // r11d
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v30; // r8
  unsigned __int64 v31; // r9
  struct COMMIT_VA_STATE *v32; // r10
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  unsigned int v35; // edi
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rcx
  __int64 v38; // r12
  unsigned int v39; // r11d
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r14
  __int64 v44; // rcx
  VIDMM_PAGE_DIRECTORY *v45; // rdi
  __int64 v46; // rbp
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int8 v49; // r14
  unsigned int v50; // r11d
  struct COMMIT_VA_STATE *v51; // rax
  int v52; // r10d
  unsigned int v53; // ecx
  __int64 v54; // rdi
  __int64 v55; // r9
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  int v58; // ecx
  char v59; // r8
  unsigned int v60; // r10d
  struct COMMIT_VA_STATE *v61; // rsi
  int v62; // eax
  __int64 v63; // r15
  __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  VIDMM_PAGE_TABLE *v66; // rdi
  unsigned __int64 v67; // r8
  struct CVirtualAddressAllocator *v68; // r11
  VIDMM_GLOBAL *v69; // rsi
  __int64 v70; // rax
  int v71; // eax
  unsigned int v72; // r12d
  unsigned int v73; // r15d
  unsigned int v74; // r12d
  __int64 v75; // rax
  __int64 v76; // r8
  int v77; // ebp
  VIDMM_GLOBAL *v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v83; // eax
  void *v84; // rbp
  int v85; // eax
  unsigned int v86; // esi
  __int64 v87; // rdi
  __int64 v88; // rsi
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v89; // rdi
  _QWORD *v90; // rdx
  unsigned __int64 v91; // rdi
  unsigned __int8 v92; // r9
  _QWORD *v93; // r8
  __int64 v94; // rdx
  __int64 v95; // rsi
  __int64 v96; // r11
  __int64 v97; // rdx
  char v98; // cl
  unsigned __int64 v99; // r14
  struct CVirtualAddressAllocator *v100; // r14
  __int64 result; // rax
  unsigned __int8 v102; // r8
  char v103; // r9
  struct VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  char v107; // di
  int v108; // eax
  unsigned __int64 v109; // r9
  VIDMM_PAGE_TABLE *v110; // rcx
  struct COMMIT_VA_STATE *v111; // r8
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rcx
  char v115; // al
  unsigned int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  unsigned __int64 v121; // rcx
  unsigned int v122; // edx
  struct _DXGK_PTE *v123; // r10
  unsigned __int64 v124; // rax
  struct VIDMM_ALLOC **v125; // rbx
  __int64 v126; // r8
  struct VIDMM_ALLOC **v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rax
  unsigned __int8 v131; // al
  __int64 v132; // rax
  unsigned __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  int v137; // r8d
  unsigned int v138; // ecx
  int v139; // eax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rdi
  _DWORD *v144; // rcx
  unsigned int v145; // eax
  __int64 v146; // rcx
  __int64 v147; // rbp
  __int64 v148; // r14
  __int64 v149; // r8
  unsigned __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rax
  unsigned __int64 *v156; // r8
  unsigned __int64 v157; // rcx
  unsigned __int64 **v158; // rax
  struct VIDMM_ALLOC **v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  struct VIDMM_ALLOC **v164; // [rsp+30h] [rbp-168h]
  struct VIDMM_ALLOC **v165; // [rsp+30h] [rbp-168h]
  char v166; // [rsp+38h] [rbp-160h]
  unsigned __int64 v167; // [rsp+38h] [rbp-160h]
  struct VIDMM_ALLOC **v168; // [rsp+40h] [rbp-158h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v169; // [rsp+80h] [rbp-118h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v170; // [rsp+80h] [rbp-118h]
  unsigned __int8 v171; // [rsp+90h] [rbp-108h]
  char v172; // [rsp+91h] [rbp-107h]
  char v173; // [rsp+92h] [rbp-106h]
  unsigned __int8 v174; // [rsp+93h] [rbp-105h] BYREF
  char v175; // [rsp+94h] [rbp-104h]
  unsigned int v176; // [rsp+98h] [rbp-100h]
  unsigned int v177; // [rsp+9Ch] [rbp-FCh]
  char v178; // [rsp+A0h] [rbp-F8h]
  unsigned int v179; // [rsp+A4h] [rbp-F4h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v180; // [rsp+A8h] [rbp-F0h]
  char v181; // [rsp+B0h] [rbp-E8h]
  unsigned int v182; // [rsp+B4h] [rbp-E4h]
  unsigned __int64 v183; // [rsp+B8h] [rbp-E0h]
  unsigned int v184; // [rsp+C0h] [rbp-D8h]
  struct VIDMM_ALLOC *v185; // [rsp+C8h] [rbp-D0h]
  unsigned __int64 v186; // [rsp+D0h] [rbp-C8h]
  unsigned int v187; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v188; // [rsp+E0h] [rbp-B8h]
  __int64 v189; // [rsp+E8h] [rbp-B0h]
  __int64 v190; // [rsp+F0h] [rbp-A8h]
  unsigned __int64 v191; // [rsp+F8h] [rbp-A0h]
  unsigned int v192; // [rsp+100h] [rbp-98h]
  unsigned int v193; // [rsp+104h] [rbp-94h] BYREF
  void *v194; // [rsp+108h] [rbp-90h] BYREF
  unsigned __int64 v195; // [rsp+110h] [rbp-88h]
  unsigned int v196[2]; // [rsp+118h] [rbp-80h]
  VIDMM_GLOBAL *v197; // [rsp+120h] [rbp-78h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+128h] [rbp-70h]
  struct VIDMM_ALLOC *VidMmAllocFromOwner; // [rsp+130h] [rbp-68h]
  unsigned __int64 v200; // [rsp+138h] [rbp-60h]
  __int64 v201; // [rsp+140h] [rbp-58h]
  void *v202; // [rsp+148h] [rbp-50h] BYREF
  struct COMMIT_VA_STATE *v205; // [rsp+1B0h] [rbp+18h] BYREF
  unsigned __int64 v206; // [rsp+1B8h] [rbp+20h]

  v206 = a4;
  v205 = a3;
  v9 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
  v10 = *(_QWORD *)a3;
  v191 = a4;
  v12 = this;
  *a9 = 0LL;
  v13 = v10 & 1;
  if ( !v13 )
  {
    v14 = *((_QWORD *)this + 1);
    if ( !v14 || !*(_QWORD *)(v14 + 136) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v163 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v163 + 24) = 5326LL;
    WdLogEvent5_WdAssertion(v163);
    return 3221225485LL;
  }
  v15 = a5 >> 12;
  *(_QWORD *)v196 = a5 >> 12;
  v200 = (a5 >> 12) + a6;
  if ( v200 <= a5 >> 12 )
  {
    v132 = WdLogNewEntry5_WdAssertion(v15, a2);
    *(_QWORD *)(v132 + 24) = 5343LL;
    WdLogEvent5_WdAssertion(v132);
    return 3221225485LL;
  }
  v16 = *(_DWORD *)v12;
  v197 = a2[10];
  v17 = *((_QWORD *)v197 + 5023);
  v18 = a2[11];
  VidMmGlobalAllocFromOwner = 0LL;
  v19 = (v16 >> 7) & 0x1F;
  v20 = 48LL * (v16 & 7);
  VidMmAllocFromOwner = 0LL;
  v201 = v17 + 1560 * v19;
  v180 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v20 + v201 + 88);
  v21 = (v15 & *((_QWORD *)v180 + 2)) >> *((_QWORD *)v180 + 3);
  v22 = (struct CVirtualAddressAllocator *)a2;
  v188 = v21;
  v23 = v16 & 0x10;
  if ( v23 )
    v24 = *((_DWORD *)a2[14] + 8 * v19 + 4);
  else
    v24 = *(_DWORD *)(v20 + 1560 * v19 + v17 + 88);
  v177 = v24;
  if ( v23 && *((_QWORD *)v197 + 5115) )
  {
    v133 = a6 << 12;
    if ( v13 )
    {
      v164 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 4);
      VIDMM_GLOBAL::RecordVaPagingHistoryCommit(v197, v18, a5, v133, *((_DWORD *)a3 + 13), a7);
    }
    else
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v197, v18, a5, v133);
    }
    v24 = v177;
    v22 = (struct CVirtualAddressAllocator *)a2;
  }
  v25 = *((_QWORD *)v12 + 1);
  v26 = 0;
  v184 = 0;
  v182 = 0;
  v173 = 0;
  if ( v25 && *(_QWORD *)(v25 + 136) )
  {
    v27 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(v12, v22, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)v12 &= ~0x10000u;
    v27 = 1;
    v24 = v177;
  }
  v28 = *(_DWORD *)v12;
  if ( (*(_DWORD *)v12 & 0x10000) == 0 )
  {
    v27 = 1;
    v26 = 2;
  }
  if ( v27 )
  {
    if ( (_DWORD)v21 )
    {
      v128 = 0LL;
      v129 = (unsigned int)v21;
      do
      {
        v130 = *((_QWORD *)v12 + 3);
        v128 += 16LL;
        *(_QWORD *)(v128 + v130 - 16) = 0LL;
        *(_QWORD *)(v128 + v130 - 8) = 0LL;
        --v129;
      }
      while ( v129 );
      v28 = *(_DWORD *)v12;
    }
    v182 = v24;
    v173 = 1;
  }
  v29 = 0;
  v30 = v180;
  v31 = *(_QWORD *)v196;
  v32 = v205;
  v183 = *(_QWORD *)v196;
  v178 = 0;
  v33 = *((_QWORD *)v180 + 5);
  v34 = *(_QWORD *)v196 & ~*((_QWORD *)v180 + 4);
  v187 = 0;
  v35 = v177;
  v36 = v33 + v34;
  v37 = v33 + v34;
  if ( (v28 & 0x20) != 0 && *((_BYTE *)v205 + 57) )
  {
    if ( *((_BYTE *)v205 + 56) )
      v29 = v177;
    v187 = v29;
  }
  LODWORD(v38) = 0;
  while ( 1 )
  {
    v181 = v173;
    if ( (unsigned int)v21 >= v35 )
    {
LABEL_107:
      v61 = v205;
      v100 = (struct CVirtualAddressAllocator *)a2;
      goto LABEL_108;
    }
    v39 = v21 + v29;
    v171 = 0;
    v174 = 0;
    v175 = 0;
    v172 = 0;
    v179 = v39;
    v176 = v39;
    if ( *((_BYTE *)v32 + 58) && (*(_DWORD *)v12 & 0x20) != 0 )
    {
      v172 = 1;
      v40 = v39 + v35;
      if ( v39 != (_DWORD)v21 )
        v40 = v21;
      v176 = v40;
    }
    if ( v37 >= v200 )
      v178 = 1;
    v41 = *(_QWORD *)v32;
    v42 = v200;
    if ( v37 < v200 )
      v42 = v37;
    v186 = v42;
    v43 = v42 - v31;
    v185 = (struct VIDMM_ALLOC *)(v42 - v31);
    if ( (v41 & 1) != 0 )
      break;
    v44 = *((_QWORD *)v12 + 3);
    if ( (*(_BYTE *)(v44 + 16LL * v39) & 1) != 0 || (*(_BYTE *)(v44 + 16LL * v176) & 1) != 0 )
      break;
LABEL_106:
    v30 = v180;
    v31 = v42;
    LODWORD(v188) = v188 + 1;
    v34 = v42;
    v99 = v43 << 12;
    a7 += v99;
    v33 = *((_QWORD *)v180 + 5);
    v191 += v99;
    v183 = v42;
    v37 = v42 + v33;
    v35 = v177;
    v36 = v37;
    if ( v178 )
      goto LABEL_107;
    LODWORD(v21) = v188;
    v29 = v187;
  }
  if ( (v41 & 2) != 0 )
  {
    v134 = *((_QWORD *)v12 + 3);
    if ( (*(_BYTE *)(v134 + 16LL * v39) & 2) != 0 )
    {
      v135 = v39;
    }
    else
    {
      if ( !v172 || (*(_BYTE *)(v134 + 16LL * v176) & 2) == 0 )
        goto LABEL_36;
      v135 = v176;
    }
    if ( (_DWORD)v135 != -1 && (((unsigned __int8)v41 ^ *(_BYTE *)(v134 + 16 * v135)) & 8) == 0 )
      goto LABEL_106;
  }
LABEL_36:
  if ( v33 <= v43 && ((_DWORD)a2[17] & 4) == 0 )
  {
    v131 = VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
             v12,
             (struct CVirtualAddressAllocator *)a2,
             *(const struct _DXGK_GPUMMUCAPS **)(v201 + 440),
             v32,
             v180,
             v39,
             v176,
             v31,
             a7,
             &v174);
    v32 = v205;
    if ( v131 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v12 + 3) + 16LL * v179) & 0x400LL) != 0 )
      {
        VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(
                                                                    *((_DWORD *)v205 + 12),
                                                                    *((_QWORD *)v205 + 5));
        VidMmAllocFromOwner = (struct VIDMM_ALLOC *)GetVidMmAllocFromOwner(v137, v136);
      }
      v92 = v174;
LABEL_105:
      if ( !v92 )
        goto LABEL_106;
      goto LABEL_138;
    }
    v39 = v179;
    v171 = v174;
  }
  v45 = this;
  v46 = v39;
  v47 = *((_QWORD *)this + 3);
  v48 = *(_QWORD *)(v47 + 16LL * v39) & 0x400LL;
  if ( (*(_QWORD *)(v47 + 16LL * v39) & 0x400) != 0 || v172 && (*(_DWORD *)(v47 + 16LL * v176) & 0x400LL) != 0 )
  {
    v138 = v39;
    if ( !v48 )
      v138 = v176;
    if ( *((_QWORD *)v180 + 5) <= v43 )
    {
      v143 = v138;
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a2[10] + 314, *(PVOID *)(*((_QWORD *)this + 4) + 8LL * v138));
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v143) = 0LL;
      v143 *= 2LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v143) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v143) &= ~1uLL;
      v45 = this;
      --*((_DWORD *)this + 1);
    }
    else
    {
      v100 = (struct CVirtualAddressAllocator *)a2;
      v139 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
               this,
               (struct CVirtualAddressAllocator *)a2,
               v180,
               *((_BYTE *)v32 + 57),
               (_DWORD)v34 << 12,
               v138,
               a9);
      v38 = v139;
      if ( v139 < 0 )
      {
        v142 = WdLogNewEntry5_WdWarning(v141, v140);
        *(_QWORD *)(v142 + 24) = v38;
        WdLogEvent5_WdWarning(v142);
        v12 = this;
        v61 = v205;
        goto LABEL_243;
      }
    }
    v32 = v205;
    v175 = 1;
  }
  v49 = *((_BYTE *)v32 + 56);
  v50 = *(_DWORD *)v45;
  v51 = v205;
  v52 = *(_DWORD *)v45 & 0x20;
  if ( !v52 || *((_DWORD *)v205 + 13) || !v49 )
    goto LABEL_42;
  if ( *((_BYTE *)v205 + 57)
    || (v144 = *(_DWORD **)(*((_QWORD *)v45 + 4) + 8 * v46)) == 0LL
    || !v144[1]
    || (*v144 & 0x40) != 0 )
  {
    if ( ((unsigned __int8)v185 & 0xF) != 0 )
    {
      v49 = 0;
      goto LABEL_201;
    }
    v49 = CheckContiguousSysMem(*((struct _MDL **)v205 + 4), (unsigned int)v185, a7 >> 12);
    if ( !v49 )
      goto LABEL_201;
    v51 = v205;
LABEL_42:
    v53 = v179;
    goto LABEL_43;
  }
  v49 = 0;
LABEL_201:
  v53 = v188;
  v179 = v188;
  if ( v172 )
    v176 = v177 + v188;
  v51 = v205;
LABEL_43:
  v12 = this;
  v54 = v53;
  if ( (*(_BYTE *)v51 & 1) == 0 && (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * v53) & 2) == 0
    || *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v53) )
  {
    goto LABEL_45;
  }
  if ( v52 )
  {
    if ( *((_BYTE *)v205 + 57) && v49 || *((_DWORD *)v205 + 13) == -3 )
    {
      v102 = 1;
    }
    else
    {
      v102 = 0;
      if ( v49 )
      {
        v103 = 1;
        goto LABEL_119;
      }
    }
    v103 = 0;
LABEL_119:
    PageTable = CreatePageTable((struct CVirtualAddressAllocator *)a2, (v50 >> 7) & 0x1F, v102, v103);
    goto LABEL_120;
  }
  PageTable = CreatePageDirectory((struct CVirtualAddressAllocator *)a2, (v50 >> 7) & 0x1F, (v50 & 7) - 1);
LABEL_120:
  v106 = *((_QWORD *)this + 4);
  *(_QWORD *)(v106 + 8 * v54) = PageTable;
  if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v54) )
  {
    v160 = WdLogNewEntry5_WdAssertion(v106, v105);
    *(_QWORD *)(v160 + 24) = 5688LL;
    WdLogEvent5_WdAssertion(v160);
    LODWORD(v38) = -1073741801;
    goto LABEL_241;
  }
LABEL_45:
  v55 = *((_QWORD *)this + 3);
  v190 = 16 * v54;
  v56 = *(_QWORD *)(v55 + 16 * v54);
  v57 = (unsigned __int8)v56;
  LOBYTE(v57) = (v56 & 1) == 0;
  v58 = v56 & 2;
  if ( v58 )
  {
    v60 = v176;
  }
  else
  {
    v59 = v57;
    if ( !v172 || (v60 = v176, (*(_BYTE *)(v55 + 16LL * v176) & 2) == 0) )
    {
      v61 = v205;
      goto LABEL_49;
    }
  }
  if ( *((_QWORD *)v180 + 5) <= (unsigned __int64)v185 )
  {
    v145 = v179;
    v61 = v205;
    v59 = v57;
    if ( !v58 )
      v145 = v60;
    v146 = 2LL * v145;
    *(_QWORD *)(v55 + 8 * v146) &= ~2uLL;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v146) &= ~1uLL;
    --*((_DWORD *)this + 1);
  }
  else
  {
    v167 = v34;
    v61 = v205;
    LODWORD(v38) = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
                     this,
                     (struct CVirtualAddressAllocator *)a2,
                     v205,
                     v179,
                     v60,
                     v183,
                     v186,
                     v167,
                     v36,
                     a9);
    if ( (int)v38 < 0 )
      goto LABEL_242;
    v59 = 0;
  }
  v175 = 1;
LABEL_49:
  v62 = *(_DWORD *)this;
  v63 = 8 * v54;
  v64 = *((_QWORD *)this + 4);
  v189 = 8 * v54;
  if ( (v62 & 0x20) == 0 )
  {
    v43 = (unsigned __int64)v185;
    LODWORD(v38) = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                     *(VIDMM_PAGE_DIRECTORY **)(v63 + v64),
                     (struct CVirtualAddressAllocator *)a2,
                     v61,
                     v191,
                     v183 << 12,
                     (unsigned __int64)v185,
                     a7,
                     v59,
                     a9);
    goto LABEL_82;
  }
  v32 = v205;
  v65 = v63 + v64;
  if ( (*(_BYTE *)v205 & 1) != 0 )
  {
    v107 = *((_BYTE *)v205 + 56);
    v108 = v183;
    v109 = v191;
    v110 = *(VIDMM_PAGE_TABLE **)v65;
    v168 = a9;
    v166 = v59;
    v111 = v205;
    v165 = (struct VIDMM_ALLOC **)a7;
    *((_BYTE *)v205 + 56) = v49;
    v43 = (unsigned __int64)v185;
    v112 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
             v110,
             (struct CVirtualAddressAllocator *)a2,
             v111,
             v109,
             v108 << 12,
             v185,
             (unsigned __int64)v165,
             v166,
             v168);
    v32 = v205;
    LODWORD(v38) = v112;
    *((_BYTE *)v205 + 56) = v107;
    goto LABEL_76;
  }
  v66 = *(VIDMM_PAGE_TABLE **)v65;
  v43 = (unsigned __int64)v185;
  if ( !*(_QWORD *)v65 )
  {
LABEL_76:
    v67 = v183;
    goto LABEL_77;
  }
  v67 = v183;
  if ( !*((_DWORD *)v66 + 1) )
    goto LABEL_77;
  v195 = v183 << 12;
  v57 = (unsigned __int64)v185 + (v183 & 0xFFFFFFFFFFFFFLL);
  if ( v57 > (v183 & 0xFFFFFFFFFFFFFLL) )
  {
    v68 = (struct CVirtualAddressAllocator *)a2;
    v69 = a2[10];
    v70 = *((_QWORD *)v66 + 1);
    v65 = *((_QWORD *)v69 + 5023) + 1560LL * ((*(_DWORD *)v66 >> 7) & 0x1F);
    if ( v70 && *(_QWORD *)(v70 + 136) )
    {
      v71 = *(_DWORD *)(v65 + 72);
      v72 = v71 & (v183 + (_DWORD)v185 - 1);
      v73 = v71 & v183;
      if ( (*(_DWORD *)v66 & 0x40) != 0 )
      {
        v73 >>= 4;
        v72 >>= 4;
        v195 = (v183 << 12) & 0xFFFFFFFFFFFF0000uLL;
      }
      v74 = v72 - v73 + 1;
      v192 = v74;
      if ( *((_QWORD *)v69 + 5119) && v73 < v74 + v73 )
      {
        v147 = v74;
        v148 = 16LL * v73;
        do
        {
          v149 = *((_QWORD *)v66 + 3);
          v150 = *(_QWORD *)(v149 + v148);
          if ( (v150 & 1) != 0 )
            VIDMM_GLOBAL::RecordPageMappingHistory(
              v69,
              (v150 >> 5) & 0x1F,
              *(_QWORD *)(v149 + v148 + 8),
              1LL,
              1,
              0LL,
              v164);
          v148 += 16LL;
          --v147;
        }
        while ( v147 );
        v12 = this;
        v43 = (unsigned __int64)v185;
        v74 = v192;
        v32 = v205;
        v68 = (struct CVirtualAddressAllocator *)a2;
      }
      if ( v73 < v74 + v73 )
      {
        v75 = 16LL * v73;
        v76 = v74;
        do
        {
          v57 = v75 + *((_QWORD *)v66 + 3);
          v65 = *(unsigned __int8 *)v57;
          if ( (v65 & 1) != 0 )
          {
            --*((_DWORD *)v66 + 1);
            *(_QWORD *)v57 = 0LL;
            v65 = *((_QWORD *)v66 + 3);
            *(_QWORD *)(v75 + v65 + 8) = 0LL;
          }
          v75 += 16LL;
          --v76;
        }
        while ( v76 );
      }
      if ( *((_DWORD *)v66 + 1) || (*((_DWORD *)v68 + 34) & 4) != 0 )
      {
        if ( (*(_DWORD *)v66 & 0x40) != 0 )
          v77 = 8;
        else
          v77 = 0;
        v78 = (VIDMM_GLOBAL *)*((_QWORD *)v68 + 10);
        if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(v66, v68, &v193, (unsigned __int64 *)&v202, &v194) < 0 )
        {
          v151 = WdLogNewEntry5_WdError(v80, v79, v81, v82);
          *(_QWORD *)(v151 + 24) = 3696LL;
          WdLogEvent5_WdError(v151);
          v154 = WdLogNewEntry5_WdAssertion(v153, v152);
          *(_QWORD *)(v154 + 24) = 6284LL;
          WdLogEvent5_WdAssertion(v154);
          v32 = v205;
          LODWORD(v38) = -1073741823;
          v12 = this;
          goto LABEL_75;
        }
        if ( (*((_BYTE *)v78 + 40872) & 0x10) != 0 )
          v83 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
        else
          v83 = (__int16)*(_DWORD *)v66 >> 13;
        v169 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v77;
        v84 = v202;
        VIDMM_GLOBAL::UpdatePageTable(
          v78,
          *(_DWORD *)v66 & 7,
          a2[11],
          0LL,
          0LL,
          0LL,
          0LL,
          v73,
          v74,
          0LL,
          0LL,
          (*(_DWORD *)v66 >> 7) & 0x1F,
          v193,
          (unsigned __int64)v202,
          v83,
          v195 >> 12,
          v169,
          0LL);
        v57 = (unsigned __int64)a2[10];
        if ( (*(_BYTE *)(v57 + 40872) & 0x10) != 0
          || (v65 = *(unsigned int *)v66, (v85 = (int)(*(_DWORD *)v66 << 16) >> 29) == 0) )
        {
          VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(v66, (struct VIDMM_GLOBAL *)v57, v84, (struct _MDL *)v194);
        }
        else if ( v85 == 1 )
        {
          v65 = (v65 >> 7) & 0x1F;
          if ( *(VIDMM_GLOBAL ***)(v57 + 8 * v65 + 40352) != a2 )
          {
            v155 = *((_QWORD *)v66 + 2) + 128LL;
            v156 = *(unsigned __int64 **)v155;
            if ( *(_QWORD *)(*(_QWORD *)v155 + 8LL) != v155
              || (v157 = *v156, *(unsigned __int64 **)(*v156 + 8) != v156)
              || (*(_QWORD *)v155 = v157,
                  *(_QWORD *)(v157 + 8) = v155,
                  v156[2] = *(_QWORD *)(v57 + 8LL * ((*(_DWORD *)v66 >> 7) & 0x1F) + 4944),
                  v65 = 1560LL * ((*(_DWORD *)v66 >> 7) & 0x1F),
                  v57 = v65 + *(_QWORD *)(v57 + 40184) + 464LL,
                  v158 = *(unsigned __int64 ***)(v57 + 8),
                  *v158 != (unsigned __int64 *)v57) )
            {
              __fastfail(3u);
            }
            *v156 = v57;
            v156[1] = (unsigned __int64)v158;
            *v158 = v156;
            *(_QWORD *)(v57 + 8) = v156;
          }
        }
        v32 = v205;
        v12 = this;
      }
    }
    LODWORD(v38) = 0;
LABEL_75:
    v63 = v189;
    goto LABEL_76;
  }
  v63 = v189;
  LODWORD(v38) = -1073741811;
LABEL_77:
  if ( !*((_BYTE *)v32 + 58) )
  {
LABEL_83:
    v86 = v176;
LABEL_84:
    v89 = v180;
    goto LABEL_85;
  }
  if ( (int)v38 < 0 )
    goto LABEL_240;
  v86 = v176;
  v87 = 2LL * v176;
  v65 = *(unsigned __int8 *)(*((_QWORD *)v12 + 3) + 16LL * v176);
  if ( (v65 & 1) == 0 )
    goto LABEL_84;
  v88 = 8LL * v176;
  LODWORD(v38) = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
                   *(VIDMM_PAGE_TABLE **)(v88 + *((_QWORD *)v12 + 4)),
                   (struct CVirtualAddressAllocator *)a2,
                   v67 << 12,
                   v43);
  if ( (int)v38 < 0 )
    goto LABEL_240;
  v65 = *(_QWORD *)(v88 + *((_QWORD *)v12 + 4));
  if ( *(_DWORD *)(v65 + 4) || (v57 = (unsigned __int64)a2, ((_DWORD)a2[17] & 4) != 0) )
  {
LABEL_82:
    v32 = v205;
    goto LABEL_83;
  }
  --*((_DWORD *)v12 + 1);
  v113 = *((_QWORD *)v12 + 3);
  v171 = 1;
  *(_QWORD *)(v113 + 8 * v87) = 0LL;
  *(_QWORD *)(v113 + 8 * v87 + 8) = 0LL;
  v89 = v180;
  VIDMM_PAGE_TABLE::DestroyPageTable(
    *(struct VIDMM_ALLOC ***)(v88 + *((_QWORD *)v12 + 4)),
    (struct CVirtualAddressAllocator *)a2,
    v183 & ~*((_QWORD *)v180 + 4));
  v32 = v205;
  *(_QWORD *)(v88 + *((_QWORD *)v12 + 4)) = 0LL;
  v86 = v176;
LABEL_85:
  if ( (int)v38 >= 0 )
  {
    if ( (*(_BYTE *)v32 & 1) != 0 )
    {
      v96 = v190;
      if ( (*(_DWORD *)v12 & 0x20) == 0
        || *((_BYTE *)v32 + 57)
        || (v97 = *((_QWORD *)v12 + 3),
            ((**(_DWORD **)(v63 + *((_QWORD *)v12 + 4)) >> 6) & 1) == ((*(_DWORD *)(v97 + v190) & 0x60000) == 0x20000LL)) )
      {
        v97 = *((_QWORD *)v12 + 3);
        v98 = 0;
      }
      else
      {
        v98 = 1;
      }
      if ( (*(_QWORD *)(v190 + v97) & 1) == 0 || v98 || v175 )
      {
        if ( (*(_QWORD *)(v190 + v97) & 1LL) == 0 )
        {
          *(_QWORD *)(v190 + v97) |= 1uLL;
          ++*((_DWORD *)v12 + 1);
          v97 = *((_QWORD *)v12 + 3);
        }
        *(_QWORD *)(v96 + v97) &= ~0x400uLL;
        *(_QWORD *)(v96 + *((_QWORD *)v12 + 3)) &= ~2uLL;
        *(_QWORD *)(v96 + *((_QWORD *)v12 + 3)) &= ~8uLL;
        if ( v172 )
        {
          v114 = 2LL * v86;
          *(_QWORD *)(*((_QWORD *)v12 + 3) + 8 * v114) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)v12 + 3) + 8 * v114) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)v12 + 3) + 8 * v114) &= ~8uLL;
        }
        VIDMM_PAGE_DIRECTORY::SetPageTableInPde(v12, (struct CVirtualAddressAllocator *)a2, v179);
        goto LABEL_138;
      }
    }
    else
    {
      if ( v175 )
        v171 = 1;
      if ( ((_DWORD)a2[17] & 4) == 0 )
      {
        v90 = (_QWORD *)(*((_QWORD *)v12 + 3) + v190);
        v91 = v183 & ~*((_QWORD *)v89 + 4);
        if ( (*(_BYTE *)v90 & 1) != 0 && !*(_DWORD *)(*(_QWORD *)(v63 + *((_QWORD *)v12 + 4)) + 4LL) )
        {
          --*((_DWORD *)v12 + 1);
          *v90 = 0LL;
          v90[1] = 0LL;
          v127 = *(struct VIDMM_ALLOC ***)(v63 + *((_QWORD *)v12 + 4));
          if ( (*(_DWORD *)v12 & 0x20) != 0 )
            VIDMM_PAGE_TABLE::DestroyPageTable(v127, (struct CVirtualAddressAllocator *)a2, v91);
          else
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
              (VIDMM_PAGE_DIRECTORY *)v127,
              (struct CVirtualAddressAllocator *)a2,
              v91,
              (unsigned __int8)a2);
          v92 = 1;
          v32 = v205;
          *(_QWORD *)(v63 + *((_QWORD *)v12 + 4)) = 0LL;
        }
        else
        {
          v92 = v171;
        }
        if ( v86 != v179 )
        {
          v93 = (_QWORD *)(*((_QWORD *)v12 + 3) + 16LL * v86);
          v94 = v86;
          if ( (*(_BYTE *)v93 & 1) != 0 )
          {
            v95 = 8LL * v86;
            if ( !*(_DWORD *)(*(_QWORD *)(8 * v94 + *((_QWORD *)v12 + 4)) + 4LL) )
            {
              --*((_DWORD *)v12 + 1);
              *v93 = 0LL;
              v93[1] = 0LL;
              v159 = *(struct VIDMM_ALLOC ***)(v95 + *((_QWORD *)v12 + 4));
              if ( (*(_DWORD *)v12 & 0x20) != 0 )
                VIDMM_PAGE_TABLE::DestroyPageTable(v159, (struct CVirtualAddressAllocator *)a2, v91);
              else
                VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
                  (VIDMM_PAGE_DIRECTORY *)v159,
                  (struct CVirtualAddressAllocator *)a2,
                  v91,
                  v92);
              *(_QWORD *)(v95 + *((_QWORD *)v12 + 4)) = 0LL;
LABEL_138:
              v32 = v205;
              v115 = v173;
              if ( !v173 )
                v115 = 1;
              v173 = v115;
              v116 = v188;
              if ( v181 )
                v116 = v184;
              v184 = v116;
              if ( (unsigned int)v188 >= v182 )
              {
                v184 = v116;
                v182 = v188 + 1;
              }
              v42 = v186;
              goto LABEL_106;
            }
          }
        }
LABEL_104:
        v42 = v186;
        goto LABEL_105;
      }
    }
    v92 = v171;
    goto LABEL_104;
  }
LABEL_240:
  v161 = WdLogNewEntry5_WdWarning(v65, v57);
  WdLogEvent5_WdWarning(v161);
LABEL_241:
  v61 = v205;
LABEL_242:
  v100 = (struct CVirtualAddressAllocator *)a2;
LABEL_243:
  v35 = v177;
  v30 = v180;
LABEL_108:
  if ( v173 )
  {
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v12,
                v100,
                (unsigned int *)&v205,
                (unsigned __int64 *)&a9,
                &v194) >= 0 )
    {
      v121 = v184 * *((_QWORD *)v180 + 5) + (*(_QWORD *)v196 & ~(*((_QWORD *)v180 + 4) | *((_QWORD *)v180 + 2)));
      v122 = *(_DWORD *)v12;
      if ( *((_BYTE *)v61 + 57) && (v122 & 0x20) != 0 )
        v123 = (struct _DXGK_PTE *)(*((_QWORD *)v12 + 3) + 16LL * (v184 + v35));
      else
        v123 = 0LL;
      if ( (*((_BYTE *)v197 + 40872) & 0x10) == 0 )
        v9 = (__int16)v122 >> 13;
      v124 = *((_QWORD *)v61 + 8);
      v182 -= v184;
      v170 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v26;
      v125 = a9;
      VIDMM_GLOBAL::UpdatePageTable(
        v197,
        v122 & 7,
        *((struct VIDMM_PROCESS **)v100 + 11),
        *((_QWORD *)v61 + 2),
        VidMmAllocFromOwner,
        VidMmGlobalAllocFromOwner,
        v206 + (v121 << 12) - (*(_QWORD *)v196 << 12),
        v184,
        v182,
        (struct _DXGK_PTE *)(*((_QWORD *)v12 + 3) + 16LL * v184),
        v123,
        (v122 >> 7) & 0x1F,
        (unsigned int)v205,
        (unsigned __int64)a9,
        v9,
        v121,
        v170,
        v124);
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(v12, v100, v126, v125, (struct _MDL *)v194);
      *(_DWORD *)v12 |= 0x10000u;
      v30 = v180;
      goto LABEL_109;
    }
    v162 = WdLogNewEntry5_WdError(v118, v117, v119, v120);
    *(_QWORD *)(v162 + 24) = 5958LL;
    WdLogEvent5_WdError(v162);
    return 3221225473LL;
  }
  else
  {
LABEL_109:
    if ( !*((_DWORD *)v12 + 1) && (*((_DWORD *)v100 + 34) & 4) == 0 )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory((struct VIDMM_ALLOC **)v12, v100, a5 & ~*((_QWORD *)v30 + 4), 1u, 1u);
    return (unsigned int)v38;
  }
}
