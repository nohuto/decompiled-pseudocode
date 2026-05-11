/*
 * XREFs of DeviceStart @ 0x1C001F270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqddd @ 0x1C0001738 (WPP_RECORDER_SF_qqddd.c)
 *     McTemplateK0 @ 0x1C0001AA0 (McTemplateK0.c)
 *     McTemplateK0zq @ 0x1C0001B44 (McTemplateK0zq.c)
 *     InitializeSideband @ 0x1C0007448 (InitializeSideband.c)
 *     DeInitSideband @ 0x1C0007670 (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     FilterCreateFilterFactory @ 0x1C00206A4 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C0027488 (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C0027BC8 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(struct _KSDEVICE *a1, __int64 a2)
{
  char *Context; // rbp
  int FilterFactory; // edi
  __int64 v5; // rdx
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  const GUID *v7; // r8
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  PULONG v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v22; // rdx
  struct _IO_WORKITEM *WorkItem; // rbx
  PVOID PoolWithTag; // rax
  __int64 v25; // rdx
  int Timeout; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  int v30; // [rsp+50h] [rbp-28h] BYREF
  int v31[3]; // [rsp+54h] [rbp-24h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF

  Context = (char *)a1->Context;
  FilterFactory = 0;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    1u,
    0xCu,
    (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
    a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0(v6, &EXBUS_DEVICE_START_ENTER, v7);
  if ( a1->Started )
    goto LABEL_16;
  *((_DWORD *)Context + 132) = 1;
  Context[64] = 0;
  FilterFactory = (*(__int64 (__fastcall **)(struct _KSDEVICE *))(pExtBusDeviceDispatchTable + 8))(a1);
  if ( FilterFactory < 0 )
    goto LABEL_15;
  v8 = Context + 852;
  FilterFactory = (*(__int64 (__fastcall **)(struct _KSDEVICE *, char *))(pExtBusDeviceDispatchTable + 40))(
                    a1,
                    Context + 852);
  LODWORD(v27) = *((_DWORD *)Context + 213);
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v9,
    9u,
    0xDu,
    (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
    v27);
  if ( FilterFactory < 0 )
    goto LABEL_15;
  if ( (unsigned int)(*v8 - 1) <= 1 )
  {
    v11 = InitializeSideband(a1, v10);
    FilterFactory = v11;
    if ( v11 >= 0 )
      goto LABEL_10;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1u,
      0xEu,
      (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
      a1,
      v11);
  }
  if ( FilterFactory < 0 )
  {
LABEL_15:
    KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
    DeInitSideband((__int64)a1, v19);
    KeReleaseMutex((PRKMUTEX)(Context + 744), 0);
    Context[64] = 1;
    LODWORD(v29) = FilterFactory;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      1u,
      0x13u,
      (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
      a1,
      v29);
    goto LABEL_16;
  }
LABEL_10:
  FilterFactory = FilterCreateFilterFactory(a1);
  if ( FilterFactory < 0 )
    goto LABEL_15;
  if ( (int)RegistryGetIdleInfo(a1->PhysicalDeviceObject, &v32, &v30, v31) >= 0 )
  {
    *((_DWORD *)Context + 134) = v32;
    *((_DWORD *)Context + 135) = v30;
    *((_DWORD *)Context + 133) = v31[0];
  }
  v13 = PoRegisterDeviceForIdleDetection(
          a1->PhysicalDeviceObject,
          *((_DWORD *)Context + 134),
          *((_DWORD *)Context + 135),
          (DEVICE_POWER_STATE)*((_DWORD *)Context + 133));
  *((_QWORD *)Context + 65) = v13;
  HIDWORD(v29) = HIDWORD(v13);
  HIDWORD(v28) = HIDWORD(a1);
  WPP_RECORDER_SF_qqddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16, Timeout);
  v18 = InitializeIrpThreadAndQueue(v17, Context);
  FilterFactory = v18;
  if ( v18 < 0 )
  {
    LODWORD(v29) = v18;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      0x10u,
      (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
      a1,
      v29);
    goto LABEL_15;
  }
  if ( (unsigned int)(*v8 - 1) <= 1 )
  {
    WorkItem = IoAllocateWorkItem(a1->FunctionalDeviceObject);
    if ( !WorkItem )
    {
      LODWORD(v28) = FilterFactory;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v22,
        1u,
        0x11u,
        (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
        v28);
      FilterFactory = -1073741670;
    }
    if ( FilterFactory < 0 )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x65627845u);
    *((_QWORD *)Context + 123) = PoolWithTag;
    if ( !PoolWithTag )
    {
      IoFreeWorkItem(WorkItem);
      WorkItem = 0LL;
      LODWORD(v28) = FilterFactory;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v25,
        1u,
        0x12u,
        (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
        v28);
      FilterFactory = -1073741670;
    }
    if ( FilterFactory < 0 )
      goto LABEL_15;
    KeInitializeEvent(*((PRKEVENT *)Context + 123), NotificationEvent, 0);
    IoQueueWorkItemEx(WorkItem, SidebandCapableDeferredFilterFactoryCreate, CriticalWorkQueue, a1);
    KeWaitForSingleObject(Context + 952, Executive, 0, 0, 0LL);
  }
LABEL_16:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq((__int64)v6, v5, v7, *((const wchar_t **)Context + 3), FilterFactory);
  return (unsigned int)FilterFactory;
}
