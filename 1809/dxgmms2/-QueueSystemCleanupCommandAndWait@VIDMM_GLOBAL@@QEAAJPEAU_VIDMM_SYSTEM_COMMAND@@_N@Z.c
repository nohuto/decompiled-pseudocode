/*
 * XREFs of ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C006C8B8
 * Callers:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C003AEA4 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C006C7E4 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C006CFA0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00767E8 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A7ECC (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00A7FDC (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8DEC (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A96C0 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C00608C0 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(VIDMM_GLOBAL *this, struct _VIDMM_SYSTEM_COMMAND *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = *((unsigned int *)a2 + 1);
  v3 = *((_QWORD *)this + 5041);
  if ( (_DWORD)v2 == -1 )
  {
    v4 = *(_QWORD *)(v3 + 80);
    v5 = v4;
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 80);
    v4 = v5 + 176 * v2;
  }
  return VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           this,
           a2,
           (PVOID *)v4,
           *(struct _VIDSCH_SYNC_OBJECT **)(176LL * *(unsigned int *)(v4 + 144) + v5 + 152),
           1);
}
