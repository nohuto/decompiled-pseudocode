/*
 * XREFs of NtAllocateVirtualMemory @ 0x1406778F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x14066CC84 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x140677B30 (MiAllocateVirtualMemoryPrepare.c)
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
  unsigned __int64 v13; // r13
  NTSTATUS VirtualMemoryPrepare; // ebx
  char v16; // [rsp+70h] [rbp-128h]
  __int64 v17; // [rsp+78h] [rbp-120h] BYREF
  PVOID Object; // [rsp+80h] [rbp-118h] BYREF
  void *v19; // [rsp+88h] [rbp-110h] BYREF
  PVOID v20; // [rsp+90h] [rbp-108h]
  ULONG_PTR v21; // [rsp+98h] [rbp-100h]
  __int64 v22[8]; // [rsp+B0h] [rbp-E8h] BYREF
  ULONG_PTR BugCheckParameter1[16]; // [rsp+F0h] [rbp-A8h] BYREF
  int v24; // [rsp+1A0h] [rbp+8h]
  int v25; // [rsp+1B0h] [rbp+18h]

  v25 = ZeroBits;
  v24 = (int)ProcessHandle;
  memset(v22, 0, sizeof(v22));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
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
  v20 = *BaseAddress;
  v12 = *RegionSize;
  v21 = *RegionSize;
  LODWORD(v22[4]) = AllocationType & 0x7F;
  if ( (AllocationType & 0x44000) != 0 )
    return -1073741811;
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v13 = 0LL;
  Object = 0LL;
  v17 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           v24,
                           (int)v11,
                           v25,
                           v12,
                           AllocationType & 0xFFFFFF80,
                           Protect,
                           (__int64)v22,
                           PreviousMode,
                           0,
                           0,
                           0LL,
                           (ULONG_PTR)BugCheckParameter1,
                           (__int64)&Object);
  if ( VirtualMemoryPrepare >= 0 )
  {
    if ( v22[3] )
    {
      if ( v22[3] == -3 )
      {
        v13 = 1LL;
        v17 = 1LL;
      }
      else
      {
        VirtualMemoryPrepare = PsReferencePartitionByHandle(v22[3], 2, v16, 0x61566D4Du, &v17);
        v13 = v17;
        if ( VirtualMemoryPrepare < 0 )
          goto LABEL_13;
      }
    }
    if ( LOBYTE(v22[6]) == 1 && (AllocationType & 0x20400000) != 0x400000 )
    {
      VirtualMemoryPrepare = -1073741811;
LABEL_21:
      if ( BugCheckParameter1[0] )
        ++dword_14046632C;
      else
        ++dword_140466328;
      goto LABEL_14;
    }
    VirtualMemoryPrepare = MiAllocateVirtualMemory((__int64)BugCheckParameter1, v13, (unsigned __int64 *)&v19);
    if ( VirtualMemoryPrepare >= 0 )
    {
      v11 = v19;
      v20 = v19;
      v12 = BugCheckParameter1[3];
      v21 = BugCheckParameter1[3];
    }
  }
LABEL_13:
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_21;
LABEL_14:
  if ( v13 >= 2 )
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
