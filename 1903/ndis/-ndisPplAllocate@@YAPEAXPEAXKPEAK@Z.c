/*
 * XREFs of ?ndisPplAllocate@@YAPEAXPEAXKPEAK@Z @ 0x1C001A794
 * Callers:
 *     NdisAllocateNetBuffer @ 0x1C001A6B0 (NdisAllocateNetBuffer.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000D4D8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     ?ndisAllocateFromLookasideList@@YAPEAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@@Z @ 0x1C001A8D4 (-ndisAllocateFromLookasideList@@YAPEAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@@Z.c)
 *     ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C001A940 (-ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z.c)
 */

PSLIST_ENTRY __fastcall ndisPplAllocate(char *a1, __int64 a2, unsigned int *a3)
{
  unsigned int Number; // ebp
  bool v5; // zf
  unsigned __int64 v7; // rax
  struct _NDIS_NPAGED_LOOKASIDE_LIST *v8; // rbx
  PSLIST_ENTRY v9; // rbx
  SIZE_T v11; // rdx
  ULONG v12; // r8d
  POOL_TYPE v13; // ecx
  _SLIST_ENTRY *v14; // rax
  KSPIN_LOCK *v15; // rdi
  KIRQL v16; // al
  char *v17; // rsi
  _QWORD *v18; // rcx
  __int64 v19; // rdx

  Number = KeGetPcr()->Prcb.Number;
  v5 = ndisMaxNumberOfProcessors == 1;
  *a3 = 1;
  if ( v5 )
    goto LABEL_5;
  v7 = (unsigned __int64)Number << 8;
  v8 = (struct _NDIS_NPAGED_LOOKASIDE_LIST *)&a1[v7 + 384];
  if ( !v8->Initialized )
    ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)&a1[v7 + 384], (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(a1 + 128));
  v9 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v8);
  if ( !v9 )
  {
LABEL_5:
    ++*((_DWORD *)a1 + 37);
    v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 8);
    if ( v9 )
      goto LABEL_6;
    v11 = *((unsigned int *)a1 + 43);
    v12 = *((_DWORD *)a1 + 42);
    v13 = *((_DWORD *)a1 + 41);
    ++*((_DWORD *)a1 + 38);
    v14 = (_SLIST_ENTRY *)ndisAllocateFromNPagedPool(v13, v11, v12, (PLOOKASIDE_LIST_EX)(a1 + 128));
    v9 = v14;
    if ( v14 )
    {
      v15 = (KSPIN_LOCK *)(a1 + 8);
      v14[-2].Next = (_SLIST_ENTRY *)a1;
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 1);
      v17 = a1 + 16;
      v18 = &v9[-2].Next + 1;
      v19 = *(_QWORD *)v17;
      if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 )
        __fastfail(3u);
      *v18 = v19;
      v18[1] = v17;
      *(_QWORD *)(v19 + 8) = v18;
      *(_QWORD *)v17 = v18;
      KeReleaseSpinLock(v15, v16);
    }
    *a3 = 0;
    if ( v9 )
LABEL_6:
      *((_DWORD *)&v9[-1].Next + 2) = Number;
  }
  return v9;
}
