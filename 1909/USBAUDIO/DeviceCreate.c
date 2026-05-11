/*
 * XREFs of DeviceCreate @ 0x1C0001BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     McGenEventRegister @ 0x1C0001A3C (McGenEventRegister.c)
 *     InitializeSidebandContext @ 0x1C0007458 (InitializeSidebandContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012840 (memset.c)
 *     WmiRegisterProvider @ 0x1C0028C44 (WmiRegisterProvider.c)
 */

__int64 __fastcall DeviceCreate(__int64 a1)
{
  NTSTATUS v2; // edi
  ETWENABLECALLBACK *v3; // rdx
  const GUID *v4; // rcx
  PDRIVER_CONTROL *PoolWithTag; // rax
  __int64 v6; // rdx
  PDRIVER_CONTROL *v7; // rbx
  const wchar_t *v8; // rdx
  __int64 v9; // rcx
  __int16 v10; // ax
  KIRQL v11; // al
  PDRIVER_CONTROL DeviceRoutine; // rcx
  PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp; // [rsp+30h] [rbp-58h]
  _COUNTED_REASON_CONTEXT Context; // [rsp+40h] [rbp-48h] BYREF

  v2 = -1073741670;
  memset(&Context, 0, sizeof(Context));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v3,
      1u,
      0xAu,
      (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
      a1);
  McGenEventRegister(v4, v3, &EXBUSAUD_PROVIDER_Context, &EXBUSAUD_PROVIDER_Context);
  EtwSetInformation(
    EXBUSAUD_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  PoolWithTag = (PDRIVER_CONTROL *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x3E0uLL, 0x41627845u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v2 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool);
    if ( v2 < 0 )
    {
      ExFreePool(v7);
      goto LABEL_19;
    }
    *(_QWORD *)(a1 + 16) = v7;
    memset(v7, 0, 0x3E0uLL);
    InitializeSidebandContext(v7 + 88);
    WmiRegisterProvider(a1);
    KeInitializeSpinLock((PKSPIN_LOCK)v7 + 12);
    v7[14] = (PDRIVER_CONTROL)(v7 + 13);
    v7[13] = (PDRIVER_CONTROL)(v7 + 13);
    v8 = L"mmres.dll";
    v7[2] = (PDRIVER_CONTROL)a1;
    *((_BYTE *)v7 + 64) = 1;
    Context.ResourceReasonId = 900;
    Context.ResourceFileName = 0uLL;
    v9 = 0x7FFFLL;
    Context.Flags = 2;
    Context.StringCount = 0;
    Context.ReasonStrings = 0LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v9;
    }
    while ( v9 );
    if ( v9 )
      v10 = 0x7FFF - v9;
    else
      v10 = 0;
    if ( v9 )
    {
      Context.ResourceFileName.Buffer = L"mmres.dll";
      Context.ResourceFileName.Length = 2 * v10;
      Context.ResourceFileName.MaximumLength = 2 * v10 + 2;
      PoCreatePowerRequest((PVOID *)v7 + 64, *(PDEVICE_OBJECT *)(a1 + 24), &Context);
    }
    KeInitializeEvent((PRKEVENT)(v7 + 68), NotificationEvent, 1u);
    KeInitializeSpinLock((PKSPIN_LOCK)v7 + 79);
    KeInitializeSemaphore((PRKSEMAPHORE)(v7 + 82), 0, 0x7FFFFFFF);
    v7[81] = (PDRIVER_CONTROL)(v7 + 80);
    v7[80] = (PDRIVER_CONTROL)(v7 + 80);
    v2 = IoCsqInitialize(
           (PIO_CSQ)(v7 + 71),
           CsInsertIrp,
           CSidebandDevice::staticCsqRemoveIrp,
           CsPeekNextIrp,
           CsAcquireLock,
           CsReleaseLock,
           CsCompleteCanceledIrp);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64))pExtBusDeviceDispatchTable)(a1);
      if ( v2 >= 0 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
        DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
        ++WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
        if ( *((struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 1) != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
          __fastfail(3u);
        *v7 = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
        v7[1] = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
        *((_QWORD *)DeviceRoutine + 1) = v7;
        WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v7;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v11);
LABEL_19:
        if ( v2 >= 0 )
          return (unsigned int)v2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(CsqCompleteCanceledIrp) = v2;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1u,
      0xBu,
      (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
      a1,
      CsqCompleteCanceledIrp);
  }
  return (unsigned int)v2;
}
