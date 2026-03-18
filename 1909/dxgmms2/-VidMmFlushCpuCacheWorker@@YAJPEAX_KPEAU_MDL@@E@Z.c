/*
 * XREFs of ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C00B1878
 * Callers:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C00ABD14 (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00180B4 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00180D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 */

__int64 __fastcall VidMmFlushCpuCacheWorker(__int64 BaseAddress, unsigned __int64 Length, const GUID *a3)
{
  char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  const GUID *v9; // r8
  ULONG v11; // ebx
  __int64 v12; // rcx
  const GUID *v13; // r8
  int v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+30h] [rbp-28h]

  v4 = (char *)BaseAddress;
  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C004E010 & 2) != 0 )
  {
    v16 = 1;
    v14 = 8008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(BaseAddress, &EventProfilerEnter, a3, 8008);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  if ( v4 )
  {
    if ( (Length & 0xFFFFFFFF80000000uLL) != 0 )
    {
      KeInvalidateAllCaches();
    }
    else
    {
      while ( Length )
      {
        v11 = -1;
        if ( Length < 0xFFFFFFFF )
          v11 = Length;
        KeInvalidateRangeAllCaches(v4, v11);
        Length -= v11;
        v4 += v11;
      }
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v14);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 17936LL;
    WdLogEvent5_WdAssertion(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v8, &EventProfilerExit, v9, v14);
    }
    return 3221225485LL;
  }
}
