/*
 * XREFs of DeviceStop @ 0x1C001F880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0 @ 0x1C0001AA0 (McTemplateK0.c)
 *     McTemplateK0q @ 0x1C0001AE0 (McTemplateK0q.c)
 *     ExitIrpThreadAndQueue @ 0x1C0002898 (ExitIrpThreadAndQueue.c)
 *     DeInitSideband @ 0x1C0007670 (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeviceStop(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // esi
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  const GUID *v9; // r8
  void *v10; // rcx
  struct _KSFILTERFACTORY *v11; // rcx
  int v12; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    1u,
    0x17u,
    (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
    a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0(v5, &EXBUS_DEVICE_STOP_ENTER, v6);
  if ( !*(_BYTE *)(v2 + 64) )
  {
    *(_BYTE *)(v2 + 64) = 1;
    ExitIrpThreadAndQueue(v2);
  }
  KeWaitForSingleObject((PVOID)(v2 + 744), Executive, 0, 0, 0LL);
  DeInitSideband(a1, v7);
  KeReleaseMutex((PRKMUTEX)(v2 + 744), 0);
  v10 = *(void **)(v2 + 984);
  if ( v10 )
  {
    KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v2 + 984), 0x65627845u);
    *(_QWORD *)(v2 + 984) = 0LL;
  }
  if ( !*(_BYTE *)(v2 + 67) )
    v4 = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 16))(a1);
  v11 = *(struct _KSFILTERFACTORY **)(v2 + 120);
  if ( v11 )
  {
    KsFilterFactorySetDeviceClassesState(v11, 0);
    *(_QWORD *)(v2 + 120) = 0LL;
  }
  if ( v4 < 0 )
  {
    v12 = v4;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      1u,
      0x18u,
      (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
      a1,
      v12);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0q((struct _MCGEN_TRACE_CONTEXT *)v11, v8, v9, v4);
}
