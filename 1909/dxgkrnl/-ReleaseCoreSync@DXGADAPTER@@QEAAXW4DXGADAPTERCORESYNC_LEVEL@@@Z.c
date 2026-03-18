/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D09E8
 * Callers:
 *     ?DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C003E1C0 (-DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00D0970 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C020B700 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C003460C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00352E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00D0AB8 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C015AC5C (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EE9D4 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  ADAPTER_RENDER *v9; // rcx
  __int64 v10; // rcx
  ADAPTER_RENDER *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  struct _KTHREAD *v14; // rdx

  v2 = a2;
  v4 = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
    v12[3] = 275LL;
    v12[4] = 4LL;
    v12[5] = a1;
    v12[6] = 0LL;
    v12[7] = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  v8 = 7LL;
  if ( (_DWORD)v2 == 1 )
    goto LABEL_4;
  if ( (_DWORD)v2 == 2 )
    goto LABEL_11;
  if ( (_DWORD)v2 != 3 )
  {
    if ( (_DWORD)v2 != 5 )
    {
      v13 = WdLogNewEntry5_WdError((unsigned int)(v2 - 3), 7LL, v7);
      *(_QWORD *)(v13 + 24) = v2;
      WdLogEvent5_WdError(v13);
      goto LABEL_7;
    }
    v11 = *(ADAPTER_RENDER **)(a1 + 2560);
    if ( v11 )
    {
      ADAPTER_RENDER::RestoreFromPurgeSegments(v11);
      v8 = 10LL;
    }
LABEL_11:
    v10 = *(_QWORD *)(a1 + 2560);
    if ( v10 )
      ADAPTER_RENDER::FlushScheduler(v10, v8, 0xFFFFFFFFLL);
    if ( *(_DWORD *)(a1 + 136) == 1 )
    {
      DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
      *(_DWORD *)(a1 + 136) = 0;
      *(_DWORD *)(a1 + 3036) = 0;
      v4 = 8017;
      DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
      if ( *(_QWORD *)(a1 + 2952) )
        DXGADAPTER::ScheduleAdapterActivityCheck((struct _KTHREAD **)a1, v14);
    }
  }
LABEL_4:
  if ( *(_BYTE *)(a1 + 181) )
    *(_BYTE *)(a1 + 181) = 0;
  DXGADAPTER::ReleaseCoreResource(a1, v4, 0LL);
LABEL_7:
  v9 = *(ADAPTER_RENDER **)(a1 + 2560);
  if ( v9 )
    ADAPTER_RENDER::EnableClockCalibration(v9, 1u);
}
