/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x1C013E340
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C050 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C013E640 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  _OWORD *v5; // rax
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  int PairingAdapters; // esi
  __int64 v17; // r8
  ADAPTER_DISPLAY **v18; // rbx
  struct DXGADAPTER *v19; // rsi
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+40h] [rbp-118h] BYREF
  __int64 v35; // [rsp+48h] [rbp-110h]
  char v36; // [rsp+50h] [rbp-108h]
  unsigned int v37[4]; // [rsp+58h] [rbp-100h] BYREF
  struct DXGADAPTER *v38; // [rsp+68h] [rbp-F0h] BYREF
  DXGADAPTER *v39; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-D8h] BYREF
  struct DXGADAPTER *v41; // [rsp+88h] [rbp-D0h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v43[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 2146;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2146);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2146LL);
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v37 = *v5;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v39, v37[0], Current, &v38, 1);
    v13 = v38;
    if ( v38 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v38, v37[1], &v38, &v40, &v41, &v42, 0);
      if ( PairingAdapters < 0 )
      {
        v18 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v13, v37[1], &v38, &v40, 0LL, 0LL, 0);
      }
      else
      {
        v18 = (ADAPTER_DISPLAY **)v41;
      }
      if ( PairingAdapters < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v15, v14, v17);
        *(_QWORD *)(v31 + 24) = v13;
        *(_QWORD *)(v31 + 32) = v37[1];
        WdLogEvent5_WdError(v31);
      }
      else
      {
        if ( v18 && !v18[319] )
        {
          v32 = WdLogNewEntry5_WdAssertion(v15, v14);
          *(_QWORD *)(v32 + 24) = 10782LL;
          WdLogEvent5_WdAssertion(v32);
        }
        v19 = v38;
        if ( !v38 || !*((_QWORD *)v38 + 320) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v15, v14);
          *(_QWORD *)(v33 + 24) = 10784LL;
          WdLogEvent5_WdAssertion(v33);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v19, (struct DXGADAPTER *const)v18);
        DXGADAPTER::ReleaseReferenceNoTracking(v19);
        if ( v18 )
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v18);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((__int64)v43, 0xFFFFFFFFLL, 0LL);
        if ( PairingAdapters >= 0 )
        {
          if ( v18 )
          {
            PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                                v18[319],
                                v37[1],
                                (float *)&v37[2],
                                (float *)&v37[3]);
          }
          else
          {
            v37[2] = 1065353216;
            v37[3] = 1065353216;
          }
          v20 = (_DWORD *)(a1 + 8);
          if ( a1 + 8 >= MmUserProbeAddress )
            v20 = (_DWORD *)MmUserProbeAddress;
          *v20 = v37[2];
          v21 = (_DWORD *)(a1 + 12);
          if ( a1 + 12 >= MmUserProbeAddress )
            v21 = (_DWORD *)MmUserProbeAddress;
          *v21 = v37[3];
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
      }
      if ( v39 )
        DXGADAPTER::ReleaseReferenceNoTracking(v39);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v22);
      if ( v36 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v23, &EventProfilerExit, v24, v34);
      }
      return (unsigned int)PairingAdapters;
    }
    v30 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v30 + 24) = v37[0];
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    if ( v39 )
      DXGADAPTER::ReleaseReferenceNoTracking(v39);
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v27);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v34);
  return 3221225485LL;
}
