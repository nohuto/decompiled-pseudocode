/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C008AD84
 * Callers:
 *     VidMmInitGlobals @ 0x1C0017B50 (VidMmInitGlobals.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0002730 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002750 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McGenEventRegister @ 0x1C0017B64 (McGenEventRegister.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C008A9FC (TlgRegisterAggregateProviderEx.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C008B108 (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C008B150 (-InitGlobals@VIDMM_DMA_POOL@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008B2D0 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     __security_init_cookie @ 0x1C00D0044 (__security_init_cookie.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  PETWENABLECALLBACK v0; // rdx
  LPCGUID v1; // rcx
  PVOID v2; // r8
  PREGHANDLE v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebx
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rcx
  int inited; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int LiveDumpWithWdLogs; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  _QWORD v35[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-90h] BYREF
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+80h] [rbp-80h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v41; // [rsp+B0h] [rbp-50h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v42; // [rsp+E0h] [rbp-20h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v43; // [rsp+110h] [rbp+10h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v44; // [rsp+140h] [rbp+40h] BYREF

  _security_init_cookie();
  bTracingEnabled = 0;
  McGenEventRegister(v1, v0, v2, v3);
  TlgRegisterAggregateProviderEx(v5, v4);
  VIDMM_GLOBAL::ReadConfiguration();
  VIDMM_GLOBAL::_RotationHistory = operator new[](0x18000uLL, 0x6D4D6956u, (POOL_TYPE)512);
  if ( VIDMM_GLOBAL::_RotationHistory )
    qword_1C004E4B0 = 2048LL;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v8 = 4LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 4uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x33316956u, PagedPool);
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = v9;
  if ( v9 )
  {
    memset(v9, 0, 4LL * MaximumAdapterCount);
    inited = VIDMM_DMA_POOL::InitGlobals();
    v14 = inited;
    if ( inited < 0 || (v15 = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage(), v14 = v15, v15 < 0) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v29 + 24) = v14;
      goto LABEL_27;
    }
    qword_1C004E748 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    v16 = operator new[](0x18uLL, 0x30316956u, PagedPool);
    if ( v16 )
    {
      *v16 = 0LL;
      v16[1] = 0LL;
      *((_DWORD *)v16 + 4) = -1;
    }
    else
    {
      v16 = 0LL;
    }
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v16;
    if ( v16 )
    {
      VIDMM_PARTITION::_PartitionTree = 0LL;
      qword_1C004E778 = (__int64)&VIDMM_GLOBAL::_AdapterListHead;
      VIDMM_GLOBAL::_AdapterListHead.Flink = &VIDMM_GLOBAL::_AdapterListHead;
      v35[0] = 2490404LL;
      v35[1] = L"GPU Process Memory";
      Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetProcessMemory'::`2'::Descriptors;
      Info.Name = (PCUNICODE_STRING)v35;
      *(_QWORD *)&Info.Version = 256LL;
      *(_QWORD *)&Info.CounterCount = 5LL;
      Info.Callback = 0LL;
      Info.CallbackContext = 0LL;
      v19 = PcwRegister(&GpuPerformanceCounterSetProcessMemory, &Info);
      v14 = v19;
      if ( v19 < 0 )
        goto LABEL_24;
      VIDMM_GLOBAL::PerfCounterSetEngineRegistered = 1;
      v36[1] = L"GPU Engine";
      v36[0] = 1441812LL;
      v41.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetEngine'::`2'::Descriptors;
      *(_QWORD *)&v41.Version = 256LL;
      v41.Name = (PCUNICODE_STRING)v36;
      *(_QWORD *)&v41.CounterCount = 2LL;
      v41.Callback = 0LL;
      v41.CallbackContext = 0LL;
      v22 = PcwRegister(&GpuPerformanceCounterSetEngine, &v41);
      v14 = v22;
      if ( v22 < 0 )
        goto LABEL_24;
      VIDMM_GLOBAL::PerfCounterSetProcessMemoryRegistered = 1;
      v37[1] = L"GPU Adapter Memory";
      v37[0] = 2490404LL;
      v42.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetAdapterMemory'::`2'::Descriptors;
      *(_QWORD *)&v42.Version = 256LL;
      v42.Name = (PCUNICODE_STRING)v37;
      *(_QWORD *)&v42.CounterCount = 3LL;
      v42.Callback = 0LL;
      v42.CallbackContext = 0LL;
      v23 = PcwRegister(&GpuPerformanceCounterSetAdapterMemory, &v42);
      v14 = v23;
      if ( v23 < 0 )
        goto LABEL_24;
      VIDMM_GLOBAL::PerfCounterSetAdapterMemoryRegistered = 1;
      v38[1] = L"GPU Local Adapter Memory";
      v38[0] = 3276848LL;
      v43.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
      *(_QWORD *)&v43.Version = 256LL;
      v43.Name = (PCUNICODE_STRING)v38;
      *(_QWORD *)&v43.CounterCount = 1LL;
      v43.Callback = 0LL;
      v43.CallbackContext = 0LL;
      v24 = PcwRegister(&GpuPerformanceCounterSetLocalAdapterMemory, &v43);
      v14 = v24;
      if ( v24 < 0 )
        goto LABEL_24;
      VIDMM_GLOBAL::PerfCounterSetLocalAdapterMemoryRegistered = 1;
      v39[1] = L"GPU Non Local Adapter Memory";
      v39[0] = 3801144LL;
      v44.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
      *(_QWORD *)&v44.Version = 256LL;
      v44.Name = (PCUNICODE_STRING)v39;
      *(_QWORD *)&v44.CounterCount = 1LL;
      v44.Callback = 0LL;
      v44.CallbackContext = 0LL;
      v25 = PcwRegister(&GpuPerformanceCounterSetNonLocalAdapterMemory, &v44);
      v14 = v25;
      if ( v25 < 0 )
      {
LABEL_24:
        v30 = WdLogNewEntry5_WdAssertion(v21, v20);
        *(_QWORD *)(v30 + 24) = v14;
        WdLogEvent5_WdAssertion(v30);
      }
      else
      {
        VIDMM_GLOBAL::PerfCounterSetNonLocalAdapterMemoryRegistered = 1;
      }
      if ( (int)v14 >= 0 )
        return (unsigned int)v14;
      LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x193u, 0x811uLL, (int)v14, 0LL, 0LL);
      v34 = LiveDumpWithWdLogs;
      if ( LiveDumpWithWdLogs >= 0 )
        return (unsigned int)v14;
      v29 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v29 + 24) = v34;
LABEL_27:
      WdLogEvent5_WdAssertion(v29);
      return (unsigned int)v14;
    }
    v28 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v28 + 24) = -1073741801LL;
    WdLogEvent5_WdAssertion(v28);
  }
  else
  {
    _InterlockedAdd(&dword_1C004E5DC, 1u);
    v27 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v27 + 24) = 460LL;
    WdLogEvent5_WdLowResource(v27);
  }
  return 3221225495LL;
}
