/*
 * XREFs of NtAllocateVirtualMemory @ 0x1405EDE60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405EE0B0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x1406093B4 (PsReferencePartitionByHandle.c)
 */

NTSTATUS __stdcall NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  char PreviousMode; // bl
  __int64 v9; // rcx
  __int64 v10; // rcx
  PVOID v11; // rdi
  ULONG_PTR v12; // rsi
  __int64 v13; // r13
  NTSTATUS VirtualMemoryPrepare; // ebx
  __int64 v15; // rax
  unsigned __int8 v17; // [rsp+70h] [rbp-138h]
  __int64 *v18; // [rsp+78h] [rbp-130h] BYREF
  __int64 v19; // [rsp+80h] [rbp-128h]
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  void *v21; // [rsp+90h] [rbp-118h] BYREF
  PVOID v22; // [rsp+98h] [rbp-110h]
  ULONG_PTR v23; // [rsp+A0h] [rbp-108h]
  _QWORD v24[8]; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD v25[16]; // [rsp+100h] [rbp-A8h] BYREF
  int v26; // [rsp+1B0h] [rbp+8h]
  int v27; // [rsp+1C0h] [rbp+18h]

  v27 = ZeroBits;
  v26 = (int)ProcessHandle;
  memset(v24, 0, sizeof(v24));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  v11 = *BaseAddress;
  v22 = *BaseAddress;
  v12 = *RegionSize;
  v23 = *RegionSize;
  LODWORD(v24[4]) = AllocationType & 0x7F;
  if ( (AllocationType & 0x44000) != 0 )
    return -1073741811;
  memset(v25, 0, 0x78uLL);
  v13 = 0LL;
  Object = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           v26,
                           (_DWORD)v11,
                           v27,
                           v12,
                           AllocationType & 0xFFFFFF80,
                           Protect,
                           (__int64)v24,
                           PreviousMode,
                           0,
                           0,
                           0LL,
                           (__int64)v25,
                           (__int64)&Object);
  if ( VirtualMemoryPrepare >= 0 )
  {
    if ( v24[3] )
    {
      VirtualMemoryPrepare = PsReferencePartitionByHandle(v24[3], 2LL, v17, 1633054029LL, &v18);
      v13 = (__int64)v18;
      if ( VirtualMemoryPrepare < 0 )
        goto LABEL_14;
      if ( v18 == *(__int64 **)(v25[10] + 2088LL) )
        v15 = v19;
      else
        v15 = *v18;
    }
    else
    {
      v15 = 0LL;
    }
    if ( LOBYTE(v24[6]) == 1 && (AllocationType & 0x20400000) != 0x400000 )
    {
      VirtualMemoryPrepare = -1073741811;
LABEL_22:
      if ( v25[0] )
        ++dword_14043B94C;
      else
        ++dword_14043B948;
      goto LABEL_15;
    }
    VirtualMemoryPrepare = MiAllocateVirtualMemory(v25, v15, &v21);
    if ( VirtualMemoryPrepare >= 0 )
    {
      v11 = v21;
      v22 = v21;
      v12 = v25[3];
      v23 = v25[3];
    }
  }
LABEL_14:
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_22;
LABEL_15:
  if ( v13 )
    PsDereferencePartition(v13);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( VirtualMemoryPrepare >= 0 )
  {
    *BaseAddress = v11;
    *RegionSize = v12;
  }
  return VirtualMemoryPrepare;
}
