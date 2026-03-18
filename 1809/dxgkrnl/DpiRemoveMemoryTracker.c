/*
 * XREFs of DpiRemoveMemoryTracker @ 0x1C004966C
 * Callers:
 *     ?DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C0037DBC (-DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z.c)
 *     DxgkFreeContiguousMemoryCB @ 0x1C00384E0 (DxgkFreeContiguousMemoryCB.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C01C0054 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0049348 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapMemoryTrackerFromIoMmu @ 0x1C0049824 (DpiUnmapMemoryTrackerFromIoMmu.c)
 */

__int64 __fastcall DpiRemoveMemoryTracker(__int64 a1, _QWORD *a2)
{
  __int64 IoMmuContextFromDevice; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(IoMmuContextFromDevice + 16);
  *(_QWORD *)(IoMmuContextFromDevice + 72) = KeGetCurrentThread();
  DpiUnmapMemoryTrackerFromIoMmu(IoMmuContextFromDevice, a2);
  v4 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v5 = (_QWORD *)a2[1], (_QWORD *)*v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  a2[1] = 0LL;
  *a2 = 0LL;
  *(_QWORD *)(IoMmuContextFromDevice + 72) = 0LL;
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(IoMmuContextFromDevice + 16);
}
