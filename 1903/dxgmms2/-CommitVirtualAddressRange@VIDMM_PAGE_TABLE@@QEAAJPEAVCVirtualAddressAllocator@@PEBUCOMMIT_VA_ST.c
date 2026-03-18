/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FE00
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006E2C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B7D88 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B7F88 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060F9C (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C006D97C (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C006DA14 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C006F660 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C006FC70 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0070280 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C00704D0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00B5C60 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00BA604 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        UINT64 a4,
        unsigned __int64 a5,
        struct VIDMM_ALLOC *a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v9; // r11
  unsigned __int64 v13; // r8
  char *v14; // r10
  struct VIDMM_GLOBAL *v15; // r9
  struct CVirtualAddressAllocator *v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r12
  __int64 v20; // r9
  unsigned __int64 v21; // r14
  struct VIDMM_ALLOC *v22; // r9
  int v23; // ebp
  unsigned int v24; // r15d
  unsigned int v25; // ebp
  __int64 v26; // rax
  int v27; // r8d
  bool v28; // zf
  unsigned int v29; // ebx
  unsigned int v30; // r15d
  unsigned int v31; // r12d
  VIDMM_GLOBAL *v32; // r15
  VIDMM_PAGE_TABLE_BASE *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct VIDMM_ALLOC *v38; // r11
  struct _VIDMM_GLOBAL_ALLOC *v39; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v40; // ecx
  void *v41; // rbx
  struct VIDMM_GLOBAL *v42; // rdx
  int v43; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // r15d
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // r8d
  int v54; // eax
  __int64 v55; // r11
  unsigned int v56; // r9d
  __int64 v57; // r10
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  unsigned int v89; // edx
  __int64 v90; // rcx
  _QWORD *v91; // rcx
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  int updated; // r12d
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // ebx
  __int64 v107; // rax
  __int64 *v108; // r8
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 **v111; // rax
  __int64 v112; // rax
  struct _DXGK_UPDATEPAGETABLEFLAGS v113; // [rsp+80h] [rbp-58h]
  struct VIDMM_GLOBAL *v114; // [rsp+90h] [rbp-48h]
  void *v115; // [rsp+98h] [rbp-40h] BYREF
  void *v116; // [rsp+A0h] [rbp-38h] BYREF

  v9 = a9;
  v13 = a5 >> 12;
  v14 = (char *)a6 + (a5 >> 12);
  *a9 = 0LL;
  if ( (unsigned __int64)v14 <= v13 )
  {
    v51 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v51 + 24) = 4294LL;
    WdLogEvent5_WdAssertion(v51);
    return 3221225485LL;
  }
  v15 = a2[10];
  v16 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
  a7 >>= 12;
  v17 = (unsigned __int8)v16 & 7;
  v18 = 0;
  v114 = v15;
  v19 = *((_QWORD *)v15 + 5023) + 1560LL * (((unsigned int)v16 >> 7) & 0x1F);
  v116 = (void *)v19;
  v20 = *(_QWORD *)(v19 + 48 * v17 + 104);
  v21 = v13 & ~*(_QWORD *)(v19 + 48 * v17 + 120);
  v115 = *(void **)(v19 + 48 * v17 + 128);
  v22 = (struct VIDMM_ALLOC *)(v21 & ~v20);
  v23 = *(_DWORD *)(v19 + 72);
  a6 = v22;
  v24 = v23 & ((_DWORD)v14 - 1);
  v25 = v13 & v23;
  v26 = *((_QWORD *)this + 1);
  if ( !v26 || !*(_QWORD *)(v26 + 136) )
  {
    LODWORD(a9) = VIDMM_PAGE_TABLE::CommitPageTable(this, (struct CVirtualAddressAllocator *)a2, v9);
    if ( (int)a9 < 0 )
    {
      v52 = WdLogNewEntry5_WdWarning(v46, v45);
      WdLogEvent5_WdWarning(v52);
      return (unsigned int)a9;
    }
    *(_DWORD *)this &= ~0x10000u;
    v16 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
    v22 = a6;
  }
  if ( ((unsigned int)v16 & 0x10000) == 0 )
    v18 = 2;
  v27 = 1;
  if ( ((unsigned int)v16 & 0x10000) != 0 )
    v27 = a8;
  v28 = *((_BYTE *)a3 + 57) == 0;
  LODWORD(a5) = v27;
  if ( v28 )
  {
    if ( *((_BYTE *)a3 + 56) )
    {
      if ( !*((_DWORD *)this + 1) )
      {
        v16 = (struct CVirtualAddressAllocator *)((unsigned int)v16 | 0x40);
        *(_DWORD *)this = (_DWORD)v16;
      }
    }
    else
    {
      if ( ((unsigned __int8)v16 & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 60) )
        {
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a2[11], *(_DWORD *)(*((_QWORD *)v114 + 3) + 208LL), 1);
          v22 = a6;
          *((_BYTE *)a3 + 60) = 1;
        }
        v53 = 16 * *(_DWORD *)(v19 + 80) - 16;
        v54 = *(_DWORD *)(v19 + 80) - 1;
        v55 = v54;
        if ( v54 >= 0 )
        {
          v56 = v53 + 2;
          v57 = 16LL * v54;
          do
          {
            v58 = *((_QWORD *)this + 3);
            if ( (*(_BYTE *)(v57 + v58) & 1) != 0 )
            {
              v59 = 2LL * (v56 - 1);
              *(_OWORD *)(v58 + 16LL * v53) = *(_OWORD *)(v57 + v58);
              v60 = *((_QWORD *)this + 3);
              *(_OWORD *)(v60 + 8 * v59) = *(_OWORD *)(v57 + v60);
              ++*(_QWORD *)(v60 + 8 * v59 + 8);
              v61 = *((_QWORD *)this + 3);
              v62 = 2LL * (v56 + 1);
              v63 = 2LL * v56;
              *(_OWORD *)(v61 + 8 * v63) = *(_OWORD *)(v57 + v61);
              *(_QWORD *)(v61 + 8 * v63 + 8) += 2LL;
              v64 = *((_QWORD *)this + 3);
              *(_OWORD *)(v64 + 8 * v62) = *(_OWORD *)(v57 + v64);
              *(_QWORD *)(v64 + 8 * v62 + 8) += 3LL;
              v65 = *((_QWORD *)this + 3);
              v66 = 2LL * (v56 + 2);
              *(_OWORD *)(v65 + 8 * v66) = *(_OWORD *)(v57 + v65);
              *(_QWORD *)(v65 + 8 * v66 + 8) += 4LL;
              v67 = *((_QWORD *)this + 3);
              v68 = 2LL * (v56 + 3);
              *(_OWORD *)(v67 + 8 * v68) = *(_OWORD *)(v57 + v67);
              *(_QWORD *)(v67 + 8 * v68 + 8) += 5LL;
              v69 = *((_QWORD *)this + 3);
              v70 = 2LL * (v56 + 4);
              *(_OWORD *)(v69 + 8 * v70) = *(_OWORD *)(v57 + v69);
              *(_QWORD *)(v69 + 8 * v70 + 8) += 6LL;
              v71 = *((_QWORD *)this + 3);
              v72 = 2LL * (v56 + 5);
              *(_OWORD *)(v71 + 8 * v72) = *(_OWORD *)(v57 + v71);
              *(_QWORD *)(v71 + 8 * v72 + 8) += 7LL;
              v73 = *((_QWORD *)this + 3);
              v74 = 2LL * (v56 + 6);
              *(_OWORD *)(v73 + 8 * v74) = *(_OWORD *)(v57 + v73);
              *(_QWORD *)(v73 + 8 * v74 + 8) += 8LL;
              v75 = *((_QWORD *)this + 3);
              v76 = 2LL * (v56 + 7);
              *(_OWORD *)(v75 + 8 * v76) = *(_OWORD *)(v57 + v75);
              *(_QWORD *)(v75 + 8 * v76 + 8) += 9LL;
              v77 = *((_QWORD *)this + 3);
              v78 = 2LL * (v56 + 8);
              *(_OWORD *)(v77 + 8 * v78) = *(_OWORD *)(v57 + v77);
              *(_QWORD *)(v77 + 8 * v78 + 8) += 10LL;
              v79 = *((_QWORD *)this + 3);
              v80 = 2LL * (v56 + 9);
              *(_OWORD *)(v79 + 8 * v80) = *(_OWORD *)(v57 + v79);
              *(_QWORD *)(v79 + 8 * v80 + 8) += 11LL;
              v81 = *((_QWORD *)this + 3);
              v82 = 2LL * (v56 + 10);
              *(_OWORD *)(v81 + 8 * v82) = *(_OWORD *)(v57 + v81);
              *(_QWORD *)(v81 + 8 * v82 + 8) += 12LL;
              v83 = *((_QWORD *)this + 3);
              v84 = 2LL * (v56 + 11);
              *(_OWORD *)(v83 + 8 * v84) = *(_OWORD *)(v57 + v83);
              *(_QWORD *)(v83 + 8 * v84 + 8) += 13LL;
              v85 = *((_QWORD *)this + 3);
              v86 = 2LL * (v56 + 12);
              *(_OWORD *)(v85 + 8 * v86) = *(_OWORD *)(v57 + v85);
              *(_QWORD *)(v85 + 8 * v86 + 8) += 14LL;
              v87 = *((_QWORD *)this + 3);
              v88 = 2LL * (v56 + 13);
              *(_OWORD *)(v87 + 8 * v88) = *(_OWORD *)(v57 + v87);
              *(_QWORD *)(v87 + 8 * v88 + 8) += 15LL;
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              v89 = 0;
              do
              {
                v90 = 16LL * (v89 + v53);
                ++v89;
                v91 = (_QWORD *)(*((_QWORD *)this + 3) + v90);
                *v91 = 0LL;
                v91[1] = 0LL;
              }
              while ( v89 < 0x10 );
            }
            v53 -= 16;
            v56 -= 16;
            v57 -= 16LL;
            --v55;
          }
          while ( v55 >= 0 );
          v22 = a6;
        }
        v92 = 0;
        if ( (**(_DWORD **)(v19 + 440) & 8) != 0 )
        {
          LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                          this,
                          (struct CVirtualAddressAllocator *)a2,
                          0,
                          *(_DWORD *)(v19 + 80),
                          (unsigned __int64)v22,
                          (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( (int)a9 < 0 )
          {
            v99 = WdLogNewEntry5_WdAssertion(v94, v93);
            *(_QWORD *)(v99 + 24) = 4413LL;
            goto LABEL_62;
          }
          v22 = a6;
          v92 = 2;
        }
        updated = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, a3, 0LL, 0LL, 0, 0, *(_DWORD *)(v19 + 76), v22, v92);
        if ( updated < 0 )
        {
          v98 = WdLogNewEntry5_WdAssertion(v96, v95);
          *(_QWORD *)(v98 + 24) = 4431LL;
          WdLogEvent5_WdAssertion(v98);
          return (unsigned int)updated;
        }
        LOBYTE(v27) = a5;
      }
      *(_DWORD *)this &= ~0x40u;
      v16 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
    }
  }
  v29 = ((unsigned int)v16 >> 3) & 8 | v18;
  if ( ((unsigned __int8)v16 & 0x40) != 0 )
  {
    v25 >>= 4;
    v21 &= 0xFFFFFFFFFFFFFFF0uLL;
    v24 >>= 4;
    v115 = (void *)(16LL * (_QWORD)v115);
  }
  v30 = v24 + 1;
  v31 = v30 - v25;
  if ( !(_BYTE)v27 )
    goto LABEL_12;
  if ( v25 )
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v114, 0, v25);
    LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                    this,
                    (struct CVirtualAddressAllocator *)a2,
                    0,
                    v25,
                    (unsigned __int64)a6,
                    (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
    if ( (int)a9 < 0 )
    {
      v99 = WdLogNewEntry5_WdAssertion(v50, v16);
      *(_QWORD *)(v99 + 24) = 4473LL;
LABEL_62:
      WdLogEvent5_WdAssertion(v99);
      return (unsigned int)a9;
    }
  }
  if ( (*(_DWORD *)this & 0x40) != 0 )
    v47 = *((_DWORD *)v116 + 20);
  else
    v47 = *((_DWORD *)v116 + 19);
  if ( v30 < v47 )
  {
    LODWORD(a9) = v47 - v30;
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v114, v30, v47 - v30);
    v49 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
            this,
            (struct CVirtualAddressAllocator *)a2,
            v30,
            (unsigned int)a9,
            (unsigned __int64)a6 + (_QWORD)v115 * v30,
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
    if ( v49 < 0 )
    {
      v100 = WdLogNewEntry5_WdAssertion(v48, v16);
      *(_QWORD *)(v100 + 24) = 4490LL;
      WdLogEvent5_WdAssertion(v100);
      return (unsigned int)v49;
    }
  }
LABEL_12:
  if ( ((*((_DWORD *)a3 + 13) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(this, v16, a3, v25, v31, a7);
    v32 = a2[10];
    LODWORD(a9) = *((_DWORD *)a3 + 12);
    a6 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 5);
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v33,
                (struct CVirtualAddressAllocator *)a2,
                (unsigned int *)&a5,
                (unsigned __int64 *)&v116,
                &v115) >= 0 )
    {
      v38 = 0LL;
      v39 = 0LL;
      if ( (_DWORD)a9 == 1 )
      {
        v38 = a6;
        v39 = **(struct _VIDMM_GLOBAL_ALLOC ***)a6;
      }
      else if ( (_DWORD)a9 == 3 )
      {
        v39 = a6;
      }
      if ( (*((_BYTE *)v32 + 40872) & 0x10) != 0 )
        v40 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v40 = (__int16)*(_DWORD *)this >> 13;
      v113 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v29;
      v41 = v116;
      VIDMM_GLOBAL::UpdatePageTable(
        v32,
        *(_DWORD *)this & 7,
        a2[11],
        *((_QWORD *)a3 + 2),
        v38,
        v39,
        a4,
        v25,
        v31,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v25),
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        a5,
        (SIZE_T)v116,
        v40,
        v21,
        v113,
        *((_QWORD *)a3 + 8));
      v42 = a2[10];
      if ( (*((_BYTE *)v42 + 40872) & 0x10) != 0 || (v43 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, v42, v41, (struct _MDL *)v115);
      }
      else if ( v43 == 1
             && *((struct VIDMM_GLOBAL ***)v42 + (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F) + 5044) != a2 )
      {
        v107 = *((_QWORD *)this + 2) + 128LL;
        v108 = *(__int64 **)v107;
        if ( *(_QWORD *)(*(_QWORD *)v107 + 8LL) != v107
          || (v109 = *v108, *(__int64 **)(*v108 + 8) != v108)
          || (*(_QWORD *)v107 = v109,
              *(_QWORD *)(v109 + 8) = v107,
              v108[2] = *((_QWORD *)v42 + ((*(_DWORD *)this >> 7) & 0x1F) + 618),
              v110 = 1560LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)v42 + 5023) + 464LL,
              v111 = *(__int64 ***)(v110 + 8),
              *v111 != (__int64 *)v110) )
        {
          __fastfail(3u);
        }
        *v108 = v110;
        v108[1] = (__int64)v111;
        *v111 = v108;
        *(_QWORD *)(v110 + 8) = v108;
      }
      goto LABEL_21;
    }
    v101 = WdLogNewEntry5_WdError(v35, v34, v36, v37);
    *(_QWORD *)(v101 + 24) = 3765LL;
    WdLogEvent5_WdError(v101);
    v106 = -1073741823;
LABEL_73:
    v112 = WdLogNewEntry5_WdError(v103, v102, v104, v105);
    *(_QWORD *)(v112 + 24) = 4530LL;
    WdLogEvent5_WdError(v112);
    return (unsigned int)v106;
  }
  VIDMM_PAGE_TABLE::InvalidatePageTable(this, v114, v25, v31);
  v106 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
           this,
           (struct CVirtualAddressAllocator *)a2,
           v25,
           v31,
           v21,
           (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
  if ( v106 < 0 )
    goto LABEL_73;
LABEL_21:
  *(_DWORD *)this |= 0x10000u;
  return 0LL;
}
