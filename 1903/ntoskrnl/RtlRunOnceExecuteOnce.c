/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x140618770
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x140110A68 (RtlpHpMetadataHeapStart.c)
 *     SeQuerySigningPolicy @ 0x140618430 (SeQuerySigningPolicy.c)
 *     ExCheckFullProcessInformationAccess @ 0x140680204 (ExCheckFullProcessInformationAccess.c)
 *     SdbGetIndex @ 0x14070C894 (SdbGetIndex.c)
 *     ExpCheckTestsigningEnabled @ 0x140747FA0 (ExpCheckTestsigningEnabled.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14074C944 (SdbpGetStringTableItemFromStringRef.c)
 *     ExQueryBootEntropyInformation @ 0x1407574E4 (ExQueryBootEntropyInformation.c)
 *     RtlpLogCapabilityCheckLatency @ 0x1408D8EC8 (RtlpLogCapabilityCheckLatency.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090E220 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     RtlRunOnceBeginInitialize @ 0x140618850 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x1406E9F00 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  int v10; // ebx
  PVOID v12; // r8
  NTSTATUS v13; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_12;
  if ( v9 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      if ( Context )
        v12 = *Context;
      else
        v12 = 0LL;
      v10 = RtlRunOnceComplete(RunOnce, 0, v12);
      if ( v10 >= 0 )
      {
        v10 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v10 = -1073741823;
      v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v13 >= 0 )
        goto LABEL_3;
      v10 = v13;
    }
LABEL_12:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    RtlRaiseStatus(v10);
  }
LABEL_3:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
