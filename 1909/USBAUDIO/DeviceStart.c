/*
 * XREFs of DeviceStart @ 0x1C0020270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqddd @ 0x1C0001738 (WPP_RECORDER_SF_qqddd.c)
 *     McTemplateK0 @ 0x1C0001AA0 (McTemplateK0.c)
 *     McTemplateK0zq @ 0x1C0001B44 (McTemplateK0zq.c)
 *     InitializeSideband @ 0x1C0007528 (InitializeSideband.c)
 *     DeInitSideband @ 0x1C0007788 (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     FilterCreateFilterFactory @ 0x1C0021804 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C002860C (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C0028D78 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(struct _KSDEVICE *a1, __int64 a2, const GUID *a3)
{
  char *Context; // rbp
  int FilterFactory; // edi
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  PULONG v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // rdx
  struct _IO_WORKITEM *WorkItem; // rbx
  PVOID PoolWithTag; // rax
  __int64 v21; // rdx
  int Timeout; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+50h] [rbp-38h] BYREF
  int v26[3]; // [rsp+54h] [rbp-34h] BYREF
  int v27; // [rsp+90h] [rbp+8h] BYREF

  Context = (char *)a1->Context;
  FilterFactory = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xCu,
      (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
      a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0((struct _MCGEN_TRACE_CONTEXT *)a1, &EXBUS_DEVICE_START_ENTER, a3);
  if ( !a1->Started )
  {
    *((_DWORD *)Context + 132) = 1;
    Context[64] = 0;
    FilterFactory = (*(__int64 (__fastcall **)(struct _KSDEVICE *))(pExtBusDeviceDispatchTable + 8))(a1);
    if ( FilterFactory >= 0 )
    {
      v6 = Context + 852;
      FilterFactory = (*(__int64 (__fastcall **)(struct _KSDEVICE *, char *))(pExtBusDeviceDispatchTable + 40))(
                        a1,
                        Context + 852);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = *v6;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v7,
          9u,
          0xDu,
          (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
          v23);
      }
      if ( FilterFactory >= 0 )
      {
        if ( (unsigned int)(*v6 - 1) <= 1 )
        {
          v8 = InitializeSideband(a1, v7);
          FilterFactory = v8;
          if ( v8 >= 0 )
            goto LABEL_15;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v9,
              1u,
              0xEu,
              (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
              a1,
              v8);
        }
        if ( FilterFactory >= 0 )
        {
LABEL_15:
          FilterFactory = FilterCreateFilterFactory(a1);
          if ( FilterFactory >= 0 )
          {
            if ( (int)RegistryGetIdleInfo(a1->PhysicalDeviceObject, &v27, &v25, v26) >= 0 )
            {
              *((_DWORD *)Context + 134) = v27;
              *((_DWORD *)Context + 135) = v25;
              *((_DWORD *)Context + 133) = v26[0];
            }
            v10 = PoRegisterDeviceForIdleDetection(
                    a1->PhysicalDeviceObject,
                    *((_DWORD *)Context + 134),
                    *((_DWORD *)Context + 135),
                    (DEVICE_POWER_STATE)*((_DWORD *)Context + 133));
            *((_QWORD *)Context + 65) = v10;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              HIDWORD(v24) = HIDWORD(v10);
              HIDWORD(v23) = HIDWORD(a1);
              WPP_RECORDER_SF_qqddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v13, v14, Timeout);
            }
            v15 = InitializeIrpThreadAndQueue(v12, Context);
            FilterFactory = v15;
            if ( v15 >= 0 )
            {
              if ( (unsigned int)(*v6 - 1) > 1 )
                goto LABEL_25;
              WorkItem = IoAllocateWorkItem(a1->FunctionalDeviceObject);
              if ( !WorkItem )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v23) = FilterFactory;
                  WPP_RECORDER_SF_d(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v18,
                    1u,
                    0x11u,
                    (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
                    v23);
                }
                FilterFactory = -1073741670;
              }
              if ( FilterFactory >= 0 )
              {
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x65627845u);
                *((_QWORD *)Context + 123) = PoolWithTag;
                if ( !PoolWithTag )
                {
                  IoFreeWorkItem(WorkItem);
                  WorkItem = 0LL;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v23) = FilterFactory;
                    WPP_RECORDER_SF_d(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      v21,
                      1u,
                      0x12u,
                      (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
                      v23);
                  }
                  FilterFactory = -1073741670;
                }
                if ( FilterFactory >= 0 )
                {
                  KeInitializeEvent(*((PRKEVENT *)Context + 123), NotificationEvent, 0);
                  IoQueueWorkItemEx(WorkItem, SidebandCapableDeferredFilterFactoryCreate, CriticalWorkQueue, a1);
                  KeWaitForSingleObject(Context + 952, Executive, 0, 0, 0LL);
                  goto LABEL_25;
                }
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v24) = v15;
              WPP_RECORDER_SF_qd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                a2,
                1u,
                0x10u,
                (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
                a1,
                v24);
            }
          }
        }
      }
    }
    KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
    DeInitSideband((__int64)a1, v16);
    KeReleaseMutex((PRKMUTEX)(Context + 744), 0);
    Context[64] = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = FilterFactory;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1u,
        0x13u,
        (__int64)&WPP_849477e99634315227f7ff611fe724be_Traceguids,
        a1,
        v24);
    }
  }
LABEL_25:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq((__int64)a1, a2, a3, *((const wchar_t **)Context + 3), FilterFactory);
  return (unsigned int)FilterFactory;
}
