/*
 * XREFs of NdisAllocateNetBufferMdlAndData @ 0x1C000CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000D4D8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBufferMdlAndData(NDIS_HANDLE PoolHandle)
{
  PSLIST_ENTRY v2; // rbx
  unsigned int Number; // ebp
  int v4; // r14d
  unsigned __int64 v5; // rax
  char *v6; // rsi
  _SLIST_HEADER *v7; // rcx
  _SLIST_ENTRY *v8; // rsi
  int v9; // eax
  unsigned __int64 v11; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v13; // al
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int16 v19; // dx
  int v20; // edx
  KIRQL v21; // al
  __int64 v22; // r8

  v2 = 0LL;
  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 22) & 1) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v4 = 1;
      if ( ndisMaxNumberOfProcessors == 1 )
        goto LABEL_14;
      v5 = (unsigned __int64)Number << 8;
      v6 = (char *)PoolHandle + v5 + 384;
      if ( !v6[216] )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v5 + 384),
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
      ++*((_DWORD *)v6 + 5);
      v2 = ExpInterlockedPopEntrySList(v7);
      if ( !v2 )
      {
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v6 + 25)) < 0xAu
          || (v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 26),
              v22 = *((_QWORD *)v6 + 24),
              *((_QWORD *)v6 + 24) = *((_QWORD *)v6 + 25),
              *((_QWORD *)v6 + 25) = v22,
              KeReleaseSpinLock((PKSPIN_LOCK)v6 + 26, v21),
              (v2 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v6 + 24))) == 0LL) )
        {
          ++*((_DWORD *)v6 + 6);
        }
      }
      if ( !v2 )
      {
LABEL_14:
        ++*((_DWORD *)PoolHandle + 37);
        v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
        if ( !v2 )
        {
          v11 = *((unsigned int *)PoolHandle + 43);
          ++*((_DWORD *)PoolHandle + 38);
          if ( v11 + 32 < v11 )
            return 0LL;
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v11 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            v2 = PoolWithTagPriority + 2;
            PoolWithTagPriority->Next = 0LL;
            if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
            {
              PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
              v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
              v14 = *((_QWORD *)PoolHandle + 2);
              v15 = (char *)PoolHandle + 16;
              v16 = &v2[-2].Next + 1;
              if ( *(NDIS_HANDLE *)(v14 + 8) != (char *)PoolHandle + 16 )
                __fastfail(3u);
              v16[1] = v15;
              *v16 = v14;
              *(_QWORD *)(v14 + 8) = v16;
              *v15 = v16;
              KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v13);
            }
          }
          else
          {
            v2 = 0LL;
          }
          v4 = 0;
          if ( !v2 )
            return 0LL;
        }
        *((_DWORD *)&v2[-1].Next + 2) = Number;
      }
      v8 = v2 + 11;
      if ( v4 )
      {
        *((_DWORD *)&v2[13].Next + 2) = *((_DWORD *)PoolHandle + 23);
        v8->Next = 0LL;
      }
      else
      {
        v17 = *((unsigned int *)PoolHandle + 23);
        v18 = (unsigned __int64)v8 + *((unsigned int *)PoolHandle + 24);
        v19 = (_WORD)v8 + *((_DWORD *)PoolHandle + 24);
        v8->Next = 0LL;
        *((_WORD *)&v2[11].Next + 5) = 0;
        *((_DWORD *)&v2[13].Next + 2) = v17;
        v2[13].Next = (_SLIST_ENTRY *)(v18 & 0xFFFFFFFFFFFFF000uLL);
        v20 = v19 & 0xFFF;
        *((_DWORD *)&v2[13].Next + 3) = v20;
        *((_WORD *)&v2[11].Next + 4) = 8 * ((((unsigned __int64)(unsigned __int16)v20 + v17 + 4095) >> 12) + 6);
        MmBuildMdlForNonPagedPool((PMDL)&v2[11]);
      }
      v9 = *((_DWORD *)PoolHandle + 23);
      v2->Next = 0LL;
      *((_QWORD *)&v2[3].Next + 1) = PoolHandle;
      *((_QWORD *)&v2->Next + 1) = v8;
      LODWORD(v2[1].Next) = v9;
      v2[2].Next = v8;
      *((_DWORD *)&v2[2].Next + 2) = v9;
      *((_DWORD *)&v2[1].Next + 2) = 0;
      LODWORD(v2[3].Next) = 0;
      *((_QWORD *)&v2[4].Next + 1) = 0LL;
      v2[4].Next = 0LL;
      *((_QWORD *)&v2[8].Next + 1) = 0LL;
      v2[8].Next = 0LL;
      *((_QWORD *)&v2[10].Next + 1) = 0LL;
    }
    else
    {
      DbgPrint("NdisAllocateNetBufferMdlAndData: Pool %p wrong pool type.\n", PoolHandle);
    }
  }
  return (PNET_BUFFER)v2;
}
