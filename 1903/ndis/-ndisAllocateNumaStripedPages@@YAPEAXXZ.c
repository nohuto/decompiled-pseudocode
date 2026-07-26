/*
 * XREFs of ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C01099AC
 * Callers:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00395D4 (ndisAllocatePerProcessorPageDescriptor.c)
 * Callees:
 *     ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1C0040C08 (-ndisFreeMappingAddress@@YAXPEAX@Z.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisGetNodeIdForProcessor @ 0x1C0109C00 (ndisGetNodeIdForProcessor.c)
 *     ??$MakeSizedPoolPtr@U_MDL@@@@YA?AV?$unique_ptr@U_MDL@@U?$KFreePool@U_MDL@@@@@wistd@@K_K@Z @ 0x1C0109C98 (--$MakeSizedPoolPtr@U_MDL@@@@YA-AV-$unique_ptr@U_MDL@@U-$KFreePool@U_MDL@@@@@wistd@@K_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

unsigned __int64 ndisAllocateNumaStripedPages(void)
{
  ULONG v0; // ebp
  SIZE_T v1; // rbx
  unsigned __int64 MappingAddress; // rdi
  SIZE_T v3; // rax
  __int64 v4; // rdx
  PMDL v5; // rsi
  __int64 v6; // r13
  SIZE_T v7; // rbx
  struct _MDL **PoolWithTag; // rax
  struct _MDL **v9; // r14
  char v10; // r12
  __int64 v11; // r15
  int NodeIdForProcessor; // eax
  __int64 NodePagesForMdl; // rax
  struct _MDL **v14; // rbx
  struct _MDL *v15; // rcx
  unsigned __int64 v16; // rbx
  PMDL MemoryDescriptorList; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h]

  v0 = KeQueryMaximumProcessorCountEx(0xFFFFu) + 1;
  v1 = v0 << 12;
  MappingAddress = (unsigned __int64)MmAllocateMappingAddress(v1, 0x6C53444Eu);
  if ( !MappingAddress )
    return 0LL;
  v3 = MmSizeOfMdl(0LL, (unsigned int)v1);
  MakeSizedPoolPtr<_MDL>(&MemoryDescriptorList, v4, v3);
  v5 = MemoryDescriptorList;
  if ( MemoryDescriptorList )
  {
    MemoryDescriptorList->Next = 0LL;
    v5->ByteCount = v1;
    v6 = v0;
    v5->ByteOffset = MappingAddress & 0xFFF;
    v5->StartVa = (PVOID)(MappingAddress & 0xFFFFFFFFFFFFF000uLL);
    v5->MdlFlags = 2;
    v5->Size = 8 * (((v1 + (MappingAddress & 0xFFF) + 4095) >> 12) + 6);
    v7 = 8LL * v0;
    if ( !is_mul_ok(v0, 8uLL) )
      v7 = -1LL;
    PoolWithTag = (struct _MDL **)ExAllocatePoolWithTag(PagedPool, v7, 0x6D4D444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v7);
    else
      v9 = 0LL;
    if ( !v9 )
    {
      v16 = 0LL;
LABEL_21:
      ExFreePoolWithTag(v5, 0);
      goto LABEL_22;
    }
    v10 = 0;
    v11 = 0LL;
    if ( v0 )
    {
      v19 = -1LL;
      while ( 1 )
      {
        MemoryDescriptorList = (PMDL)4096;
        NodeIdForProcessor = ndisGetNodeIdForProcessor((_DWORD)v11 != 0 ? v11 - 1 : 0);
        NodePagesForMdl = MmAllocateNodePagesForMdlEx(0LL, v19, MemoryDescriptorList, 4096LL, 1, NodeIdForProcessor, 5);
        v9[v11] = (struct _MDL *)NodePagesForMdl;
        if ( !NodePagesForMdl )
          break;
        *((_QWORD *)&v5[1].Next + v11) = *(_QWORD *)(NodePagesForMdl + 48);
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v0 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      if ( MmMapLockedPagesWithReservedMapping((PVOID)MappingAddress, 0x6C53444Eu, v5, MmCached) )
      {
LABEL_13:
        if ( v0 )
        {
          v14 = v9;
          do
          {
            v15 = *v14;
            if ( *v14 )
            {
              if ( v10 )
              {
                MmFreePagesFromMdl(v15);
                v15 = *v14;
              }
              ExFreePoolWithTag(v15, 0);
            }
            ++v14;
            --v6;
          }
          while ( v6 );
        }
        v16 = MappingAddress;
        MappingAddress = 0LL;
        operator delete[](v9);
        goto LABEL_21;
      }
    }
    ndisFreeMappingAddress((void *)MappingAddress);
    MappingAddress = 0LL;
    v10 = 1;
    goto LABEL_13;
  }
  v16 = 0LL;
LABEL_22:
  if ( MappingAddress )
    ndisFreeMappingAddress((void *)MappingAddress);
  return v16;
}
