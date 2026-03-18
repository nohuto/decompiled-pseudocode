/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x140186720
 * Callers:
 *     PspSetCreateProcessNotifyRoutine @ 0x140748480 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x14075AB90 (ObRegisterCallbacks.c)
 *     KeIsValidTraceCallbackTarget @ 0x140844940 (KeIsValidTraceCallbackTarget.c)
 *     MmVerifyCallbackFunction @ 0x14084EEF8 (MmVerifyCallbackFunction.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x14088CA10 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiLookupDataTableEntry @ 0x1400DA570 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  _QWORD *v6; // rax

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v6 = MiLookupDataTableEntry(a1, 0);
  if ( v6 && (!a2 || ((_DWORD)v6[13] & a2) != 0) )
    v5 = 1;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
