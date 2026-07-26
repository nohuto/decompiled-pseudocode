/*
 * XREFs of NdisMAllocateSharedMemory @ 0x1C002DE40
 * Callers:
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C009CCC0 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C001BBB4 (WPP_RECORDER_SF_qLq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
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
  const struct _GUID *v10; // rdx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  __int64 v15; // r9
  __int64 (__fastcall *v16)(PNDIS_PHYSICAL_ADDRESS, __int64, PNDIS_PHYSICAL_ADDRESS, __int64); // r10
  __int64 v17; // r14
  int v18; // edx
  __int64 v19; // rax
  ULONG_PTR v20; // rbp
  ULONG_PTR v21; // rbp
  PNDIS_PHYSICAL_ADDRESS PhysicalAddressa; // [rsp+90h] [rbp+28h]

  BugCheckParameter4 = *((_QWORD *)MiniportAdapterHandle + 63);
  v8 = Length;
  v10 = &WPP_3bdda7144e74370204adec44604355d7_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v10,
      21,
      28,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle,
      v8);
    v10 = &WPP_3bdda7144e74370204adec44604355d7_Traceguids;
  }
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 4) == 0 )
  {
    if ( !BugCheckParameter4 )
      goto LABEL_17;
    PhysicalAddressa = *(PNDIS_PHYSICAL_ADDRESS *)(BugCheckParameter4 + 24);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql >= 2u )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 482),
        "Allocating Shared Memory at raised IRQL");
      KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v8, CurrentIrql);
    }
    v13 = 72;
    if ( (unsigned int)v8 >= 0x48 )
      v13 = v8;
    if ( v13 + ndisDmaAlignment + 8 < v13 )
    {
LABEL_17:
      *VirtualAddress = 0LL;
      return;
    }
    v14 = (v13 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
    v16 = *(__int64 (__fastcall **)(PNDIS_PHYSICAL_ADDRESS, __int64, PNDIS_PHYSICAL_ADDRESS, __int64))(PhysicalAddressa[1].QuadPart + 16);
    v17 = Cached != 0 ? 4 : 0;
    if ( *(_DWORD *)(v17 + BugCheckParameter4 + 104) < v14 )
    {
      LOBYTE(v15) = Cached;
      if ( (unsigned __int64)v14 + 8 >= 0x1000 )
      {
        *VirtualAddress = (PVOID)v16(PhysicalAddressa, v14, PhysicalAddress, v15);
LABEL_12:
        if ( *VirtualAddress )
          _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter4 + 72));
        goto LABEL_14;
      }
      v19 = v16(
              PhysicalAddressa,
              4096LL,
              (PNDIS_PHYSICAL_ADDRESS)(BugCheckParameter4 + (Cached != 0 ? 120LL : 112LL)),
              v15);
      *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 88) = v19;
      if ( !v19 )
      {
        *(_DWORD *)(v17 + BugCheckParameter4 + 104) = 0;
        *VirtualAddress = 0LL;
LABEL_14:
        ExReleaseResourceLite(&SharedMemoryResource);
        KeLeaveCriticalRegion();
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            0x15u,
            0x1Fu,
            (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
            (char)MiniportAdapterHandle,
            v14,
            *VirtualAddress);
        return;
      }
      *(_DWORD *)(v19 + 4092) = 0;
      *(_DWORD *)(v19 + 4088) = 1752384590;
      *(_DWORD *)(v17 + BugCheckParameter4 + 104) = 4088;
    }
    v20 = *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 88);
    if ( *(_DWORD *)(v20 + 4088) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 482),
        "Overwrote past allocated shared memory");
      KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v20, BugCheckParameter4);
    }
    ++*(_DWORD *)(v20 + 4092);
    v21 = v20 - *(unsigned int *)(v17 + BugCheckParameter4 + 104);
    *VirtualAddress = (PVOID)(v21 + 4088);
    PhysicalAddress->QuadPart = *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 112)
                              + (((_DWORD)v21 + 4088) & 0xFFF);
    *(_DWORD *)(v17 + BugCheckParameter4 + 104) -= v14;
    goto LABEL_12;
  }
  *VirtualAddress = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v10,
      21,
      29,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle,
      v8);
  }
}
