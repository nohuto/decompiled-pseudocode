/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01449F0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00F4848 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0247C4C (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C024B070 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C024CAF0 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C024E888 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C024ECA0 (NtDxgkOutputDuplPresentToHwQueue.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C026CBE0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<unsigned int,4>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 4LL * a2, 0x4B677844u);
  }
  else
  {
    result = a1 + 2;
  }
  *(_QWORD *)a1 = result;
  a1[6] = a2;
  if ( result )
  {
    memset(result, 0, 4 * v4);
    return *(PVOID *)a1;
  }
  return result;
}
