/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0067B70
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0067004 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C00672A4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C0002364 (-AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064A4C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064ED8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0065EF8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066C20 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0067778 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0068020 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0068170 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068620 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068804 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00698D8 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007F590 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BA598 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

bool __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  _QWORD *v3; // rdx
  struct VIDMM_RECYCLE_RANGE *v4; // rbx
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  PSLIST_ENTRY v12; // r15
  _QWORD *v13; // rax
  VIDMM_RECYCLE_HEAP *v14; // rcx
  __int64 v15; // r9
  struct VIDMM_RECYCLE_RANGE *v16; // rdi
  __int64 *NextRange; // rsi
  VIDMM_RECYCLE_HEAP *v18; // r13
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // rax
  PSLIST_ENTRY v25; // rdi
  VIDMM_RECYCLE_HEAP *v26; // rax
  VIDMM_RECYCLE_HEAP *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r12
  __int64 v30; // r13
  PSLIST_ENTRY v31; // rax
  PSLIST_ENTRY v32; // rdi
  _QWORD *v33; // rax
  _QWORD **v34; // r14
  _QWORD **v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  struct _RTL_BALANCED_NODE *v39; // rbx
  struct _RTL_BALANCED_NODE *v40; // rax
  VIDMM_RECYCLE_MULTIRANGE *v41; // rcx
  _QWORD *v42; // r14
  _QWORD *v43; // rdi
  struct VIDMM_RECYCLE_MULTIRANGE *v44; // rsi
  __int64 v45; // rdx
  VIDMM_RECYCLE_MULTIRANGE *v46; // rbx
  bool result; // al
  struct VIDMM_RECYCLE_RANGE *v48; // rdx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v51; // r8
  VIDMM_RECYCLE_HEAP *v52; // rax
  VIDMM_RECYCLE_HEAP *v53; // r8
  _QWORD *v54; // rax
  _QWORD *v55; // rdi
  struct VIDMM_RECYCLE_MULTIRANGE *v56; // rdx
  struct VIDMM_RECYCLE_RANGE *v57; // rdi
  bool v58; // si
  int v59; // ecx
  int v60; // ecx
  _QWORD *v61; // [rsp+30h] [rbp-38h] BYREF
  VIDMM_RECYCLE_HEAP *v62; // [rsp+38h] [rbp-30h]
  _QWORD v63[2]; // [rsp+40h] [rbp-28h] BYREF
  char v64; // [rsp+50h] [rbp-18h]
  VIDMM_RECYCLE_HEAP *v65; // [rsp+B0h] [rbp+48h]
  __int64 v67; // [rsp+C0h] [rbp+58h]
  __int64 v68; // [rsp+C8h] [rbp+60h]

  v65 = this;
  v62 = (VIDMM_RECYCLE_HEAP *)&v61;
  v61 = &v61;
  v3 = (_QWORD *)*((_QWORD *)this + 1);
  v4 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v5 = (_QWORD *)*((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)v3 + 403);
  v7 = *((_QWORD *)v4 + 4);
  v8 = v5[5];
  v9 = *((_QWORD *)v4 + 9);
  v10 = v3[165];
  if ( v6 )
  {
    v11 = (unsigned int)(v6 - 1);
    v12 = (PSLIST_ENTRY)v3[v11 + 206];
    v3[v11 + 206] = 0LL;
    --*((_DWORD *)v3 + 403);
  }
  else
  {
    ++*(_DWORD *)(v10 + 20);
    v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v10);
    if ( !v12 )
    {
      ++*(_DWORD *)(v10 + 24);
      v12 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v10 + 48))(
                            *(unsigned int *)(v10 + 36),
                            *(unsigned int *)(v10 + 44),
                            *(unsigned int *)(v10 + 40),
                            v10);
    }
  }
  if ( !v12 )
    goto LABEL_56;
  VIDMM_RECYCLE_MULTIRANGE::Init(v12, 0LL, v9, v7, v8);
  v12[4].Next = (struct _SLIST_ENTRY *)v4;
  *((_QWORD *)&v12[4].Next + 1) = v5;
  v13 = &v12[12].Next + 1;
  *((_DWORD *)&v12[5].Next + 2) = 2;
  v14 = v62;
  if ( *(_QWORD ***)v62 != &v61 )
    goto LABEL_55;
  v12[13].Next = (struct _SLIST_ENTRY *)v62;
  *v13 = &v61;
  *(_QWORD *)v14 = v13;
  v62 = (VIDMM_RECYCLE_HEAP *)(&v12[12].Next + 1);
  this = *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)a2 + 10) + 32LL);
  v3 = (_QWORD *)*(unsigned int *)this;
  if ( (unsigned int)((_DWORD)v3 - 3) > 3 && (unsigned int)((_DWORD)v3 - 9) > 1 )
  {
    v15 = 0LL;
    v16 = v4;
    NextRange = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v16 + 16) )
      {
        v18 = v65;
        if ( !NextRange )
          NextRange = (__int64 *)v16;
      }
      else if ( NextRange )
      {
        v18 = v65;
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v16);
        Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                       *((_QWORD *)v65 + 1),
                       1u,
                       *((_QWORD *)v4 + 9),
                       NextRange[4],
                       *((_QWORD *)PreviousRange + 5));
        v51 = Multirange;
        if ( !Multirange )
          goto LABEL_57;
        Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
        *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
        *((_DWORD *)&Multirange[5].Next + 2) = 1;
        while ( 1 )
        {
          NextRange[18] = (__int64)v51;
          if ( NextRange == (__int64 *)PreviousRange )
            break;
          NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
        }
        v52 = v62;
        v53 = (VIDMM_RECYCLE_HEAP *)(&v51[12].Next + 1);
        if ( *(_QWORD ***)v62 != &v61 )
          goto LABEL_55;
        *((_QWORD *)v53 + 1) = v62;
        this = (VIDMM_RECYCLE_HEAP *)&v61;
        *(_QWORD *)v53 = &v61;
        v15 = 0LL;
        *(_QWORD *)v52 = v53;
        NextRange = 0LL;
        v62 = v53;
      }
      else
      {
        v18 = v65;
      }
      if ( v16 == (struct VIDMM_RECYCLE_RANGE *)v5 )
        break;
      v16 = VIDMM_RECYCLE_RANGE::GetNextRange(v16);
    }
    if ( !NextRange )
      goto LABEL_20;
    v3 = (_QWORD *)*((_QWORD *)v18 + 1);
    v19 = NextRange[4];
    v20 = *((_QWORD *)v4 + 9);
    v21 = v5[5];
    v22 = *((_DWORD *)v3 + 403);
    v23 = v3[165];
    v67 = v19;
    v68 = v20;
    if ( v22 )
    {
      v24 = (unsigned int)(v22 - 1);
      v25 = (PSLIST_ENTRY)v3[v24 + 206];
      v3[v24 + 206] = v15;
      --*((_DWORD *)v3 + 403);
    }
    else
    {
      ++*(_DWORD *)(v23 + 20);
      v25 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v23);
      if ( !v25 )
      {
        ++*(_DWORD *)(v23 + 24);
        v25 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v23 + 48))(
                              *(unsigned int *)(v23 + 36),
                              *(unsigned int *)(v23 + 44),
                              *(unsigned int *)(v23 + 40),
                              v23);
      }
      v19 = v67;
      v20 = v68;
    }
    if ( v25 )
    {
      VIDMM_RECYCLE_MULTIRANGE::Init(v25, 1LL, v20, v19, v21);
      v25[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&v25[4].Next + 1) = v5;
      *((_DWORD *)&v25[5].Next + 2) = 1;
      while ( 1 )
      {
        NextRange[18] = (__int64)v25;
        if ( NextRange == v5 )
          break;
        NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
      }
      v26 = v62;
      v27 = (VIDMM_RECYCLE_HEAP *)(&v25[12].Next + 1);
      if ( *(_QWORD ***)v62 == &v61 )
      {
        *((_QWORD *)v27 + 1) = v62;
        this = (VIDMM_RECYCLE_HEAP *)&v61;
        *(_QWORD *)v27 = &v61;
        *(_QWORD *)v26 = v27;
        v62 = v27;
        goto LABEL_20;
      }
LABEL_55:
      __fastfail(3u);
    }
LABEL_56:
    v18 = v65;
LABEL_57:
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(this, v3);
    v54[3] = *((_QWORD *)a2 + 10);
    v54[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
    v54[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
    v54[6] = **(_QWORD **)(*((_QWORD *)v18 + 1) + 8LL);
    WdLogEvent5_WdWarning(v54);
    v55 = v61;
    while ( v55 != &v61 )
    {
      v56 = (struct VIDMM_RECYCLE_MULTIRANGE *)(v55 - 25);
      v55 = (_QWORD *)*v55;
      *((_DWORD *)v56 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)v18 + 1), v56);
    }
    v57 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
    v58 = 0;
    while ( 1 )
    {
      v59 = *((_DWORD *)v57 + 16);
      *((_QWORD *)v57 + 17) = 0LL;
      *((_QWORD *)v57 + 18) = 0LL;
      *((_QWORD *)v57 + 19) = 0LL;
      *((_QWORD *)v57 + 20) = 0LL;
      if ( v59 )
      {
        v60 = v59 - 4;
        if ( v60 )
        {
          if ( v60 == 1 )
            VIDMM_RECYCLE_HEAP::AddRangeToTree(v18, 1LL, v57);
        }
        else
        {
          VIDMM_RECYCLE_HEAP::AddRangeToTree(v18, 0LL, v57);
        }
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(v18, 2LL, v57);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v57 + 9), v57);
        v58 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)v57 + 9), v57);
      }
      if ( v57 == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
        break;
      v57 = VIDMM_RECYCLE_RANGE::GetNextRange(v57);
    }
    return v58;
  }
  while ( 1 )
  {
LABEL_20:
    if ( *((_DWORD *)v4 + 16) == 4 )
    {
      v28 = *((_QWORD *)v4 + 5);
      v29 = *((_QWORD *)v4 + 4);
      v30 = *((_QWORD *)v4 + 9);
      v31 = VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
              this,
              *(struct _LOOKASIDE_LIST_EX **)(*((_QWORD *)v65 + 1) + 1320LL),
              (void **)(*((_QWORD *)v65 + 1) + 1648LL),
              (unsigned int *)(*((_QWORD *)v65 + 1) + 1612LL));
      v32 = v31;
      if ( !v31 )
        goto LABEL_56;
      VIDMM_RECYCLE_MULTIRANGE::Init(v31, 2LL, v30, v29, v28);
      v32[4].Next = (struct _SLIST_ENTRY *)v4;
      *((_QWORD *)&v32[4].Next + 1) = v4;
      v33 = &v32[12].Next + 1;
      *((_QWORD *)v4 + 19) = v32;
      *((_DWORD *)&v32[5].Next + 2) = 0;
      this = v62;
      if ( *(_QWORD ***)v62 != &v61 )
        goto LABEL_55;
      v32[13].Next = (struct _SLIST_ENTRY *)v62;
      v3 = &v61;
      *v33 = &v61;
      *(_QWORD *)this = v33;
      v62 = (VIDMM_RECYCLE_HEAP *)(&v32[12].Next + 1);
    }
    *((_QWORD *)v4 + 17) = v12;
    *((_QWORD *)v4 + 20) = 0LL;
    if ( v4 == (struct VIDMM_RECYCLE_RANGE *)v5 )
      break;
    v4 = VIDMM_RECYCLE_RANGE::GetNextRange(v4);
  }
  v34 = (_QWORD **)v61;
  *((_DWORD *)v61 - 28) = 3;
  v35 = v34 - 25;
  v36 = WdLogNewEntry5_WdEvent(this, v3);
  *(_QWORD *)(v36 + 24) = v34 - 25;
  *(_QWORD *)(v36 + 32) = 2LL;
  WdLogEvent5_WdEvent(v36);
  LOBYTE(v37) = 0;
  v38 = (__int64)*(v34 - 18);
  v39 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v65 + 8);
  v63[0] = (char *)v35[5] - (char *)v35[4];
  v63[1] = v38;
  v64 = 0;
  if ( !v39 )
    goto LABEL_32;
  while ( (int)VidMmCompareForInsertAlignedRange(v63, v39) < 0 )
  {
    v40 = v39->Children[0];
    if ( !v39->Children[0] )
    {
      LOBYTE(v37) = 0;
      goto LABEL_32;
    }
LABEL_28:
    v39 = v40;
  }
  v40 = v39->Children[1];
  if ( v40 )
    goto LABEL_28;
  LOBYTE(v37) = 1;
LABEL_32:
  RtlAvlInsertNodeEx((char *)v65 + 64, v39, v37, v34 - 25);
  *((_DWORD *)v35 + 22) = 2;
  v41 = (VIDMM_RECYCLE_MULTIRANGE *)(v34 - 25);
  v42 = *v34;
  v43 = v42;
  v44 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v41);
  while ( v43 != &v61 )
  {
    v45 = *((unsigned int *)v43 - 28);
    v46 = (VIDMM_RECYCLE_MULTIRANGE *)(v43 - 25);
    *((_DWORD *)v43 - 28) = 3;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v65, v45, v43 - 25);
    v43 = (_QWORD *)*v43;
    VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v46);
  }
  result = VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v44) != 0;
  if ( v42 == &v61 && !result )
  {
    v48 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v44 + 8);
    if ( v48 == *((struct VIDMM_RECYCLE_RANGE **)v44 + 9) )
    {
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v44 + 10), v48);
      return VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(
               *((VIDMM_RECYCLE_BLOCK **)v44 + 10),
               *((struct VIDMM_RECYCLE_RANGE **)v44 + 8));
    }
  }
  return result;
}
