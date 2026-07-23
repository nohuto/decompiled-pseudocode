/*
 * XREFs of CcInitializeAsyncRead @ 0x14018AC58
 * Callers:
 *     CcInitializePartition @ 0x14018A6F0 (CcInitializePartition.c)
 * Callees:
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 */

char __fastcall CcInitializeAsyncRead(__int64 a1)
{
  char v2; // di
  PVOID PoolWithTag; // rax
  __int64 v4; // rdx
  PVOID v5; // rax
  __int64 v6; // rdx
  PVOID v7; // rax
  __int64 v8; // rcx
  PVOID v9; // rax
  __int64 v10; // rdx
  PVOID v11; // rax
  __int64 v12; // rdx
  PVOID v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rbx
  __int64 v16; // r14
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  int v23; // ebx
  _DWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  bool v27; // cf
  unsigned int v28; // ebp
  _QWORD *StartContext; // rax
  void *v30; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+8h] BYREF

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)(CcMaxNestingLevel + 1), 0x71576343u);
  v4 = (unsigned int)(CcMaxNestingLevel + 1);
  *(_QWORD *)(a1 + 776) = PoolWithTag;
  v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v4, 0x71576343u);
  v6 = (unsigned int)(CcMaxNestingLevel + 1);
  *(_QWORD *)(a1 + 800) = v5;
  v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v6, 0x71576343u);
  v8 = (unsigned int)(CcMaxNestingLevel + 1);
  *(_QWORD *)(a1 + 808) = v7;
  *(_QWORD *)(a1 + 824) = ExAllocatePoolWithTag(NonPagedPoolNx, 404 * v8, 0x71576343u);
  v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)(CcMaxNestingLevel + 1), 0x71576343u);
  v10 = (unsigned int)(CcMaxNestingLevel + 1);
  *(_QWORD *)(a1 + 816) = v9;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v10, 0x71576343u);
  v12 = (unsigned int)(CcMaxNestingLevel + 1);
  *(_QWORD *)(a1 + 784) = v11;
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v12, 0x71576343u);
  *(_QWORD *)(a1 + 792) = v13;
  if ( *(_QWORD *)(a1 + 776)
    && *(_QWORD *)(a1 + 800)
    && *(_QWORD *)(a1 + 808)
    && *(_QWORD *)(a1 + 824)
    && *(_QWORD *)(a1 + 816)
    && *(_QWORD *)(a1 + 784)
    && v13 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = 404LL * v14;
      v16 = 16LL * v14;
      v17 = (_QWORD *)(v16 + *(_QWORD *)(a1 + 776));
      v17[1] = v17;
      *v17 = v17;
      v18 = (_QWORD *)(v16 + *(_QWORD *)(a1 + 800));
      v18[1] = v18;
      *v18 = v18;
      v19 = (_QWORD *)(v16 + *(_QWORD *)(a1 + 808));
      v19[1] = v19;
      *v19 = v19;
      v20 = 3LL * v14;
      v21 = *(_QWORD *)(a1 + 816);
      *(_WORD *)(v21 + 8 * v20) = 1;
      *(_BYTE *)(v21 + 8 * v20 + 2) = 6;
      *(_DWORD *)(v21 + 8 * v20 + 4) = 0;
      v22 = (_QWORD *)(v21 + 24LL * v14 + 8);
      v22[1] = v22;
      *v22 = v22;
      *(_DWORD *)(*(_QWORD *)(a1 + 784) + 4LL * v14) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 792) + 4LL * v14) = 0;
      memset((void *)(v15 + *(_QWORD *)(a1 + 824)), 255, 4LL * (unsigned int)CcMaxAsyncReadWorkerThreads);
      *(_DWORD *)(v15 + *(_QWORD *)(a1 + 824)) = 0;
      v23 = 1;
      if ( (unsigned int)CcMaxAsyncReadWorkerThreads > 1 )
        break;
LABEL_13:
      if ( ++v14 > CcMaxNestingLevel )
      {
        *(_QWORD *)(a1 + 832) = 0LL;
        v28 = 0;
        while ( 1 )
        {
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          StartContext = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
          v30 = StartContext;
          if ( !StartContext )
            break;
          *((_DWORD *)StartContext + 8) = 3;
          StartContext[7] = a1;
          *((_DWORD *)StartContext + 10) = 0;
          *((_DWORD *)StartContext + 9) = v28;
          StartContext[2] = CcAsyncReadWorkerThread;
          StartContext[3] = StartContext;
          *StartContext = 0LL;
          ++*(_DWORD *)(*(_QWORD *)(a1 + 784) + 4LL * v28);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 904)) <= 1 )
            __fastfail(0xEu);
          if ( PsCreateSystemThread(
                 &ThreadHandle,
                 0x1FFFFFu,
                 &ObjectAttributes,
                 *(HANDLE *)(*(_QWORD *)(a1 + 8) + 112LL),
                 0LL,
                 (PKSTART_ROUTINE)CcAsyncReadWorker,
                 StartContext) < 0 )
          {
            ExFreePoolWithTag(v30, 0x71576343u);
            CcDereferencePartition(a1);
            return v2;
          }
          ZwClose(ThreadHandle);
          if ( ++v28 > CcMaxNestingLevel )
            return 1;
        }
        return v2;
      }
    }
    while ( 1 )
    {
      v24 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
      if ( !v24 )
        break;
      v24[8] = 3;
      *((_QWORD *)v24 + 7) = a1;
      v24[10] = v23;
      v24[9] = v14;
      *((_QWORD *)v24 + 2) = CcAsyncReadWorkerThread;
      *((_QWORD *)v24 + 3) = v24;
      *(_QWORD *)v24 = 0LL;
      v25 = v16 + *(_QWORD *)(a1 + 776);
      v26 = *(_QWORD **)(v25 + 8);
      if ( *v26 != v25 )
        __fastfail(3u);
      *(_QWORD *)v24 = v25;
      v27 = ++v23 < (unsigned int)CcMaxAsyncReadWorkerThreads;
      *((_QWORD *)v24 + 1) = v26;
      *v26 = v24;
      *(_QWORD *)(v25 + 8) = v24;
      if ( !v27 )
        goto LABEL_13;
    }
  }
  return v2;
}
