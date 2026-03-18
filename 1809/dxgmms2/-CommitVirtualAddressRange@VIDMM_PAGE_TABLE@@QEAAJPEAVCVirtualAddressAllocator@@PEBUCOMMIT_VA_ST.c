/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075870
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B48D4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4AD4 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00593EC (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00751C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00757A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0075CE0 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0077E00 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0078290 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00789C4 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00B2800 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00B7374 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        UINT64 a4,
        unsigned __int64 a5,
        struct VIDMM_ALLOC *a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v9; // r11
  unsigned __int64 v13; // r8
  char *v14; // r10
  struct VIDMM_GLOBAL *v15; // rsi
  struct CVirtualAddressAllocator *v16; // rdx
  __int64 v17; // rcx
  int v18; // r13d
  struct VIDMM_ALLOC *v19; // r9
  __int64 v20; // r12
  unsigned __int64 v21; // rbp
  void *v22; // r12
  unsigned int v23; // r14d
  unsigned int v24; // esi
  __int64 v25; // rax
  char v26; // cl
  bool v27; // zf
  LONG v28; // r13d
  unsigned int v29; // r14d
  unsigned int v30; // r12d
  VIDMM_GLOBAL *v31; // r14
  VIDMM_PAGE_TABLE_BASE *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct VIDMM_ALLOC *v36; // r11
  struct _VIDMM_GLOBAL_ALLOC *v37; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v38; // ecx
  void *v39; // rbp
  struct VIDMM_GLOBAL *v40; // rdx
  int v41; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // r14d
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // r8d
  int v52; // eax
  __int64 v53; // r11
  unsigned int v54; // r12d
  __int64 v55; // r10
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rdx
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
  unsigned int v87; // edx
  __int64 v88; // rcx
  _QWORD *v89; // rcx
  int v90; // edx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  int updated; // r12d
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  int v104; // edi
  __int64 v105; // rax
  __int64 *v106; // r8
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 **v109; // rax
  __int64 v110; // rax
  unsigned __int64 v111; // [rsp+78h] [rbp-60h]
  struct VIDMM_GLOBAL *v112; // [rsp+90h] [rbp-48h]
  void *v113; // [rsp+98h] [rbp-40h] BYREF
  void *v114; // [rsp+A0h] [rbp-38h] BYREF

  v9 = a9;
  v13 = a5 >> 12;
  v14 = (char *)a6 + (a5 >> 12);
  *a9 = 0LL;
  if ( (unsigned __int64)v14 <= v13 )
  {
    v49 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v49 + 24) = 4297LL;
    WdLogEvent5_WdAssertion(v49);
    return 3221225485LL;
  }
  a7 >>= 12;
  v15 = a2[10];
  v16 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
  v17 = (unsigned __int8)v16 & 7;
  v18 = 0;
  v112 = v15;
  v19 = (struct VIDMM_ALLOC *)(*((_QWORD *)v15 + 5023) + 1560LL * (((unsigned int)v16 >> 7) & 0x1F));
  a6 = v19;
  v20 = *((_QWORD *)v19 + 6 * v17 + 13);
  v21 = v13 & ~*((_QWORD *)v19 + 6 * v17 + 15);
  v113 = (void *)*((_QWORD *)v19 + 6 * v17 + 16);
  v22 = (void *)(v21 & ~v20);
  LODWORD(v15) = *((_DWORD *)v19 + 18);
  v114 = v22;
  v23 = (unsigned int)v15 & ((_DWORD)v14 - 1);
  v24 = v13 & (unsigned int)v15;
  v25 = *((_QWORD *)this + 1);
  if ( !v25 || !*(_QWORD *)(v25 + 136) )
  {
    LODWORD(a9) = VIDMM_PAGE_TABLE::CommitPageTable(this, (struct CVirtualAddressAllocator *)a2, v9);
    if ( (int)a9 < 0 )
    {
      v50 = WdLogNewEntry5_WdWarning(v44, v43);
      WdLogEvent5_WdWarning(v50);
      return (unsigned int)a9;
    }
    *(_DWORD *)this &= ~0x10000u;
    v16 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
    v19 = a6;
  }
  if ( ((unsigned int)v16 & 0x10000) != 0 )
  {
    v26 = a8;
  }
  else
  {
    v18 = 2;
    v26 = 1;
  }
  v27 = *((_BYTE *)a3 + 57) == 0;
  LOBYTE(a9) = v26;
  if ( v27 )
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
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a2[11], *(_DWORD *)(*((_QWORD *)v112 + 3) + 208LL), 1);
          v19 = a6;
          *((_BYTE *)a3 + 60) = 1;
        }
        v51 = 16 * *((_DWORD *)v19 + 20) - 16;
        v52 = *((_DWORD *)v19 + 20) - 1;
        v53 = v52;
        if ( v52 >= 0 )
        {
          v54 = v51 + 2;
          v55 = 16LL * v52;
          do
          {
            v56 = *((_QWORD *)this + 3);
            if ( (*(_BYTE *)(v55 + v56) & 1) != 0 )
            {
              v57 = 2LL * (v54 - 1);
              *(_OWORD *)(v56 + 16LL * v51) = *(_OWORD *)(v55 + v56);
              v58 = *((_QWORD *)this + 3);
              *(_OWORD *)(v58 + 8 * v57) = *(_OWORD *)(v55 + v58);
              ++*(_QWORD *)(v58 + 8 * v57 + 8);
              v59 = *((_QWORD *)this + 3);
              v60 = 2LL * (v54 + 1);
              v61 = 2LL * v54;
              *(_OWORD *)(v59 + 8 * v61) = *(_OWORD *)(v55 + v59);
              *(_QWORD *)(v59 + 8 * v61 + 8) += 2LL;
              v62 = *((_QWORD *)this + 3);
              *(_OWORD *)(v62 + 8 * v60) = *(_OWORD *)(v55 + v62);
              *(_QWORD *)(v62 + 8 * v60 + 8) += 3LL;
              v63 = *((_QWORD *)this + 3);
              v64 = 2LL * (v54 + 2);
              *(_OWORD *)(v63 + 8 * v64) = *(_OWORD *)(v55 + v63);
              *(_QWORD *)(v63 + 8 * v64 + 8) += 4LL;
              v65 = *((_QWORD *)this + 3);
              v66 = 2LL * (v54 + 3);
              *(_OWORD *)(v65 + 8 * v66) = *(_OWORD *)(v55 + v65);
              *(_QWORD *)(v65 + 8 * v66 + 8) += 5LL;
              v67 = *((_QWORD *)this + 3);
              v68 = 2LL * (v54 + 4);
              *(_OWORD *)(v67 + 8 * v68) = *(_OWORD *)(v55 + v67);
              *(_QWORD *)(v67 + 8 * v68 + 8) += 6LL;
              v69 = *((_QWORD *)this + 3);
              v70 = 2LL * (v54 + 5);
              *(_OWORD *)(v69 + 8 * v70) = *(_OWORD *)(v55 + v69);
              *(_QWORD *)(v69 + 8 * v70 + 8) += 7LL;
              v71 = *((_QWORD *)this + 3);
              v72 = 2LL * (v54 + 6);
              *(_OWORD *)(v71 + 8 * v72) = *(_OWORD *)(v55 + v71);
              *(_QWORD *)(v71 + 8 * v72 + 8) += 8LL;
              v73 = *((_QWORD *)this + 3);
              v74 = 2LL * (v54 + 7);
              *(_OWORD *)(v73 + 8 * v74) = *(_OWORD *)(v55 + v73);
              *(_QWORD *)(v73 + 8 * v74 + 8) += 9LL;
              v75 = *((_QWORD *)this + 3);
              v76 = 2LL * (v54 + 8);
              *(_OWORD *)(v75 + 8 * v76) = *(_OWORD *)(v55 + v75);
              *(_QWORD *)(v75 + 8 * v76 + 8) += 10LL;
              v77 = *((_QWORD *)this + 3);
              v78 = 2LL * (v54 + 9);
              *(_OWORD *)(v77 + 8 * v78) = *(_OWORD *)(v55 + v77);
              *(_QWORD *)(v77 + 8 * v78 + 8) += 11LL;
              v79 = *((_QWORD *)this + 3);
              v80 = 2LL * (v54 + 10);
              *(_OWORD *)(v79 + 8 * v80) = *(_OWORD *)(v55 + v79);
              *(_QWORD *)(v79 + 8 * v80 + 8) += 12LL;
              v81 = *((_QWORD *)this + 3);
              v82 = 2LL * (v54 + 11);
              *(_OWORD *)(v81 + 8 * v82) = *(_OWORD *)(v55 + v81);
              *(_QWORD *)(v81 + 8 * v82 + 8) += 13LL;
              v83 = *((_QWORD *)this + 3);
              v84 = 2LL * (v54 + 12);
              *(_OWORD *)(v83 + 8 * v84) = *(_OWORD *)(v55 + v83);
              *(_QWORD *)(v83 + 8 * v84 + 8) += 14LL;
              v85 = *((_QWORD *)this + 3);
              v86 = 2LL * (v54 + 13);
              *(_OWORD *)(v85 + 8 * v86) = *(_OWORD *)(v55 + v85);
              *(_QWORD *)(v85 + 8 * v86 + 8) += 15LL;
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              v87 = 0;
              do
              {
                v88 = 16LL * (v87 + v51);
                ++v87;
                v89 = (_QWORD *)(*((_QWORD *)this + 3) + v88);
                *v89 = 0LL;
                v89[1] = 0LL;
              }
              while ( v87 < 0x10 );
            }
            v51 -= 16;
            v54 -= 16;
            v55 -= 16LL;
            --v53;
          }
          while ( v53 >= 0 );
          v22 = v114;
        }
        v90 = 0;
        if ( (**((_DWORD **)v19 + 55) & 8) != 0 )
        {
          LODWORD(a5) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                          this,
                          (struct CVirtualAddressAllocator *)a2,
                          0,
                          *((_DWORD *)v19 + 20),
                          (unsigned __int64)v22,
                          (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( (a5 & 0x80000000) != 0LL )
          {
            v93 = WdLogNewEntry5_WdAssertion(v92, v91);
            *(_QWORD *)(v93 + 24) = 4416LL;
            WdLogEvent5_WdAssertion(v93);
            return (unsigned int)a5;
          }
          v19 = a6;
          v90 = 2;
        }
        updated = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, a3, 0LL, 0LL, 0, 0, *((_DWORD *)v19 + 19), v22, v90);
        if ( updated < 0 )
        {
          v97 = WdLogNewEntry5_WdAssertion(v95, v94);
          *(_QWORD *)(v97 + 24) = 4434LL;
          WdLogEvent5_WdAssertion(v97);
          return (unsigned int)updated;
        }
        v26 = (char)a9;
      }
      *(_DWORD *)this &= ~0x40u;
      v16 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
    }
  }
  v28 = ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned int)v16 >> 3)) & 8 ^ v18;
  if ( ((unsigned __int8)v16 & 0x40) != 0 )
  {
    v24 >>= 4;
    v21 &= 0xFFFFFFFFFFFFFFF0uLL;
    v23 >>= 4;
    v113 = (void *)(16LL * (_QWORD)v113);
  }
  v29 = v23 + 1;
  v30 = v29 - v24;
  if ( v26 )
  {
    if ( v24 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v112, 0, v24);
      LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                      this,
                      (struct CVirtualAddressAllocator *)a2,
                      0,
                      v24,
                      (unsigned __int64)v114,
                      (struct _DXGK_UPDATEPAGETABLEFLAGS)v28);
      if ( (int)a9 < 0 )
      {
        v98 = WdLogNewEntry5_WdAssertion(v45, v16);
        *(_QWORD *)(v98 + 24) = 4476LL;
        WdLogEvent5_WdAssertion(v98);
        return (unsigned int)a9;
      }
    }
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v46 = *((_DWORD *)a6 + 20);
    else
      v46 = *((_DWORD *)a6 + 19);
    if ( v29 < v46 )
    {
      LODWORD(a9) = v46 - v29;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v112, v29, v46 - v29);
      v48 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              (struct CVirtualAddressAllocator *)a2,
              v29,
              (unsigned int)a9,
              (unsigned __int64)v114 + (_QWORD)v113 * v29,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v28);
      if ( v48 < 0 )
      {
        v99 = WdLogNewEntry5_WdAssertion(v47, v16);
        *(_QWORD *)(v99 + 24) = 4493LL;
        WdLogEvent5_WdAssertion(v99);
        return (unsigned int)v48;
      }
    }
  }
  if ( ((*((_DWORD *)a3 + 13) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(this, v16, a3, v24, v30, a7);
    v31 = a2[10];
    LODWORD(a9) = *((_DWORD *)a3 + 12);
    a6 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 5);
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v32,
                (struct CVirtualAddressAllocator *)a2,
                (unsigned int *)&a5,
                (unsigned __int64 *)&v114,
                &v113) >= 0 )
    {
      v36 = 0LL;
      v37 = 0LL;
      if ( (_DWORD)a9 == 1 )
      {
        v36 = a6;
        v37 = **(struct _VIDMM_GLOBAL_ALLOC ***)a6;
      }
      else if ( (_DWORD)a9 == 3 )
      {
        v37 = a6;
      }
      if ( (*((_BYTE *)v31 + 40872) & 0x10) != 0 )
        v38 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v38 = (__int16)*(_DWORD *)this >> 13;
      v111 = v21;
      v39 = v114;
      VIDMM_GLOBAL::UpdatePageTable(
        v31,
        *(_DWORD *)this & 7,
        a2[11],
        *((_QWORD *)a3 + 2),
        v36,
        v37,
        a4,
        v24,
        v30,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v24),
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        a5,
        (SIZE_T)v114,
        v38,
        v111,
        v28,
        *((_QWORD *)a3 + 8));
      v40 = a2[10];
      if ( (*((_BYTE *)v40 + 40872) & 0x10) != 0 || (v41 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, v40, v39, (struct _MDL *)v113);
      }
      else if ( v41 == 1
             && *((struct VIDMM_GLOBAL ***)v40 + (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F) + 5044) != a2 )
      {
        v105 = *((_QWORD *)this + 2) + 128LL;
        v106 = *(__int64 **)v105;
        if ( *(_QWORD *)(*(_QWORD *)v105 + 8LL) != v105
          || (v107 = *v106, *(__int64 **)(*v106 + 8) != v106)
          || (*(_QWORD *)v105 = v107,
              *(_QWORD *)(v107 + 8) = v105,
              v106[2] = *((_QWORD *)v40 + ((*(_DWORD *)this >> 7) & 0x1F) + 618),
              v108 = 1560LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)v40 + 5023) + 464LL,
              v109 = *(__int64 ***)(v108 + 8),
              *v109 != (__int64 *)v108) )
        {
          __fastfail(3u);
        }
        *v106 = v108;
        v106[1] = (__int64)v109;
        *v109 = v106;
        *(_QWORD *)(v108 + 8) = v106;
      }
      goto LABEL_19;
    }
    v100 = WdLogNewEntry5_WdError(v34, v33, v35);
    *(_QWORD *)(v100 + 24) = 3768LL;
    WdLogEvent5_WdError(v100);
    v104 = -1073741823;
LABEL_70:
    v110 = WdLogNewEntry5_WdError(v102, v101, v103);
    *(_QWORD *)(v110 + 24) = 4533LL;
    WdLogEvent5_WdError(v110);
    return (unsigned int)v104;
  }
  VIDMM_PAGE_TABLE::InvalidatePageTable(this, v112, v24, v30);
  v104 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
           this,
           (struct CVirtualAddressAllocator *)a2,
           v24,
           v30,
           v21,
           (struct _DXGK_UPDATEPAGETABLEFLAGS)v28);
  if ( v104 < 0 )
    goto LABEL_70;
LABEL_19:
  *(_DWORD *)this |= 0x10000u;
  return 0LL;
}
