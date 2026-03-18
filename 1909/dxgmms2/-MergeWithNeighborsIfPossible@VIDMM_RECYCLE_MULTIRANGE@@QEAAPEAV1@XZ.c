/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0068170
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0067B70 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066C20 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0068020 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068584 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068620 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0068790 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068804 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081158 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        struct _SLIST_ENTRY *this)
{
  struct _SLIST_ENTRY *Next; // rax
  _QWORD *v2; // r8
  struct _SLIST_ENTRY *v3; // rsi
  PSLIST_ENTRY v4; // rbx
  unsigned int v5; // edi
  struct _SLIST_ENTRY *v6; // rdx
  PSLIST_ENTRY v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rdx
  PSLIST_ENTRY v11; // r12
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int v14; // ebp
  struct _SLIST_ENTRY *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rbx
  struct _SLIST_ENTRY *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  struct _SLIST_ENTRY *v23; // rcx
  __int64 v24; // rbx
  struct _SLIST_ENTRY *v25; // r14
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned int v34; // r15d
  struct _SLIST_ENTRY *v35; // rbp
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rdi
  PSLIST_ENTRY Multirange; // rdi
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  struct VIDMM_RECYCLE_RANGE *v42; // rbx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  struct VIDMM_RECYCLE_RANGE *v47; // rdi
  unsigned int v48; // [rsp+70h] [rbp+8h]
  __int64 v49; // [rsp+70h] [rbp+8h]
  struct _SLIST_ENTRY *v50; // [rsp+78h] [rbp+10h]
  struct _SLIST_ENTRY *v51; // [rsp+78h] [rbp+10h]
  __int64 v52; // [rsp+80h] [rbp+18h]

  Next = this[4].Next;
  v2 = 0LL;
  v3 = this[5].Next;
  v4 = this;
  v5 = *((_DWORD *)&this[13].Next + 2);
  v50 = v3;
  v6 = Next[8].Next;
  v48 = v5;
  if ( v6 != (struct _SLIST_ENTRY *)(*((_QWORD *)&Next[4].Next + 1) + 72LL) )
    v2 = &v6[-8].Next + 1;
  v7 = 0LL;
  if ( v2 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v7 = (PSLIST_ENTRY)v2[18];
      }
      else if ( v5 == 2 )
      {
        v7 = (PSLIST_ENTRY)v2[19];
      }
      else
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5 - 1, v6);
        v40[3] = 270LL;
        v40[4] = 52LL;
        v40[5] = 10LL;
        v40[6] = 0LL;
        v40[7] = 0LL;
        WdLogEvent5_WdCriticalError(v40);
      }
    }
    else
    {
      v7 = (PSLIST_ENTRY)v2[17];
    }
  }
  v8 = *((_QWORD *)&v4[4].Next + 1);
  v9 = 0LL;
  v10 = *(_QWORD *)(v8 + 120);
  if ( v10 != *(_QWORD *)(v8 + 72) + 72LL )
    v9 = (_QWORD *)(v10 - 120);
  v11 = 0LL;
  if ( v9 )
  {
    v12 = *((_DWORD *)&v4[13].Next + 2);
    if ( v12 )
    {
      v13 = (unsigned int)(v12 - 1);
      if ( (_DWORD)v13 )
      {
        if ( (_DWORD)v13 == 1 )
        {
          v11 = (PSLIST_ENTRY)v9[19];
        }
        else
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v10);
          v41[3] = 270LL;
          v41[4] = 52LL;
          v41[5] = 10LL;
          v41[6] = 0LL;
          v41[7] = 0LL;
          WdLogEvent5_WdCriticalError(v41);
        }
      }
      else
      {
        v11 = (PSLIST_ENTRY)v9[18];
      }
    }
    else
    {
      v11 = (PSLIST_ENTRY)v9[17];
    }
  }
  if ( !v7 )
  {
    if ( !v11 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
    v7 = v4;
LABEL_18:
    v14 = *((_DWORD *)&v4[5].Next + 2);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v14, v7);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v14, v11);
    v15 = v7[6].Next;
    v16 = *((_QWORD *)&v11[2].Next + 1);
    v17 = (__int64)v7[2].Next;
    v51 = v7[4].Next;
    v52 = *((_QWORD *)&v11[4].Next + 1);
    v49 = v16;
    v18 = *((_QWORD *)&v3[2].Next->Next + 1);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      v16 = v49;
      v7[6].Next = 0LL;
    }
    --*((_QWORD *)&v7[5].Next->Next + 1);
    v19 = v7[5].Next;
    *((_BYTE *)&v7[14].Next + 8) = 1;
    v7[14].Next = 0LL;
    v20 = *((_QWORD *)&v19[8].Next + 1);
    if ( v20 )
    {
      v43 = *(_QWORD *)(v20 + 24) + 144LL * *(_QWORD *)(v20 + 32);
      *(_DWORD *)v43 = 1;
      *(_QWORD *)(v43 + 8) = v7;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v43 + 16), 0LL);
      v16 = v49;
      ++*(_QWORD *)(*((_QWORD *)&v19[8].Next + 1) + 32LL);
      v44 = *((_QWORD *)&v19[8].Next + 1);
      if ( *(_QWORD *)(v44 + 32) == *(_QWORD *)(v44 + 48) )
      {
        *(_QWORD *)(v44 + 32) = 0LL;
        *(_BYTE *)(*((_QWORD *)&v19[8].Next + 1) + 40LL) = 1;
      }
    }
    v21 = *(unsigned int *)(v18 + 1612);
    v22 = *(_QWORD *)(v18 + 1320);
    if ( (unsigned int)v21 >= 4 )
    {
      ++*(_DWORD *)(v22 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v22) < *(_WORD *)(v22 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v22, v7);
      }
      else
      {
        ++*(_DWORD *)(v22 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v22 + 56))(v7, v22);
      }
      v16 = v49;
    }
    else
    {
      *(_QWORD *)(v18 + 8 * v21 + 1648) = v7;
      ++*(_DWORD *)(v18 + 1612);
    }
    v23 = v11[6].Next;
    v24 = *((_QWORD *)&v3[2].Next->Next + 1);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      v16 = v49;
      v11[6].Next = 0LL;
    }
    --*((_QWORD *)&v11[5].Next->Next + 1);
    v25 = v11[5].Next;
    *((_BYTE *)&v11[14].Next + 8) = 1;
    v11[14].Next = 0LL;
    v26 = *((_QWORD *)&v25[8].Next + 1);
    if ( v26 )
    {
      v45 = *(_QWORD *)(v26 + 24) + 144LL * *(_QWORD *)(v26 + 32);
      *(_DWORD *)v45 = 1;
      *(_QWORD *)(v45 + 8) = v11;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v45 + 16), 0LL);
      v16 = v49;
      ++*(_QWORD *)(*((_QWORD *)&v25[8].Next + 1) + 32LL);
      v46 = *((_QWORD *)&v25[8].Next + 1);
      if ( *(_QWORD *)(v46 + 32) == *(_QWORD *)(v46 + 48) )
      {
        *(_QWORD *)(v46 + 32) = 0LL;
        *(_BYTE *)(*((_QWORD *)&v25[8].Next + 1) + 40LL) = 1;
      }
    }
    v27 = *(unsigned int *)(v24 + 1612);
    v28 = *(_QWORD *)(v24 + 1320);
    if ( (unsigned int)v27 >= 4 )
    {
      ++*(_DWORD *)(v28 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v28) >= *(_WORD *)(v28 + 16) )
      {
        ++*(_DWORD *)(v28 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v28 + 56))(v11, v28);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v28, v11);
      }
      v16 = v49;
    }
    else
    {
      *(_QWORD *)(v24 + 8 * v27 + 1648) = v11;
      ++*(_DWORD *)(v24 + 1612);
    }
    v29 = *((_QWORD *)&v3[2].Next->Next + 1);
    v30 = *(_DWORD *)(v29 + 1612);
    v31 = *(_QWORD *)(v29 + 1320);
    if ( v30 )
    {
      v32 = (unsigned int)(v30 - 1);
      v4 = *(PSLIST_ENTRY *)(v29 + 8 * v32 + 1648);
      *(_QWORD *)(v29 + 8 * v32 + 1648) = 0LL;
      --*(_DWORD *)(v29 + 1612);
    }
    else
    {
      ++*(_DWORD *)(v31 + 20);
      v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v31);
      if ( !v4 )
      {
        ++*(_DWORD *)(v31 + 24);
        v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v31 + 48))(
                             *(unsigned int *)(v31 + 36),
                             *(unsigned int *)(v31 + 44),
                             *(unsigned int *)(v31 + 40),
                             v31);
      }
      v16 = v49;
    }
    if ( v4 )
      VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v4, v5, (__int64)v3, v17, v16);
    v4[4].Next = v51;
    *((_QWORD *)&v4[4].Next + 1) = v52;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v4);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v3[2].Next, v14, v4);
    if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v5 )
    {
      v47 = (struct VIDMM_RECYCLE_RANGE *)v4[4].Next;
      if ( !*((_DWORD *)v47 + 16) )
      {
        VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v3[2].Next, 2LL, v4);
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
          *((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1),
          (struct VIDMM_RECYCLE_MULTIRANGE *)v4);
        VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v47);
      }
    }
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
  }
  if ( !v11 )
  {
    v11 = v4;
    goto LABEL_18;
  }
  v34 = *((_DWORD *)&v4[5].Next + 2);
  v35 = v7[4].Next;
  v36 = *((_QWORD *)&v11[4].Next + 1);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v34, v7);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v34, v4);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v4[5].Next[2].Next, v34, v11);
  v37 = (__int64)v7[2].Next;
  v38 = *((_QWORD *)&v11[2].Next + 1);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
    *((VIDMM_RECYCLE_HEAP_MGR **)&v50[2].Next->Next + 1),
    (struct VIDMM_RECYCLE_MULTIRANGE *)v7);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
    *((VIDMM_RECYCLE_HEAP_MGR **)&v50[2].Next->Next + 1),
    (struct VIDMM_RECYCLE_MULTIRANGE *)v4);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
    *((VIDMM_RECYCLE_HEAP_MGR **)&v50[2].Next->Next + 1),
    (struct VIDMM_RECYCLE_MULTIRANGE *)v11);
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 *((_QWORD *)&v50[2].Next->Next + 1),
                 v48,
                 (__int64)v50,
                 v37,
                 v38);
  Multirange[4].Next = v35;
  *((_QWORD *)&Multirange[4].Next + 1) = v36;
  VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v50[2].Next, v34, Multirange);
  if ( v50->Next == (struct _SLIST_ENTRY *)1 && !v48 )
  {
    v42 = (struct VIDMM_RECYCLE_RANGE *)Multirange[4].Next;
    if ( !*((_DWORD *)v42 + 16) )
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v50[2].Next, 2LL, Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
        *((VIDMM_RECYCLE_HEAP_MGR **)&v50[2].Next->Next + 1),
        (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v50[2].Next->Next + 1), v42);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
}
