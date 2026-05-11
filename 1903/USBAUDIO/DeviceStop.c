/*
 * XREFs of DeviceStop @ 0x1C0020900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0 @ 0x1C0001AA0 (McTemplateK0.c)
 *     McTemplateK0q @ 0x1C0001AE0 (McTemplateK0q.c)
 *     ExitIrpThreadAndQueue @ 0x1C00026F4 (ExitIrpThreadAndQueue.c)
 *     DeInitSideband @ 0x1C0007788 (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeviceStop(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, const GUID *a3)
{
  __int64 MatchAnyKeyword; // rdi
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rdx
  const GUID *v8; // r8
  void *v9; // rcx
  struct _KSFILTERFACTORY *v10; // rcx
  int v11; // [rsp+30h] [rbp-28h]

  MatchAnyKeyword = a1->MatchAnyKeyword;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x17u,
      (__int64)&WPP_eb5248a9c5fb3f92ddde8b69ed047f7b_Traceguids,
      a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0(a1, &EXBUS_DEVICE_STOP_ENTER, a3);
  if ( !*(_BYTE *)(MatchAnyKeyword + 64) )
  {
    *(_BYTE *)(MatchAnyKeyword + 64) = 1;
    ExitIrpThreadAndQueue(MatchAnyKeyword);
  }
  KeWaitForSingleObject((PVOID)(MatchAnyKeyword + 744), Executive, 0, 0, 0LL);
  DeInitSideband((__int64)a1, v6);
  KeReleaseMutex((PRKMUTEX)(MatchAnyKeyword + 744), 0);
  v9 = *(void **)(MatchAnyKeyword + 984);
  if ( v9 )
  {
    KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*(PVOID *)(MatchAnyKeyword + 984), 0x65627845u);
    *(_QWORD *)(MatchAnyKeyword + 984) = 0LL;
  }
  if ( !*(_BYTE *)(MatchAnyKeyword + 67) )
    v5 = (*(__int64 (__fastcall **)(struct _MCGEN_TRACE_CONTEXT *))(pExtBusDeviceDispatchTable + 16))(a1);
  v10 = *(struct _KSFILTERFACTORY **)(MatchAnyKeyword + 120);
  if ( v10 )
  {
    KsFilterFactorySetDeviceClassesState(v10, 0);
    *(_QWORD *)(MatchAnyKeyword + 120) = 0LL;
  }
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = v5;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1u,
      0x18u,
      (__int64)&WPP_eb5248a9c5fb3f92ddde8b69ed047f7b_Traceguids,
      a1,
      v11);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0q((struct _MCGEN_TRACE_CONTEXT *)v10, v7, v8, v5);
}
