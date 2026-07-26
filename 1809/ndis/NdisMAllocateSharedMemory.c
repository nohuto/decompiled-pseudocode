/*
 * XREFs of NdisMAllocateSharedMemory @ 0x1C00D0310
 * Callers:
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0065680 (ndisMQueuedAllocateSharedHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 */

void __stdcall NdisMAllocateSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID *VirtualAddress,
        PNDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v8; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  __int64 v14; // r9
  __int64 (__fastcall *v15)(PNDIS_PHYSICAL_ADDRESS, __int64, PNDIS_PHYSICAL_ADDRESS, __int64); // r10
  __int64 v16; // r14
  __int64 v17; // rax
  ULONG_PTR v18; // rbp
  ULONG_PTR v19; // rbp
  PNDIS_PHYSICAL_ADDRESS PhysicalAddressa; // [rsp+80h] [rbp+28h]

  BugCheckParameter4 = *((_QWORD *)MiniportAdapterHandle + 63);
  v8 = Length;
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle, Length);
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 928) & 4) == 0 )
  {
    if ( !BugCheckParameter4 )
      goto LABEL_16;
    PhysicalAddressa = *(PNDIS_PHYSICAL_ADDRESS *)(BugCheckParameter4 + 24);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql >= 2u )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 486),
        "Allocating Shared Memory at raised IRQL");
      KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v8, CurrentIrql);
    }
    v12 = 72;
    if ( (unsigned int)v8 >= 0x48 )
      v12 = v8;
    if ( v12 + ndisDmaAlignment + 8 < v12 )
    {
LABEL_16:
      *VirtualAddress = 0LL;
      return;
    }
    v13 = (v12 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
    v15 = *(__int64 (__fastcall **)(PNDIS_PHYSICAL_ADDRESS, __int64, PNDIS_PHYSICAL_ADDRESS, __int64))(PhysicalAddressa[1].QuadPart + 16);
    v16 = Cached != 0 ? 4 : 0;
    if ( *(_DWORD *)(v16 + BugCheckParameter4 + 104) < v13 )
    {
      LOBYTE(v14) = Cached;
      if ( (unsigned __int64)v13 + 8 >= 0x1000 )
      {
        *VirtualAddress = (PVOID)v15(PhysicalAddressa, v13, PhysicalAddress, v14);
LABEL_12:
        if ( *VirtualAddress )
          _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter4 + 72));
        goto LABEL_14;
      }
      v17 = v15(
              PhysicalAddressa,
              4096LL,
              (PNDIS_PHYSICAL_ADDRESS)(BugCheckParameter4 + (Cached != 0 ? 120LL : 112LL)),
              v14);
      *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 88) = v17;
      if ( !v17 )
      {
        *(_DWORD *)(v16 + BugCheckParameter4 + 104) = 0;
        *VirtualAddress = 0LL;
LABEL_14:
        ExReleaseResourceLite(&SharedMemoryResource);
        KeLeaveCriticalRegion();
        if ( (unsigned __int8)byte_1C00A0264 >= 4u )
          WPP_SF_qLq(0x1Fu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle, v13);
        return;
      }
      *(_DWORD *)(v17 + 4092) = 0;
      *(_DWORD *)(v17 + 4088) = 1752384590;
      *(_DWORD *)(v16 + BugCheckParameter4 + 104) = 4088;
    }
    v18 = *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 88);
    if ( *(_DWORD *)(v18 + 4088) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 486),
        "Overwrote past allocated shared memory");
      KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v18, BugCheckParameter4);
    }
    ++*(_DWORD *)(v18 + 4092);
    v19 = v18 - *(unsigned int *)(v16 + BugCheckParameter4 + 104);
    *VirtualAddress = (PVOID)(v19 + 4088);
    PhysicalAddress->QuadPart = *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 112)
                              + (((_DWORD)v19 + 4088) & 0xFFF);
    *(_DWORD *)(v16 + BugCheckParameter4 + 104) -= v13;
    goto LABEL_12;
  }
  *VirtualAddress = 0LL;
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_qD(0x1Du, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle, v8);
}
