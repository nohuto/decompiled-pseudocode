/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C001A144
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00F4848 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0249948 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C024B070 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C026CBE0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

PVOID __fastcall NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rbx
  PVOID result; // rax

  v4 = a2;
  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    result = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x4B677844u);
  }
  else
  {
    result = a1 + 2;
  }
  *(_QWORD *)a1 = result;
  a1[10] = a2;
  if ( result )
  {
    if ( a2 )
    {
      memset(result, 0, 8 * v4);
      return *(PVOID *)a1;
    }
  }
  return result;
}
