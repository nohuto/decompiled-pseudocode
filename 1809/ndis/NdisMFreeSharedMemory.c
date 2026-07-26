/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C0064FB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 *     ndisFreeSharedMemory @ 0x1C00F2784 (ndisFreeSharedMemory_ea_1C00F2784.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_qLq(0x22u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle, Length);
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
    ndisFreeSharedMemory((ULONG_PTR)MiniportAdapterHandle, PhysicalAddress.QuadPart);
  }
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_qLq(0x23u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle, Length);
}
