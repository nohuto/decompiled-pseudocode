/*
 * XREFs of LdrpDropLastInProgressCount @ 0x180079EDC
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindLoadedDll @ 0x1800229B8 (LdrpFindLoadedDll.c)
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x18002356C (LdrpInitializeThread.c)
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x1800269F0 (LdrpFastpthReloadedDll.c)
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     LdrEnumerateLoadedModules @ 0x180079E20 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeImportRedirection @ 0x180084E3C (LdrpInitializeImportRedirection.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2560 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D7168 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 */

__int64 LdrpDropLastInProgressCount()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpWorkInProgress = 0;
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  return ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
}
