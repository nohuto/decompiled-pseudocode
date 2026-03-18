/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4E0
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005BAF4 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C005BD7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005AFAC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005B610 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005C270 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005C8C0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005CE40 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CF70 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007C9E4 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00814A8 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B7668 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *v2; // rbx
  _QWORD *v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  PSLIST_ENTRY v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  struct _SLIST_ENTRY *v10; // rcx
  struct _SLIST_ENTRY *v11; // rcx
  _QWORD *Next_low; // rdx
  struct VIDMM_RECYCLE_RANGE *v13; // rsi
  __int64 *NextRange; // rdi
  VIDMM_RECYCLE_HEAP *v15; // r13
  __int64 v16; // r13
  PSLIST_ENTRY v17; // rsi
  struct _SLIST_ENTRY *v18; // rax
  struct _SLIST_ENTRY *v19; // rsi
  PSLIST_ENTRY v20; // rax
  __int64 v21; // rcx
  struct _SLIST_ENTRY *v22; // rax
  _QWORD **v23; // rsi
  _QWORD **v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r8
  struct _RTL_BALANCED_NODE *v27; // rbx
  __int64 v28; // rax
  struct _RTL_BALANCED_NODE *v29; // rax
  struct _SLIST_ENTRY *v30; // rcx
  _QWORD *v31; // rsi
  struct _SLIST_ENTRY *v32; // rdi
  __int64 v33; // rdx
  struct _SLIST_ENTRY *v34; // rbx
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(__int64, __int64, __int64, __int64); // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 (__fastcall *v41)(__int64, __int64, __int64, __int64); // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v45; // r8
  __int64 *v46; // r9
  struct _SLIST_ENTRY *v47; // rax
  struct _SLIST_ENTRY *v48; // r8
  _QWORD *v49; // rax
  _QWORD *v50; // rdi
  _QWORD *v51; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  int v53; // ecx
  int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // [rsp+30h] [rbp-38h]
  _QWORD *v57; // [rsp+38h] [rbp-30h] BYREF
  struct _SLIST_ENTRY *v58; // [rsp+40h] [rbp-28h]
  _QWORD v59[2]; // [rsp+48h] [rbp-20h] BYREF
  char v60; // [rsp+58h] [rbp-10h]
  __int64 v63; // [rsp+C0h] [rbp+58h]
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // [rsp+C0h] [rbp+58h]
  __int64 v65; // [rsp+C8h] [rbp+60h]

  v58 = (struct _SLIST_ENTRY *)&v57;
  v57 = &v57;
  v2 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (_QWORD *)*((_QWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 4);
  v5 = v3[5];
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 1320LL);
  v7 = *((_QWORD *)v2 + 9);
  ++*(_DWORD *)(v6 + 20);
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
  if ( !v8 )
  {
    v40 = *(unsigned int *)(v6 + 44);
    v41 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v6 + 48);
    v42 = *(unsigned int *)(v6 + 40);
    v43 = *(unsigned int *)(v6 + 36);
    ++*(_DWORD *)(v6 + 24);
    v8 = (PSLIST_ENTRY)v41(v43, v40, v42, v6);
    if ( !v8 )
      goto LABEL_34;
  }
  VIDMM_RECYCLE_MULTIRANGE::Init(v8, 0LL, v7, v4, v5);
  v8[4].Next = (struct _SLIST_ENTRY *)v2;
  *((_QWORD *)&v8[4].Next + 1) = v3;
  v9 = (PSLIST_ENTRY)((char *)v8 + 200);
  *((_DWORD *)&v8[5].Next + 2) = 2;
  v10 = v58;
  if ( v58->Next != (struct _SLIST_ENTRY *)&v57 )
    goto LABEL_59;
  v8[13].Next = v58;
  v9->Next = (struct _SLIST_ENTRY *)&v57;
  v10->Next = v9;
  v58 = (PSLIST_ENTRY)((char *)v8 + 200);
  v11 = *(struct _SLIST_ENTRY **)(*((_QWORD *)a2 + 10) + 32LL);
  Next_low = (_QWORD *)LODWORD(v11->Next);
  if ( (unsigned int)((_DWORD)Next_low - 3) > 3 && (unsigned int)((_DWORD)Next_low - 9) > 1 )
  {
    v13 = v2;
    NextRange = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v13 + 16) )
      {
        v15 = this;
        if ( !NextRange )
          NextRange = (__int64 *)v13;
      }
      else if ( NextRange )
      {
        v15 = this;
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v13);
        Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                       *((_QWORD *)this + 1),
                       1u,
                       *((_QWORD *)v2 + 9),
                       NextRange[4],
                       *((_QWORD *)PreviousRange + 5));
        v45 = Multirange;
        if ( !Multirange )
          goto LABEL_46;
        v46 = (__int64 *)PreviousRange;
        *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
        Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
        *((_DWORD *)&Multirange[5].Next + 2) = 1;
        while ( 1 )
        {
          NextRange[18] = (__int64)v45;
          if ( NextRange == v46 )
            break;
          NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
        }
        v47 = v58;
        v48 = (PSLIST_ENTRY)((char *)v45 + 200);
        if ( v58->Next != (struct _SLIST_ENTRY *)&v57 )
          goto LABEL_59;
        *((_QWORD *)&v48->Next + 1) = v58;
        v11 = (struct _SLIST_ENTRY *)&v57;
        v48->Next = (struct _SLIST_ENTRY *)&v57;
        NextRange = 0LL;
        v47->Next = v48;
        v58 = v48;
      }
      else
      {
        v15 = this;
      }
      if ( v13 == (struct VIDMM_RECYCLE_RANGE *)v3 )
        break;
      v13 = VIDMM_RECYCLE_RANGE::GetNextRange(v13);
    }
    if ( !NextRange )
      goto LABEL_16;
    v63 = v3[5];
    v65 = NextRange[4];
    v56 = *((_QWORD *)v2 + 9);
    v16 = *(_QWORD *)(*((_QWORD *)v15 + 1) + 1320LL);
    ++*(_DWORD *)(v16 + 20);
    v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
    if ( !v17 )
    {
      v36 = *(unsigned int *)(v16 + 44);
      v37 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 48);
      v38 = *(unsigned int *)(v16 + 40);
      v39 = *(unsigned int *)(v16 + 36);
      ++*(_DWORD *)(v16 + 24);
      v17 = (PSLIST_ENTRY)v37(v39, v36, v38, v16);
      if ( !v17 )
      {
LABEL_34:
        v15 = this;
LABEL_46:
        v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, Next_low);
        v49[3] = *((_QWORD *)a2 + 10);
        v49[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
        v49[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
        v49[6] = **(_QWORD **)(*((_QWORD *)v15 + 1) + 8LL);
        WdLogEvent5_WdWarning(v49);
        v50 = v57;
        while ( v50 != &v57 )
        {
          v51 = v50 - 25;
          v50 = (_QWORD *)*v50;
          *((_DWORD *)v51 + 22) = 3;
          VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)v15 + 1), (struct _SLIST_ENTRY *)v51);
        }
        for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
        {
          v53 = *((_DWORD *)i + 16);
          *((_QWORD *)i + 17) = 0LL;
          *((_QWORD *)i + 18) = 0LL;
          *((_QWORD *)i + 19) = 0LL;
          *((_QWORD *)i + 20) = 0LL;
          if ( v53 )
          {
            v54 = v53 - 4;
            if ( v54 )
            {
              if ( v54 != 1 )
                goto LABEL_56;
              v55 = 1LL;
            }
            else
            {
              v55 = 0LL;
            }
          }
          else
          {
            v55 = 2LL;
          }
          VIDMM_RECYCLE_HEAP::AddRangeToTree(v15, v55, i);
LABEL_56:
          if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
            return 0;
        }
      }
    }
    VIDMM_RECYCLE_MULTIRANGE::Init(v17, 1LL, v56, v65, v63);
    v17[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v17[4].Next + 1) = v3;
    *((_DWORD *)&v17[5].Next + 2) = 1;
    while ( 1 )
    {
      NextRange[18] = (__int64)v17;
      if ( NextRange == v3 )
        break;
      NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
    }
    v18 = v58;
    v19 = (PSLIST_ENTRY)((char *)v17 + 200);
    if ( v58->Next == (struct _SLIST_ENTRY *)&v57 )
    {
      *((_QWORD *)&v19->Next + 1) = v58;
      v11 = (struct _SLIST_ENTRY *)&v57;
      v19->Next = (struct _SLIST_ENTRY *)&v57;
      v18->Next = v19;
      v58 = v19;
      goto LABEL_16;
    }
LABEL_59:
    __fastfail(3u);
  }
  while ( 1 )
  {
LABEL_16:
    v15 = this;
    if ( *((_DWORD *)v2 + 16) == 4 )
    {
      v20 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
              *((_QWORD *)this + 1),
              2u,
              *((_QWORD *)v2 + 9),
              *((_QWORD *)v2 + 4),
              *((_QWORD *)v2 + 5));
      if ( !v20 )
        goto LABEL_46;
      v20[4].Next = (struct _SLIST_ENTRY *)v2;
      *((_QWORD *)&v20[4].Next + 1) = v2;
      *((_QWORD *)v2 + 19) = v20;
      *((_DWORD *)&v20[5].Next + 2) = 0;
      v22 = (PSLIST_ENTRY)((char *)v20 + 200);
      v11 = v58;
      if ( v58->Next != (struct _SLIST_ENTRY *)&v57 )
        goto LABEL_59;
      *((_QWORD *)&v22->Next + 1) = v58;
      Next_low = &v57;
      v22->Next = (struct _SLIST_ENTRY *)&v57;
      v11->Next = v22;
      v58 = v22;
    }
    *((_QWORD *)v2 + 17) = v8;
    *((_QWORD *)v2 + 20) = 0LL;
    if ( v2 == (struct VIDMM_RECYCLE_RANGE *)v3 )
      break;
    v2 = VIDMM_RECYCLE_RANGE::GetNextRange(v2);
  }
  v23 = (_QWORD **)v57;
  *((_DWORD *)v57 - 28) = 3;
  v24 = v23 - 25;
  v25 = WdLogNewEntry5_WdEvent(v11, Next_low);
  *(_QWORD *)(v25 + 24) = v23 - 25;
  *(_QWORD *)(v25 + 32) = 2LL;
  WdLogEvent5_WdEvent(v25);
  LOBYTE(v26) = 0;
  v27 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  v28 = (__int64)*(v23 - 18);
  v59[0] = (char *)v24[5] - (char *)v24[4];
  v59[1] = v28;
  v60 = 0;
  if ( v27 )
  {
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v59, v27) < 0 )
      {
        v29 = v27->Children[0];
        if ( !v27->Children[0] )
        {
          LOBYTE(v26) = 0;
          break;
        }
      }
      else
      {
        v29 = v27->Children[1];
        if ( !v29 )
        {
          LOBYTE(v26) = 1;
          break;
        }
      }
      v27 = v29;
    }
  }
  RtlAvlInsertNodeEx((char *)this + 64, v27, v26, v23 - 25);
  *((_DWORD *)v24 + 22) = 2;
  v30 = (struct _SLIST_ENTRY *)(v23 - 25);
  v31 = *v23;
  v32 = (struct _SLIST_ENTRY *)VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v30);
  while ( v31 != &v57 )
  {
    v33 = *((unsigned int *)v31 - 28);
    v34 = (struct _SLIST_ENTRY *)(v31 - 25);
    *((_DWORD *)v31 - 28) = 3;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v33, v31 - 25);
    v31 = (_QWORD *)*v31;
    VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v34);
  }
  return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v32);
}
