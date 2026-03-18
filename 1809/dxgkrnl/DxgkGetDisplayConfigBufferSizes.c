/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x1C00C6FF0
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C7320 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C00C7154 (-GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z.c)
 *     DxgkGetPathsModality @ 0x1C00C8E30 (DxgkGetPathsModality.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2, const GUID *a3)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rcx
  const GUID *v13; // r8
  int v15; // eax
  struct DXGGLOBAL *v16; // rax
  __int64 (__fastcall *v17)(struct DXGADAPTER *, void *); // rdx
  _QWORD *v18; // rax
  int PathsModality; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+28h] [rbp-18h]
  char v24; // [rsp+30h] [rbp-10h]
  unsigned __int16 v25; // [rsp+60h] [rbp+20h] BYREF
  __int64 v26; // [rsp+70h] [rbp+30h] BYREF

  v22 = -1;
  v23 = 0LL;
  v4 = 1;
  v5 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2174;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2174);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2174);
  v26 = (unsigned int)v5;
  Global = DXGGLOBAL::GetGlobal(v6);
  LODWORD(v10) = QDC_CACHE::GetCahcedBufferSizes(*((QDC_CACHE **)Global + 143), (unsigned int)v5 & 0xFFFFFFEF, a2);
  if ( (int)v10 < 0 )
  {
    if ( (v5 & 0x40000000) == 0 )
    {
      v15 = v5 & 7;
      if ( v15 == 1 )
      {
        v16 = DXGGLOBAL::GetGlobal(v9);
        v17 = CalcAllPathDisplayConfigBufferSizeCallback;
        goto LABEL_10;
      }
      if ( v15 == 2 )
      {
        v16 = DXGGLOBAL::GetGlobal(v9);
        v17 = CalcActivePathDisplayConfigBufferSizeCallback;
LABEL_10:
        LODWORD(v10) = DXGGLOBAL::IterateAdaptersWithCallback(v16, v17, &v26, 4LL);
LABEL_11:
        if ( (int)v10 < 0 )
        {
LABEL_15:
          v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v8);
          v18[4] = (int)v10;
          v18[3] = v5;
          v18[5] = *a2;
          WdLogEvent5_WdEvent(v18);
          goto LABEL_4;
        }
        v4 = HIDWORD(v26);
LABEL_13:
        *a2 = v4;
        if ( !v4 )
          LODWORD(v10) = -1073741637;
        goto LABEL_15;
      }
      if ( v15 != 4 )
      {
        LODWORD(v10) = -1073741811;
        v21 = WdLogNewEntry5_WdWarning(v9, v8, v11);
        *(_QWORD *)(v21 + 24) = v5;
        WdLogEvent5_WdWarning(v21);
        goto LABEL_11;
      }
      PathsModality = DxgkGetPathsModality(15LL, 0LL, &v25);
      v10 = PathsModality;
      if ( PathsModality != -1073741789 )
      {
        v20 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v20 + 24) = v10;
        WdLogEvent5_WdError(v20);
        if ( (int)v10 >= 0 )
          LODWORD(v10) = -1073741823;
        goto LABEL_4;
      }
      v4 = v25;
    }
    LODWORD(v10) = 0;
    HIDWORD(v26) = v4;
    goto LABEL_13;
  }
LABEL_4:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v22);
  return (unsigned int)v10;
}
