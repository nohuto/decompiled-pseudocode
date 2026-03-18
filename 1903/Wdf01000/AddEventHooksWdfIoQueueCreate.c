/*
 * XREFs of AddEventHooksWdfIoQueueCreate @ 0x1C00C3E68
 * Callers:
 *     imp_VfWdfIoQueueCreate @ 0x1C00C0EA0 (imp_VfWdfIoQueueCreate.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     VfAddContextToHandle @ 0x1C00C40D0 (VfAddContextToHandle.c)
 *     VfAllocateContext @ 0x1C00C4224 (VfAllocateContext.c)
 */

int __fastcall AddEventHooksWdfIoQueueCreate(
        _VF_HOOK_PROCESS_INFO *HookProcessInfo,
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  int result; // eax
  bool v11; // zf
  WDFQUEUE__ **p_queue; // r15
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  __int128 v16; // xmm0
  void (__fastcall *EvtIoDefault)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  void (__fastcall *EvtIoRead)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64); // rax
  void (__fastcall *v19)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64); // rax
  void (__fastcall *EvtIoDeviceControl)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int); // rax
  __int128 v21; // xmm0
  void (__fastcall *v22)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int); // rax
  void (__fastcall *EvtIoStop)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned int); // rax
  void (__fastcall *v24)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  void (__fastcall *EvtIoCanceledOnQueue)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  signed int v26; // eax
  int v27; // r14d
  FX_POOL_TRACKER *v28; // rdi
  WDFQUEUE__ *v29; // r8
  _VF_WDFIOQUEUECREATE_CONTEXT *v30; // rax
  FX_POOL_TRACKER *v31; // rcx
  _WDF_IO_QUEUE_CONFIG configNew; // [rsp+30h] [rbp-79h] BYREF
  WDFQUEUE__ *queue; // [rsp+90h] [rbp-19h] BYREF
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+98h] [rbp-11h] BYREF
  ULONG_PTR retaddr; // [rsp+F8h] [rbp+4Fh]
  void *contextHeader; // [rsp+108h] [rbp+5Fh] BYREF
  _VF_WDFIOQUEUECREATE_CONTEXT *context; // [rsp+118h] [rbp+6Fh] BYREF

  memset(&configNew, 0, sizeof(configNew));
  contextHeader = 0LL;
  memset(&attributes, 0, sizeof(attributes));
  if ( !Config )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( Config->Size != 96 )
  {
    result = 0;
LABEL_6:
    HookProcessInfo->DonotCallKmdfLib = 0;
    return result;
  }
  attributes.ContextTypeInfo = WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO.UniqueType;
  attributes.Size = 56;
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  result = VfAllocateContext(DriverGlobals, &attributes, &contextHeader);
  if ( result < 0 )
    goto LABEL_6;
  v11 = Config->EvtIoDefault == 0LL;
  p_queue = &queue;
  v13 = *(_OWORD *)&Config->EvtIoWrite;
  v14 = *(_OWORD *)&Config->EvtIoInternalDeviceControl;
  v15 = *(_OWORD *)&Config->EvtIoResume;
  v16 = *(_OWORD *)&Config->Size;
  *(_OWORD *)&configNew.EvtIoDefault = *(_OWORD *)&Config->EvtIoDefault;
  EvtIoDefault = configNew.EvtIoDefault;
  if ( !v11 )
    EvtIoDefault = VfEvtIoDefault;
  *(_OWORD *)&configNew.EvtIoWrite = v13;
  v11 = Config->EvtIoRead == 0LL;
  configNew.EvtIoDefault = EvtIoDefault;
  EvtIoRead = configNew.EvtIoRead;
  if ( !v11 )
    EvtIoRead = VfEvtIoRead;
  *(_OWORD *)&configNew.EvtIoInternalDeviceControl = v14;
  v11 = Config->EvtIoWrite == 0LL;
  configNew.EvtIoRead = EvtIoRead;
  v19 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64))v13;
  if ( !v11 )
    v19 = VfEvtIoWrite;
  *(_OWORD *)&configNew.EvtIoResume = v15;
  v11 = Config->EvtIoDeviceControl == 0LL;
  configNew.EvtIoWrite = v19;
  EvtIoDeviceControl = configNew.EvtIoDeviceControl;
  if ( !v11 )
    EvtIoDeviceControl = VfEvtIoDeviceControl;
  *(_OWORD *)&configNew.Size = v16;
  v11 = Config->EvtIoInternalDeviceControl == 0LL;
  v21 = *(_OWORD *)&Config->Settings.Parallel.NumberOfPresentedRequests;
  configNew.EvtIoDeviceControl = EvtIoDeviceControl;
  v22 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int))v14;
  if ( !v11 )
    v22 = VfEvtIoInternalDeviceControl;
  *(_OWORD *)&configNew.Settings.Parallel.NumberOfPresentedRequests = v21;
  v11 = Config->EvtIoStop == 0LL;
  configNew.EvtIoInternalDeviceControl = v22;
  EvtIoStop = configNew.EvtIoStop;
  if ( !v11 )
    EvtIoStop = VfEvtIoStop;
  v11 = Config->EvtIoResume == 0LL;
  configNew.EvtIoStop = EvtIoStop;
  v24 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))v15;
  if ( !v11 )
    v24 = VfEvtIoResume;
  v11 = Config->EvtIoCanceledOnQueue == 0LL;
  configNew.EvtIoResume = v24;
  EvtIoCanceledOnQueue = configNew.EvtIoCanceledOnQueue;
  if ( !v11 )
    EvtIoCanceledOnQueue = VfEvtIoCanceledOnQueue;
  configNew.EvtIoCanceledOnQueue = EvtIoCanceledOnQueue;
  if ( Queue )
    p_queue = Queue;
  v26 = WdfVersion.Functions.pfnWdfIoQueueCreate(DriverGlobals, Device, &configNew, QueueAttributes, p_queue);
  HookProcessInfo->DonotCallKmdfLib = 1;
  v27 = v26;
  HookProcessInfo->DdiCallStatus = v26;
  if ( v26 < 0 )
  {
    v31 = (FX_POOL_TRACKER *)contextHeader;
    if ( !contextHeader )
      return v27;
    goto LABEL_31;
  }
  v28 = (FX_POOL_TRACKER *)contextHeader;
  v29 = *p_queue;
  context = 0LL;
  v27 = VfAddContextToHandle(contextHeader, &attributes, v29, (void **)&context);
  if ( v27 < 0 )
  {
    if ( !v28 )
      return v27;
    v31 = v28;
LABEL_31:
    FxPoolFree(v31);
    return v27;
  }
  v30 = context;
  context->CommonHeader.DriverGlobals = DriverGlobals;
  v30->IoQueueConfigOriginal = *Config;
  return v27;
}
