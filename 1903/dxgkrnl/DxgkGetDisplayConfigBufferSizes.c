/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x1C013C7F0
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D49EC (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     DxgkGetPathsModality @ 0x1C00D6780 (DxgkGetPathsModality.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C013C954 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2, const GUID *a3)
{
  int Data1_low; // edi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rcx
  const GUID *v14; // r8
  int v16; // eax
  struct DXGGLOBAL *v17; // rax
  __int64 (__fastcall *v18)(struct DXGADAPTER *, void *); // rdx
  _QWORD *v19; // rax
  int PathsModality; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h]
  char v27; // [rsp+30h] [rbp-10h]
  GUID v28; // [rsp+60h] [rbp+20h] BYREF
  __int64 v29; // [rsp+70h] [rbp+30h] BYREF

  v25 = -1;
  v26 = 0LL;
  Data1_low = 1;
  v5 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 2174;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2174);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2174LL);
  v29 = (unsigned int)v5;
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  LODWORD(v11) = QDC_CACHE::GetCachedBufferSizes(*((QDC_CACHE **)Global + 139), (unsigned int)v5 & 0xFFFFFFEF, a2);
  if ( (int)v11 < 0 )
  {
    if ( (v5 & 0x40000000) == 0 )
    {
      v16 = v5 & 7;
      if ( v16 == 1 )
      {
        v17 = DXGGLOBAL::GetGlobal(v10, v9);
        v18 = CalcAllPathDisplayConfigBufferSizeCallback;
        goto LABEL_10;
      }
      if ( v16 == 2 )
      {
        v17 = DXGGLOBAL::GetGlobal(v10, v9);
        v18 = CalcActivePathDisplayConfigBufferSizeCallback;
LABEL_10:
        LODWORD(v11) = DXGGLOBAL::IterateAdaptersWithCallback((__int64)v17, (__int64)v18, (__int64)&v29, 4);
LABEL_11:
        if ( (int)v11 < 0 )
        {
LABEL_15:
          v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v10);
          v19[4] = (int)v11;
          v19[3] = v5;
          v19[5] = *a2;
          WdLogEvent5_WdEvent(v19);
          goto LABEL_4;
        }
        Data1_low = HIDWORD(v29);
LABEL_13:
        *a2 = Data1_low;
        if ( !Data1_low )
          LODWORD(v11) = -1073741637;
        goto LABEL_15;
      }
      if ( v16 != 4 )
      {
        LODWORD(v11) = -1073741811;
        v24 = WdLogNewEntry5_WdWarning(v10, v9, v12);
        *(_QWORD *)(v24 + 24) = v5;
        WdLogEvent5_WdWarning(v24);
        goto LABEL_11;
      }
      PathsModality = DxgkGetPathsModality(15LL, 0LL, &v28);
      v11 = PathsModality;
      if ( PathsModality != -1073741789 )
      {
        v23 = WdLogNewEntry5_WdError(v10, v21, v22);
        *(_QWORD *)(v23 + 24) = v11;
        WdLogEvent5_WdError(v23);
        if ( (int)v11 >= 0 )
          LODWORD(v11) = -1073741823;
        goto LABEL_4;
      }
      Data1_low = LOWORD(v28.Data1);
    }
    LODWORD(v11) = 0;
    HIDWORD(v29) = Data1_low;
    goto LABEL_13;
  }
LABEL_4:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v9);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v25);
  return (unsigned int)v11;
}
