/*
 * XREFs of ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x1C003FBE4
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C0146460 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeQueryInterface(struct _DXGKCOMPUTE_INTERFACE *a1, unsigned int *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax

  if ( *(_WORD *)a1 == 560 && *((_WORD *)a1 + 1) == 1 )
  {
    *((_QWORD *)a1 + 1) = DxgkChangeVideoMemoryReservation;
    *((_QWORD *)a1 + 2) = DxgkCloseAdapterImpl;
    *((_QWORD *)a1 + 3) = DxgkCreateAllocation;
    *((_QWORD *)a1 + 4) = DxgkCreateContext;
    *((_QWORD *)a1 + 5) = DxgkCreateContextVirtual;
    *((_QWORD *)a1 + 6) = DxgkCreateDevice;
    *((_QWORD *)a1 + 7) = DxgkDestroyHwContext;
    *((_QWORD *)a1 + 8) = DxgkCreateHwQueue;
    *((_QWORD *)a1 + 9) = DxgkCreatePagingQueue;
    *((_QWORD *)a1 + 10) = DxgkCreateSynchronizationObject;
    *((_QWORD *)a1 + 11) = DxgkDestroyAllocation2;
    *((_QWORD *)a1 + 12) = DxgkDestroyContext;
    *((_QWORD *)a1 + 13) = DxgkDestroyDevice;
    *((_QWORD *)a1 + 14) = DxgkDestroyHwContext;
    *((_QWORD *)a1 + 15) = DxgkDestroyHwQueue;
    *((_QWORD *)a1 + 16) = DxgkDestroyPagingQueue;
    *((_QWORD *)a1 + 17) = DxgkDestroySynchronizationObject;
    *((_QWORD *)a1 + 18) = DxgkEnumAdapters2Impl;
    *((_QWORD *)a1 + 19) = DxgkEscape;
    *((_QWORD *)a1 + 20) = DxgkEvict;
    *((_QWORD *)a1 + 21) = DxgkFlushHeapTransitions;
    *((_QWORD *)a1 + 22) = DxgkFreeGpuVirtualAddress;
    *((_QWORD *)a1 + 23) = DxgkGetContextInProcessSchedulingPriority;
    *((_QWORD *)a1 + 24) = DxgkGetContextSchedulingPriority;
    *((_QWORD *)a1 + 25) = DxgkGetDeviceState;
    *((_QWORD *)a1 + 26) = DxgkGetGpuUsageStatistics;
    *((_QWORD *)a1 + 27) = DxgkGetProcessSchedulingPriorityClass;
    *((_QWORD *)a1 + 28) = DxgkGetSharedResourceAdapterLuid;
    *((_QWORD *)a1 + 29) = DxgkInvalidateCache;
    *((_QWORD *)a1 + 30) = DxgkLock2;
    *((_QWORD *)a1 + 31) = DxgkMakeResident;
    *((_QWORD *)a1 + 32) = DxgkMapGpuVirtualAddress;
    *((_QWORD *)a1 + 33) = DxgkMarkDeviceAsError;
    *((_QWORD *)a1 + 34) = DxgkOfferAllocations;
    *((_QWORD *)a1 + 35) = DxgkOpenAdapter;
    *((_QWORD *)a1 + 36) = DxgkOpenAdapterFromLuid;
    *((_QWORD *)a1 + 37) = DxgkOpenNtHandleFromName;
    *((_QWORD *)a1 + 38) = DxgkOpenResource;
    *((_QWORD *)a1 + 39) = DxgkOpenSyncObjectFromNtHandle2;
    *((_QWORD *)a1 + 40) = DxgkOpenSyncObjectNtHandleFromName;
    *((_QWORD *)a1 + 41) = DxgkOpenSynchronizationObject;
    *((_QWORD *)a1 + 42) = DxgkQueryAdapterInfo;
    *((_QWORD *)a1 + 43) = DxgkQueryAllocationResidency;
    *((_QWORD *)a1 + 44) = DxgkQueryResourceInfo;
    *((_QWORD *)a1 + 45) = DxgkQueryResourceInfoFromNtHandle;
    *((_QWORD *)a1 + 46) = DxgkQueryStatistics;
    *((_QWORD *)a1 + 47) = DxgkQueryVideoMemoryInfo;
    *((_QWORD *)a1 + 48) = DxgkReclaimAllocations2;
    *((_QWORD *)a1 + 49) = DxgkRender;
    *((_QWORD *)a1 + 50) = DxgkReserveGpuVirtualAddress;
    *((_QWORD *)a1 + 51) = DxgkSetAllocationPriority;
    *((_QWORD *)a1 + 52) = DxgkSetContextInProcessSchedulingPriority;
    *((_QWORD *)a1 + 53) = DxgkSetContextSchedulingPriority;
    *((_QWORD *)a1 + 54) = &DxgkSetProcessSchedulingPriorityClass;
    *((_QWORD *)a1 + 55) = DxgkShareObjects;
    *((_QWORD *)a1 + 56) = DxgkSignalSynchronizationObject;
    *((_QWORD *)a1 + 57) = DxgkSignalSynchronizationObjectFromCpu;
    *((_QWORD *)a1 + 58) = DxgkSignalSynchronizationObjectFromGpu;
    *((_QWORD *)a1 + 59) = DxgkSignalSynchronizationObjectFromGpu2;
    *((_QWORD *)a1 + 60) = DxgkSubmitCommand;
    *((_QWORD *)a1 + 61) = DxgkSubmitCommandToHwQueue;
    *((_QWORD *)a1 + 62) = DxgkSubmitSignalSyncObjectsToHwQueue;
    *((_QWORD *)a1 + 63) = DxgkSubmitWaitForSyncObjectsToHwQueue;
    *((_QWORD *)a1 + 64) = DxgkUnlock2;
    *((_QWORD *)a1 + 65) = DxgkUpdateAllocationProperty;
    *((_QWORD *)a1 + 66) = DxgkUpdateGpuVirtualAddress;
    *((_QWORD *)a1 + 67) = DxgkWaitForSynchronizationObject;
    *((_QWORD *)a1 + 68) = DxgkWaitForSynchronizationObjectFromCpu;
    *((_QWORD *)a1 + 69) = DxgkWaitForSynchronizationObjectFromGpu;
    result = 0LL;
    *a2 = 560;
  }
  else
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
    v4[3] = *((unsigned __int16 *)a1 + 1);
    v4[4] = *(unsigned __int16 *)a1;
    v4[5] = 1LL;
    v4[6] = 560LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
  return result;
}
