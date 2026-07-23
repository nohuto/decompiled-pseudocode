/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x140676EB0
 * Callers:
 *     MmAllocateUserStack @ 0x140676C58 (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x140676D60 (MmAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405EE0B0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x1406093B4 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryCommon(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v15; // r14
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // r13
  int VirtualMemory; // ebx
  ULONG_PTR v20; // rcx
  int v22; // eax
  __int64 *v23; // [rsp+70h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v26[16]; // [rsp+90h] [rbp-A8h] BYREF

  memset(v26, 0, 0x78uLL);
  v15 = 0LL;
  v16 = *a4;
  v17 = *a2;
  LODWORD(v18) = 0;
  Object = 0LL;
  v23 = 0LL;
  VirtualMemory = MiAllocateVirtualMemoryPrepare(
                    a1,
                    v17,
                    a3,
                    v16,
                    a5,
                    a6,
                    (unsigned __int64 *)a7,
                    a8,
                    a9,
                    a10,
                    a11,
                    (__int64)v26,
                    &Object);
  if ( VirtualMemory < 0 )
    goto LABEL_22;
  v20 = *(_QWORD *)(a7 + 24);
  if ( v20 )
  {
    v22 = PsReferencePartitionByHandle(v20, 2, a8, 0x61566D4Du, &v23);
    v15 = (__int64)v23;
    VirtualMemory = v22;
    if ( v22 < 0 )
      goto LABEL_22;
    if ( v23 != *(__int64 **)(v26[10] + 2088LL) )
      v18 = *v23;
  }
  if ( *(_BYTE *)(a7 + 48) != 1 || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 < 0 )
    {
      v25 = 0LL;
      if ( (v26[6] & 0x4000000000000000LL) != 0 )
      {
        HIDWORD(v26[8]) = 536870913;
        v26[9] = &v25;
      }
      VirtualMemory = MiAllocateVirtualMemory((__int64)v26, 0, (unsigned __int64 *)&v23);
      if ( VirtualMemory >= 0 )
        VirtualMemory = 0;
    }
    else
    {
      VirtualMemory = MiAllocateVirtualMemory((__int64)v26, v18, (unsigned __int64 *)&v23);
    }
    if ( VirtualMemory >= 0 )
    {
      *a2 = (unsigned __int64)v23;
      *a4 = v26[3];
      goto LABEL_8;
    }
  }
  else
  {
    VirtualMemory = -1073741811;
  }
LABEL_22:
  if ( v26[0] )
    ++dword_14043B94C;
  else
    ++dword_14043B948;
LABEL_8:
  if ( v15 )
    PsDereferencePartition(v15);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)VirtualMemory;
}
