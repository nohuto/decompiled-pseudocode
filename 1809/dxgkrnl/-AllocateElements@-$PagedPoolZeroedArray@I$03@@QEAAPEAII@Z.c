/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0213058
 * Callers:
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0213A90 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0216634 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C021A218 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0237C70 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<unsigned int,4>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 4 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 4LL * a2, 0x4B677844u);
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
