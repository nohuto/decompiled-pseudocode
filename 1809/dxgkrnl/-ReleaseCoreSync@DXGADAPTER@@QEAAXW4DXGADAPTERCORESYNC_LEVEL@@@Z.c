/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCD10
 * Callers:
 *     ?DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0037C00 (-DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01DCB50 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C002ED0C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C002F974 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00BCDC8 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01447C4 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01BEE34 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  ADAPTER_RENDER *v6; // rcx
  __int64 v7; // rcx
  ADAPTER_RENDER *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[5] = a1;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v5 = 7LL;
  if ( (_DWORD)v2 == 1 )
    goto LABEL_4;
  if ( (_DWORD)v2 == 2 )
    goto LABEL_11;
  if ( (_DWORD)v2 != 3 )
  {
    if ( (_DWORD)v2 != 5 )
    {
      v10 = WdLogNewEntry5_WdError((unsigned int)(v2 - 3));
      *(_QWORD *)(v10 + 24) = v2;
      WdLogEvent5_WdError(v10);
      goto LABEL_7;
    }
    v8 = *(ADAPTER_RENDER **)(a1 + 2528);
    if ( v8 )
    {
      ADAPTER_RENDER::RestoreFromPurgeSegments(v8);
      v5 = 10LL;
    }
LABEL_11:
    v7 = *(_QWORD *)(a1 + 2528);
    if ( v7 )
      ADAPTER_RENDER::FlushScheduler(v7, v5, 0xFFFFFFFFLL, 0LL);
    if ( *(_DWORD *)(a1 + 136) == 1 )
    {
      DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
      *(_DWORD *)(a1 + 136) = 0;
      *(_DWORD *)(a1 + 3004) = 0;
      DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
      if ( *(_QWORD *)(a1 + 2920) )
        DXGADAPTER::ScheduleAdapterActivityCheck((KSPIN_LOCK *)a1);
    }
  }
LABEL_4:
  if ( *(_BYTE *)(a1 + 181) )
    *(_BYTE *)(a1 + 181) = 0;
  DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)a1);
LABEL_7:
  v6 = *(ADAPTER_RENDER **)(a1 + 2528);
  if ( v6 )
    ADAPTER_RENDER::EnableClockCalibration(v6, 1u);
}
