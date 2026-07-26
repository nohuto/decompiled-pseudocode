/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C009E370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLq @ 0x1C001BBB4 (WPP_RECORDER_SF_qLq.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisFreeSharedMemoryInternal @ 0x1C009F8B4 (ndisFreeSharedMemoryInternal.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  int v9; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      0x15u,
      0x22u,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle,
      Length,
      VirtualAddress);
  if ( KeGetCurrentIrql() )
  {
    ndisReferenceMiniportNoCheck((__int64)MiniportAdapterHandle, 0x42u);
    *((NDIS_PHYSICAL_ADDRESS *)VirtualAddress + 8) = PhysicalAddress;
    *((_QWORD *)VirtualAddress + 4) = MiniportAdapterHandle;
    *((_DWORD *)VirtualAddress + 10) = Length;
    *((_BYTE *)VirtualAddress + 44) = Cached;
    *((_QWORD *)VirtualAddress + 6) = VirtualAddress;
    *(_QWORD *)VirtualAddress = 0LL;
    *((_QWORD *)VirtualAddress + 2) = ndisMQueuedFreeSharedHandler;
    *((_QWORD *)VirtualAddress + 3) = VirtualAddress;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)VirtualAddress, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisFreeSharedMemoryInternal((ULONG_PTR)MiniportAdapterHandle, PhysicalAddress.QuadPart);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0x15u,
      0x23u,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle,
      Length,
      VirtualAddress);
}
