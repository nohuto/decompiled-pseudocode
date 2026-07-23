/*
 * XREFs of MmPrefetchPagesEx @ 0x1406635F8
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140663144 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x1406635E0 (MmPrefetchPages.c)
 *     PfSnPrefetchSections @ 0x140664110 (PfSnPrefetchSections.c)
 *     PfpPrefetchFiles @ 0x140865268 (PfpPrefetchFiles.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x14001A020 (MiPfCompletePrefetchIos.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfExecuteReadList @ 0x14066395C (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x140663A90 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  PVOID PoolWithTag; // rax
  int v6; // r8d
  void *v7; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int v9; // ebx
  unsigned int v10; // r13d
  _QWORD *v11; // r14
  unsigned __int64 **v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r15
  int List; // eax
  int v16; // ecx
  char v18; // bl
  unsigned int v19; // r12d
  unsigned int v20; // ebp
  __int64 *v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r14
  _QWORD *v25; // rbx
  __int64 v26; // rbp
  PVOID *v27; // rbx
  char **v28; // rax
  char *v29; // rcx
  __int64 v30; // rdx
  struct _KTHREAD *v31; // [rsp+20h] [rbp-48h]
  PVOID v33; // [rsp+88h] [rbp+20h]

  v3 = a1;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a1, 0x6C526D4Du);
  v33 = PoolWithTag;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = 0;
  v31 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)v3 )
  {
    v11 = PoolWithTag;
    v12 = (unsigned __int64 **)PoolWithTag;
    v13 = a2 - (_QWORD)PoolWithTag;
    v14 = (unsigned int)v3;
    do
    {
      List = MiPfPrepareReadList(*(__int64 **)((char *)v11 + v13), v12, a3);
      if ( List < 0 )
      {
        v10 = List;
      }
      else
      {
        v16 = v9 | 1;
        if ( !*v11 )
          v16 = v9;
        v9 = v16;
      }
      ++v12;
      ++v11;
      --v14;
    }
    while ( v14 );
    v7 = v33;
    CurrentThread = v31;
  }
  if ( (v9 & 1) == 0 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ExFreePoolWithTag(v7, 0);
    return v10;
  }
  ++BYTE6(CurrentThread[1].Queue);
  v18 = v9 & 0xFE;
  v19 = 0;
  v20 = 0;
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v21 = (__int64 *)v7;
  while ( !*v21 )
  {
LABEL_19:
    ++v20;
    ++v21;
    if ( v20 >= (unsigned int)v3 )
      goto LABEL_20;
  }
  *(_DWORD *)(*v21 + 80) = 0;
  v22 = MiPfPutPagesInTransition(*v21, a3, v6);
  if ( v22 >= 0 )
  {
    v23 = *v21;
    if ( *(_QWORD *)(*v21 + 96) == *v21 + 96 )
    {
      MiReleaseReadListResources(v23);
      ExFreePoolWithTag((PVOID)*v21, 0);
      *v21 = 0LL;
    }
    else
    {
      v18 |= 1u;
      MiPfExecuteReadList(v23, 0LL, 0xFFFFFFFFLL, 0LL);
    }
    goto LABEL_19;
  }
  v19 = v22;
  while ( v20 < (unsigned int)v3 )
  {
    if ( *((_QWORD *)v7 + v20) )
    {
      while ( 1 )
      {
        v28 = (char **)(*((_QWORD *)v7 + v20) + 96LL);
        v29 = *v28;
        if ( *v28 == (char *)v28 )
          break;
        if ( *((char ***)v29 + 1) != v28 || (v30 = *(_QWORD *)v29, *(char **)(*(_QWORD *)v29 + 8LL) != v29) )
          __fastfail(3u);
        *v28 = (char *)v30;
        *(_QWORD *)(v30 + 8) = v28;
        MiFreeInPageSupportBlock(v29);
      }
      MiReleaseReadListResources(*((_QWORD *)v7 + v20));
      ExFreePoolWithTag(*((PVOID *)v7 + v20), 0);
      *((_QWORD *)v7 + v20) = 0LL;
    }
    ++v20;
  }
LABEL_20:
  v24 = v3;
  if ( (v18 & 1) != 0 )
  {
    v19 = 0;
    if ( (_DWORD)v3 )
    {
      v25 = v7;
      v26 = v3;
      do
      {
        if ( *v25 )
        {
          MiPfCompletePrefetchIos((_QWORD **)(*v25 + 96LL), 0LL, 0LL);
          MiReleaseReadListResources(*v25);
        }
        ++v25;
        --v26;
      }
      while ( v26 );
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  if ( (_DWORD)v3 )
  {
    v27 = (PVOID *)v7;
    do
    {
      if ( *v27 )
        ExFreePoolWithTag(*v27, 0);
      ++v27;
      --v24;
    }
    while ( v24 );
  }
  ExFreePoolWithTag(v7, 0);
  return v19;
}
