/*
 * XREFs of ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCFF8
 * Callers:
 *     ?DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0037BC0 (-DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01DCA80 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00BCDC8 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01BC7E4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::AcquireCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  const GUID *v6; // r8
  ADAPTER_RENDER *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax

  v2 = a2;
  if ( DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[5] = a1;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( !KeReadStateEvent((PRKEVENT)(a1 + 48)) )
  {
    if ( (_DWORD)v2 == 4 )
      return;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v5, &EventBlockThread, v6, 72);
    KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, 0LL);
  }
  switch ( (_DWORD)v2 )
  {
    case 1:
      DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a1);
      break;
    case 2:
      LOBYTE(v6) = 1;
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2LL, v6);
      v8 = *(_QWORD *)(a1 + 2528);
      if ( v8 )
        ADAPTER_RENDER::FlushScheduler(v8, 6LL, 0xFFFFFFFFLL, 0LL);
      break;
    case 3:
      LOBYTE(v6) = 1;
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2LL, v6);
      break;
    case 4:
      DXGADAPTER::AcquireLocksForPowerStateD3transition((DXGADAPTER *)a1);
      break;
    case 6:
      LOBYTE(v6) = 1;
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2LL, v6);
      *(_BYTE *)(a1 + 181) = 1;
      break;
    default:
      v10 = WdLogNewEntry5_WdError((unsigned int)(v2 - 4));
      *(_QWORD *)(v10 + 24) = v2;
      WdLogEvent5_WdError(v10);
      break;
  }
  v7 = *(ADAPTER_RENDER **)(a1 + 2528);
  if ( v7 )
  {
    if ( (((_DWORD)v2 - 4) & 0xFFFFFFFD) == 0 )
      ADAPTER_RENDER::EnableClockCalibration(v7, 0);
  }
}
