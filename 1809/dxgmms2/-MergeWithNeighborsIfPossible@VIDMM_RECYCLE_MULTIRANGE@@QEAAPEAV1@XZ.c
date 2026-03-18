/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005C8C0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4E0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0059828 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005AFAC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDA8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005CE40 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CF70 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005D0C8 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rax
  _QWORD *v2; // r8
  struct _SLIST_ENTRY *v3; // rbp
  PSLIST_ENTRY v4; // rbx
  unsigned int v5; // r14d
  struct _SLIST_ENTRY *v6; // rdx
  struct _SLIST_ENTRY *v7; // rdi
  __int64 v8; // rax
  PSLIST_ENTRY v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int v15; // r12d
  struct _SLIST_ENTRY *v16; // rcx
  struct _SLIST_ENTRY *v17; // r13
  __int64 v18; // r15
  __int64 v19; // r15
  struct _SLIST_ENTRY *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdi
  struct _SLIST_ENTRY *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rdi
  unsigned int v27; // r15d
  struct _SLIST_ENTRY *v28; // rcx
  struct _SLIST_ENTRY *v29; // r12
  __int64 v30; // r13
  __int64 v31; // rbx
  __int64 v32; // rbx
  struct _SLIST_ENTRY *v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rdi
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 (__fastcall *v40)(__int64, __int64, __int64, __int64); // rax
  __int64 v41; // r8
  __int64 v42; // rcx
  struct _SLIST_ENTRY *v43; // rdi
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(__int64, __int64, __int64, __int64); // rax
  __int64 v46; // r8
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 v49; // [rsp+70h] [rbp+8h]
  struct _SLIST_ENTRY *v50; // [rsp+70h] [rbp+8h]
  struct _SLIST_ENTRY *v51; // [rsp+78h] [rbp+10h]
  __int64 v52; // [rsp+78h] [rbp+10h]
  __int64 v53; // [rsp+80h] [rbp+18h]

  Next = ListEntry[4].Next;
  v2 = 0LL;
  v3 = ListEntry[5].Next;
  v4 = ListEntry;
  v5 = *((_DWORD *)&ListEntry[13].Next + 2);
  v6 = Next[8].Next;
  if ( v6 != (struct _SLIST_ENTRY *)(*((_QWORD *)&Next[4].Next + 1) + 72LL) )
    v2 = &v6[-8].Next + 1;
  v7 = 0LL;
  if ( v2 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v7 = (struct _SLIST_ENTRY *)v2[18];
      }
      else if ( v5 == 2 )
      {
        v7 = (struct _SLIST_ENTRY *)v2[19];
      }
      else
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5 - 1, v6);
        v37[3] = 270LL;
        v37[4] = 52LL;
        v37[5] = 10LL;
        v37[6] = 0LL;
        v37[7] = 0LL;
        WdLogEvent5_WdCriticalError(v37);
      }
    }
    else
    {
      v7 = (struct _SLIST_ENTRY *)v2[17];
    }
  }
  v8 = *((_QWORD *)&v4[4].Next + 1);
  v9 = 0LL;
  v10 = *(_QWORD *)(v8 + 120);
  if ( v10 != *(_QWORD *)(v8 + 72) + 72LL )
  {
    v11 = (_QWORD *)(v10 - 120);
    if ( v11 )
    {
      v12 = *((_DWORD *)&v4[13].Next + 2);
      if ( v12 )
      {
        v13 = (unsigned int)(v12 - 1);
        if ( (_DWORD)v13 )
        {
          if ( (_DWORD)v13 == 1 )
          {
            v9 = (PSLIST_ENTRY)v11[19];
          }
          else
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
            v38[3] = 270LL;
            v38[4] = 52LL;
            v38[5] = 10LL;
            v38[6] = 0LL;
            v38[7] = 0LL;
            WdLogEvent5_WdCriticalError(v38);
          }
        }
        else
        {
          v9 = (PSLIST_ENTRY)v11[18];
        }
      }
      else
      {
        v9 = (PSLIST_ENTRY)v11[17];
      }
    }
  }
  if ( v7 )
  {
    if ( v9 )
    {
      v15 = *((_DWORD *)&v4[5].Next + 2);
      v51 = v7[4].Next;
      v53 = *((_QWORD *)&v9[4].Next + 1);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v15, v7);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v15, v4);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v15, v9);
      v16 = v7[6].Next;
      v17 = v7[2].Next;
      v49 = *((_QWORD *)&v9[2].Next + 1);
      v18 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        v7[6].Next = 0LL;
      }
      --*((_QWORD *)&v7[5].Next->Next + 1);
      v19 = *(_QWORD *)(v18 + 1320);
      ++*(_DWORD *)(v19 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v19) >= *(_WORD *)(v19 + 16) )
      {
        ++*(_DWORD *)(v19 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v19 + 56))(v7, v19);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v19, v7);
      }
      v20 = v4[6].Next;
      v21 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v20 )
      {
        ExFreePoolWithTag(v20, 0);
        v4[6].Next = 0LL;
      }
      --*((_QWORD *)&v4[5].Next->Next + 1);
      v22 = *(_QWORD *)(v21 + 1320);
      ++*(_DWORD *)(v22 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v22) >= *(_WORD *)(v22 + 16) )
      {
        ++*(_DWORD *)(v22 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v22 + 56))(v4, v22);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v22, v4);
      }
      v23 = v9[6].Next;
      v24 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v23 )
      {
        ExFreePoolWithTag(v23, 0);
        v9[6].Next = 0LL;
      }
      --*((_QWORD *)&v9[5].Next->Next + 1);
      v25 = *(_QWORD *)(v24 + 1320);
      ++*(_DWORD *)(v25 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v25) >= *(_WORD *)(v25 + 16) )
      {
        ++*(_DWORD *)(v25 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v25 + 56))(v9, v25);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v25, v9);
      }
      v26 = *(_QWORD *)(*((_QWORD *)&v3[2].Next->Next + 1) + 1320LL);
      ++*(_DWORD *)(v26 + 20);
      v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v26);
      if ( v4
        || (v39 = *(unsigned int *)(v26 + 44),
            v40 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v26 + 48),
            v41 = *(unsigned int *)(v26 + 40),
            v42 = *(unsigned int *)(v26 + 36),
            ++*(_DWORD *)(v26 + 24),
            (v4 = (PSLIST_ENTRY)v40(v42, v39, v41, v26)) != 0LL) )
      {
        VIDMM_RECYCLE_MULTIRANGE::Init(v4, v5, v3, v17, v49);
      }
      v4[4].Next = v51;
      *((_QWORD *)&v4[4].Next + 1) = v53;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v4);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v3[2].Next, v15, v4);
      if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v5 )
      {
        v43 = v4[4].Next;
        if ( !LODWORD(v43[4].Next) )
          goto LABEL_68;
      }
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
    }
    v9 = v4;
  }
  else
  {
    if ( !v9 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
    v7 = v4;
  }
  v27 = *((_DWORD *)&v4[5].Next + 2);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v27, v7);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v27, v9);
  v28 = v7[6].Next;
  v29 = v7[2].Next;
  v30 = *((_QWORD *)&v9[2].Next + 1);
  v50 = v7[4].Next;
  v52 = *((_QWORD *)&v9[4].Next + 1);
  v31 = *((_QWORD *)&v3[2].Next->Next + 1);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    v7[6].Next = 0LL;
  }
  --*((_QWORD *)&v7[5].Next->Next + 1);
  v32 = *(_QWORD *)(v31 + 1320);
  ++*(_DWORD *)(v32 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v32) >= *(_WORD *)(v32 + 16) )
  {
    ++*(_DWORD *)(v32 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v32 + 56))(v7, v32);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v32, v7);
  }
  v33 = v9[6].Next;
  v34 = *((_QWORD *)&v3[2].Next->Next + 1);
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0);
    v9[6].Next = 0LL;
  }
  --*((_QWORD *)&v9[5].Next->Next + 1);
  v35 = *(_QWORD *)(v34 + 1320);
  ++*(_DWORD *)(v35 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v35) >= *(_WORD *)(v35 + 16) )
  {
    ++*(_DWORD *)(v35 + 32);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v35 + 56))(v9, v35);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v35, v9);
  }
  v36 = *(_QWORD *)(*((_QWORD *)&v3[2].Next->Next + 1) + 1320LL);
  ++*(_DWORD *)(v36 + 20);
  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v36);
  if ( v4
    || (v44 = *(unsigned int *)(v36 + 44),
        v45 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v36 + 48),
        v46 = *(unsigned int *)(v36 + 40),
        v47 = *(unsigned int *)(v36 + 36),
        ++*(_DWORD *)(v36 + 24),
        (v4 = (PSLIST_ENTRY)v45(v47, v44, v46, v36)) != 0LL) )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v4, v5, v3, v29, v30);
  }
  v4[4].Next = v50;
  *((_QWORD *)&v4[4].Next + 1) = v52;
  VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v4);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v3[2].Next, v27, v4);
  if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v5 )
  {
    v43 = v4[4].Next;
    if ( !LODWORD(v43[4].Next) )
    {
LABEL_68:
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v3[2].Next, 2LL, v4);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v4);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v43, v48);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
}
