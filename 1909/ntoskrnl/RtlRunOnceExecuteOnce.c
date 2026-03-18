/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x14061A280
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x140110158 (RtlpHpMetadataHeapStart.c)
 *     SeQuerySigningPolicy @ 0x140619F40 (SeQuerySigningPolicy.c)
 *     ExCheckFullProcessInformationAccess @ 0x14069E6AC (ExCheckFullProcessInformationAccess.c)
 *     SdbGetIndex @ 0x14070E674 (SdbGetIndex.c)
 *     ExpCheckTestsigningEnabled @ 0x140749EA0 (ExpCheckTestsigningEnabled.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14074D3D4 (SdbpGetStringTableItemFromStringRef.c)
 *     ExQueryBootEntropyInformation @ 0x14075BACC (ExQueryBootEntropyInformation.c)
 *     RtlpLogCapabilityCheckLatency @ 0x1408D87C8 (RtlpLogCapabilityCheckLatency.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090DC80 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     RtlRunOnceBeginInitialize @ 0x14061A360 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x1406EB0A0 (RtlRunOnceComplete.c)
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
