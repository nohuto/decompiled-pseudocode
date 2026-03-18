/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x140677740
 * Callers:
 *     MmAllocateUserStack @ 0x14067749C (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1406775D0 (MmAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x14066CC84 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x140677B30 (MiAllocateVirtualMemoryPrepare.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryCommon(
        int a1,
        __int64 *a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  int VirtualMemoryPrepare; // ebx
  ULONG_PTR v19; // rcx
  int v21; // eax
  unsigned __int64 v22; // [rsp+70h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter1[16]; // [rsp+90h] [rbp-A8h] BYREF

  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v15 = 0LL;
  v16 = *a4;
  v17 = *a2;
  Object = 0LL;
  v22 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           a1,
                           v17,
                           a3,
                           v16,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           (ULONG_PTR)BugCheckParameter1,
                           (__int64)&Object);
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_20;
  v19 = *(_QWORD *)(a7 + 24);
  if ( v19 )
  {
    if ( v19 == -3LL )
    {
      v15 = 1LL;
    }
    else
    {
      v21 = PsReferencePartitionByHandle(v19, 2, a8, 0x61566D4Du, &v22);
      v15 = v22;
      VirtualMemoryPrepare = v21;
      if ( v21 < 0 )
        goto LABEL_20;
    }
  }
  if ( *(_BYTE *)(a7 + 48) != 1 || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 < 0 )
    {
      v24 = 0LL;
      if ( (BugCheckParameter1[7] & 0x4000000000000000LL) != 0 )
      {
        HIDWORD(BugCheckParameter1[9]) = 536870913;
        BugCheckParameter1[10] = (ULONG_PTR)&v24;
      }
      VirtualMemoryPrepare = MiAllocateVirtualMemory((__int64)BugCheckParameter1, 0LL, &v22);
      if ( VirtualMemoryPrepare >= 0 )
        VirtualMemoryPrepare = 0;
    }
    else
    {
      VirtualMemoryPrepare = MiAllocateVirtualMemory((__int64)BugCheckParameter1, v15, &v22);
    }
    if ( VirtualMemoryPrepare >= 0 )
    {
      *a2 = v22;
      *a4 = BugCheckParameter1[3];
      goto LABEL_8;
    }
  }
  else
  {
    VirtualMemoryPrepare = -1073741811;
  }
LABEL_20:
  if ( BugCheckParameter1[0] )
    ++dword_14046632C;
  else
    ++dword_140466328;
LABEL_8:
  if ( v15 >= 2 )
    PsDereferencePartition(v15);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)VirtualMemoryPrepare;
}
