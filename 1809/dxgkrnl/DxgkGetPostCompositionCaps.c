/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x1C012E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C012E474 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v4; // rax
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // r14
  __int64 v11; // rcx
  int PairingAdapters; // esi
  ADAPTER_DISPLAY **v13; // rbx
  struct DXGADAPTER *v14; // rsi
  _DWORD *v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-A0h]
  char v29; // [rsp+40h] [rbp-98h]
  unsigned int v30[4]; // [rsp+48h] [rbp-90h] BYREF
  DXGADAPTER *v31; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v33[104]; // [rsp+70h] [rbp-68h] BYREF
  struct DXGADAPTER *v34; // [rsp+E8h] [rbp+10h] BYREF
  unsigned __int64 v35; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGADAPTER *v36; // [rsp+F8h] [rbp+20h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 2146;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2146);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2146);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v30 = *v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v31, v30[0], Current, &v34, 1);
    v10 = v34;
    if ( v34 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v34, v30[1], &v34, &v35, &v36, &v32);
      if ( PairingAdapters < 0 )
      {
        v13 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v10, v30[1], &v34, &v35, 0LL, 0LL);
      }
      else
      {
        v13 = (ADAPTER_DISPLAY **)v36;
      }
      if ( PairingAdapters < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v24 + 24) = v10;
        *(_QWORD *)(v24 + 32) = v30[1];
        WdLogEvent5_WdError(v24);
      }
      else
      {
        if ( v13 && !v13[315] )
        {
          v25 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v25 + 24) = 9932LL;
          WdLogEvent5_WdAssertion(v25);
        }
        v14 = v34;
        if ( !v34 || !*((_QWORD *)v34 + 316) )
        {
          v26 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v26 + 24) = 9934LL;
          WdLogEvent5_WdAssertion(v26);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v14, (struct DXGADAPTER *const)v13);
        DXGADAPTER::ReleaseReference(v14);
        if ( v13 )
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33);
        if ( PairingAdapters >= 0 )
        {
          if ( v13 )
          {
            PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                                v13[315],
                                v30[1],
                                (float *)&v30[2],
                                (float *)&v30[3]);
          }
          else
          {
            v30[2] = 1065353216;
            v30[3] = 1065353216;
          }
          v15 = (_DWORD *)(a1 + 8);
          if ( a1 + 8 >= MmUserProbeAddress )
            v15 = (_DWORD *)MmUserProbeAddress;
          *v15 = v30[2];
          v16 = (_DWORD *)(a1 + 12);
          if ( a1 + 12 >= MmUserProbeAddress )
            v16 = (_DWORD *)MmUserProbeAddress;
          *v16 = v30[3];
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
      }
      if ( v31 )
        DXGADAPTER::ReleaseReference(v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v17, &EventProfilerExit, v18, v27);
      }
      return (unsigned int)PairingAdapters;
    }
    v21 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v21 + 24) = v30[0];
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    if ( v31 )
      DXGADAPTER::ReleaseReference(v31);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v27);
  return 3221225485LL;
}
