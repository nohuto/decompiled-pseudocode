/*
 * XREFs of RaInitializeRaidResources @ 0x1C001A158
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C001A4B0 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C00064CC (StorAllocateContiguousIoResources.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     McTemplateK0zqqqqi @ 0x1C00492C0 (McTemplateK0zqqqqi.c)
 *     RaFreeRaidResources @ 0x1C0049894 (RaFreeRaidResources.c)
 */

__int64 __fastcall RaInitializeRaidResources(
        unsigned __int64 ListHead,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        int a6)
{
  int v6; // eax
  char v7; // r10
  unsigned __int64 v8; // rdx
  PSLIST_HEADER v9; // rdi
  SIZE_T v11; // r14
  unsigned int v12; // r8d
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 Alignment_low; // rbp
  int v16; // edx
  ULONG MaximumProcessorCount; // ebx
  unsigned int Alignment; // ecx
  PVOID Pool; // rax
  __int64 v20; // rsi
  PVOID *v21; // rcx
  unsigned int v22; // esi
  struct _SLIST_ENTRY *v23; // rax
  struct _SLIST_ENTRY *v24; // rbx
  unsigned int v25; // ecx
  union _SLIST_HEADER *v26; // rcx
  char *v27; // rcx

  *(_DWORD *)(ListHead + 80) = a2;
  *(_QWORD *)(ListHead + 88) = a4;
  v6 = 16;
  if ( a2 <= 0x10 )
    v6 = a2;
  *(_DWORD *)(ListHead + 116) = a6;
  v7 = a2;
  v8 = PhysicalMemorySize;
  v9 = (PSLIST_HEADER)ListHead;
  *(_DWORD *)(ListHead + 76) = v6;
  v11 = a3;
  *(_DWORD *)(ListHead + 96) = 0;
  v12 = 512;
  *(_BYTE *)(ListHead + 120) = a5 == 0;
  *(_DWORD *)(ListHead + 84) = v11;
  *(_DWORD *)(ListHead + 124) = 0;
  LODWORD(ListHead) = 256;
  v13 = *(_QWORD *)(a4 + 64);
  if ( !v8 )
    goto LABEL_15;
  if ( v8 >= 0x40000000 )
  {
    if ( v8 < 0x80000000 )
    {
      v12 = 128;
      goto LABEL_16;
    }
    if ( v8 >= 0x200000000LL )
    {
      v14 = 0x400000000LL;
      if ( v8 < 0x400000000LL )
        goto LABEL_16;
      LODWORD(ListHead) = v9[5].Alignment;
      while ( 1 )
      {
        v12 *= 2;
        v14 *= 2LL;
        if ( v12 >= (unsigned int)ListHead )
          break;
        if ( v14 > 0x800000000000LL || v8 < v14 )
          goto LABEL_16;
      }
    }
LABEL_15:
    v12 = ListHead;
    goto LABEL_16;
  }
  v12 = 64;
LABEL_16:
  if ( !v8
    || (Alignment_low = LODWORD(v9[5].Alignment),
        ListHead = Alignment_low * *((unsigned int *)&v9[5].HeaderX64 + 1),
        v8 /= 0x2710uLL,
        ListHead > v8) )
  {
    LODWORD(Alignment_low) = v12;
  }
  if ( (unsigned int)Alignment_low > StorPreAllocatedMaxIoResourceCount )
    LODWORD(Alignment_low) = StorPreAllocatedMaxIoResourceCount;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zqqqqi(ListHead, v8, v12, *(_QWORD *)(v13 + 48), *(_DWORD *)(v13 + 56), Alignment_low, v7, v11);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount > 0x10 )
  {
    if ( MaximumProcessorCount > 0x40 )
    {
      if ( MaximumProcessorCount <= 0x100 )
      {
        LODWORD(v9[4].Alignment) = 16;
        Alignment = 16;
        goto LABEL_31;
      }
      Alignment = 32;
    }
    else
    {
      Alignment = 8;
    }
    LODWORD(v9[4].Alignment) = Alignment;
    goto LABEL_31;
  }
  LODWORD(v9[4].Alignment) = 0;
  InitializeSListHead(v9);
  Alignment = v9[4].Alignment;
LABEL_31:
  *((_DWORD *)&v9[4].HeaderX64 + 1) = MaximumProcessorCount;
  if ( Alignment )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 8LL * Alignment, 0x53526152u, a4);
    v9->Alignment = (unsigned __int64)Pool;
    if ( Pool )
      LODWORD(Pool) = v9[4].Alignment;
    else
      LODWORD(v9[4].Alignment) = 0;
    v20 = 0LL;
    if ( (_DWORD)Pool )
    {
      while ( 1 )
      {
        *(_QWORD *)(v9->Alignment + 8 * v20) = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x10uLL, 0x53526152u);
        v21 = (PVOID *)v9->Alignment;
        if ( !*(_QWORD *)(v9->Alignment + 8 * v20) )
          break;
        InitializeSListHead(*(PSLIST_HEADER *)(v9->Alignment + 8 * v20));
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= LODWORD(v9[4].Alignment) )
          goto LABEL_44;
      }
      if ( (unsigned int)v20 < 2 )
      {
        if ( (_DWORD)v20 == 1 )
        {
          ExFreePoolWithTag(*v21, 0x53526152u);
          v21 = (PVOID *)v9->Alignment;
        }
        ExFreePoolWithTag(v21, 0x53526152u);
        LODWORD(v9[4].Alignment) = 0;
        InitializeSListHead(v9);
      }
      else
      {
        LODWORD(v9[4].Alignment) = v20;
      }
    }
  }
LABEL_44:
  v22 = 0;
  if ( (_DWORD)Alignment_low )
  {
    while ( 1 )
    {
      v23 = *((_BYTE *)&v9[7].HeaderX64 + 8)
          ? (struct _SLIST_ENTRY *)RaidAllocatePool(NonPagedPoolNx, v11, 0x53526152u, a4)
          : (struct _SLIST_ENTRY *)StorAllocateContiguousIoResources(v11, v16, v13);
      v24 = v23;
      if ( !v23 )
        break;
      v25 = v9[4].Alignment;
      if ( v25 )
        v26 = *(union _SLIST_HEADER **)(v9->Alignment + 8LL * (v22 % v25));
      else
        v26 = v9;
      ExpInterlockedPushEntrySList(v26, v23);
      LODWORD(v24[2].Next) = 523124044;
      *((_DWORD *)&v24[48].Next + 2) = a6;
      if ( a6 )
        v27 = (char *)v24 + (unsigned int)(v11 - a6);
      else
        v27 = 0LL;
      *((_QWORD *)&v24[49].Next + 1) = v27;
      if ( *((_BYTE *)&v9[7].HeaderX64 + 8) )
        v24[51].Next = 0LL;
      if ( ++v22 >= (unsigned int)Alignment_low )
        goto LABEL_60;
    }
    ++LODWORD(v9[6].Alignment);
  }
LABEL_60:
  if ( v22 >= *((_DWORD *)&v9[4].HeaderX64 + 3) )
  {
    *((_DWORD *)&v9[4].HeaderX64 + 2) = v22;
    return 0LL;
  }
  else
  {
    RaFreeRaidResources(v9);
    return 3221225495LL;
  }
}
