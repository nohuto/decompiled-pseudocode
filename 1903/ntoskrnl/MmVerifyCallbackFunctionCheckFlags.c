/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x14018F410
 * Callers:
 *     PspSetCreateProcessNotifyRoutine @ 0x14076A850 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x140781CB0 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x14088AF88 (MmVerifyCallbackFunction.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x1408CAE20 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rax

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v6 = MiLookupDataTableEntry(a1, 0LL);
  if ( v6 && (!a2 || (*(_DWORD *)(v6 + 104) & a2) != 0) )
    v5 = 1;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
