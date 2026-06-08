/*
 * XREFs of CpcConnectNativeInterrupt @ 0x1C002C664
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcConnectNativeInterrupt(struct _DEVICE_OBJECT **DeferredContext)
{
  struct _DEVICE_OBJECT *v1; // rsi
  struct _DEVICE_OBJECT *v3; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  v1 = DeferredContext[30];
  ProcNumber = 0;
  v3 = *DeferredContext;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  WorkItem = IoAllocateWorkItem(v3);
  v1[1].NextDevice = (_DEVICE_OBJECT *)WorkItem;
  if ( WorkItem )
  {
    KeInitializeDpc(
      (PRKDPC)&v1->DeviceLock.Header.WaitListHead,
      (PKDEFERRED_ROUTINE)CpcNativeInterruptDpc,
      DeferredContext);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    KeSetTargetProcessorDpcEx((PKDPC)&v1->DeviceLock.Header.WaitListHead, &ProcNumber);
    KeSetImportanceDpc((PRKDPC)&v1->DeviceLock.Header.WaitListHead, MediumHighImportance);
    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( (int)((__int64 (__fastcall *)(struct _DEVICE_OBJECT **))qword_1C001B548)(DeferredContext) >= 0 )
    {
      LOBYTE(v1->Queue.Wcb.DeviceRoutine) = 1;
      ((void (*)(void))qword_1C001B558)();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x10u,
      (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
