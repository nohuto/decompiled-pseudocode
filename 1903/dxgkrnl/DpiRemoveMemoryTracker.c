/*
 * XREFs of DpiRemoveMemoryTracker @ 0x1C00509C8
 * Callers:
 *     ?DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C003E21C (-DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z.c)
 *     DxgkFreeContiguousMemoryCB @ 0x1C003E940 (DxgkFreeContiguousMemoryCB.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C01EF624 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0050648 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapMemoryTrackerFromIoMmu @ 0x1C0050C74 (DpiUnmapMemoryTrackerFromIoMmu.c)
 */

void __fastcall DpiRemoveMemoryTracker(__int64 a1, _QWORD *a2)
{
  __int64 IoMmuContextFromDevice; // rdi
  KIRQL v4; // si
  __int64 v5; // rcx
  _QWORD *v6; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)IoMmuContextFromDevice);
  if ( (*(_DWORD *)(IoMmuContextFromDevice + 136) & 1) != 0 )
    DpiUnmapMemoryTrackerFromIoMmu(IoMmuContextFromDevice, a2);
  v5 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v6 = (_QWORD *)a2[1], (_QWORD *)*v6 != a2) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  a2[1] = 0LL;
  *a2 = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)IoMmuContextFromDevice, v4);
}
