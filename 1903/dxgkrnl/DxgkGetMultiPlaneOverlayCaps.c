/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x1C013E6C0
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
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C013EA84 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, const GUID *a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rdx
  _OWORD *v6; // rax
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  int PairingAdapters; // esi
  __int64 v18; // r8
  ADAPTER_DISPLAY **v19; // rbx
  struct DXGADAPTER *v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r15
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347 Value; // r9d
  UINT v27; // r10d
  unsigned int v28; // r11d
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v29; // r8
  _DWORD *v30; // rdx
  _DWORD *p_Value; // rdx
  _DWORD *v32; // rdx
  _DWORD *v33; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v34; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  const GUID *v54; // r8
  int v55; // [rsp+40h] [rbp-128h] BYREF
  __int64 v56; // [rsp+48h] [rbp-120h]
  char v57; // [rsp+50h] [rbp-118h]
  unsigned int v58[4]; // [rsp+58h] [rbp-110h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v59[4]; // [rsp+68h] [rbp-100h] BYREF
  struct DXGADAPTER *v60; // [rsp+78h] [rbp-F0h] BYREF
  DXGADAPTER *v61; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v62; // [rsp+90h] [rbp-D8h] BYREF
  struct DXGADAPTER *v63; // [rsp+98h] [rbp-D0h] BYREF
  ULONG64 v64; // [rsp+A0h] [rbp-C8h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-C0h] BYREF
  _BYTE v66[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v64 = a1;
  v55 = -1;
  v56 = 0LL;
  v4 = 1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v57 = 1;
    v55 = 2145;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2145);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v55, 2145LL);
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v58 = *v6;
  *(_OWORD *)&v59[0].0 = v6[1];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v5);
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v61, v58[0], Current, &v60, 1);
    v14 = v60;
    if ( v60 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v60, v58[1], &v60, &v62, &v63, &v65, 0);
      if ( PairingAdapters < 0 )
      {
        v19 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v14, v58[1], &v60, &v62, 0LL, 0LL, 0);
      }
      else
      {
        v19 = (ADAPTER_DISPLAY **)v63;
      }
      if ( PairingAdapters < 0 )
      {
        v45 = WdLogNewEntry5_WdError(v16, v15, v18);
        *(_QWORD *)(v45 + 24) = v14;
        *(_QWORD *)(v45 + 32) = v58[1];
        WdLogEvent5_WdError(v45);
        if ( v61 )
          DXGADAPTER::ReleaseReferenceNoTracking(v61);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v46);
        if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v47, &EventProfilerExit, v48, v55);
        return (unsigned int)PairingAdapters;
      }
      else
      {
        if ( v19 && !v19[319] )
        {
          v49 = WdLogNewEntry5_WdAssertion(v16, v15);
          *(_QWORD *)(v49 + 24) = 10629LL;
          WdLogEvent5_WdAssertion(v49);
        }
        v20 = v60;
        if ( !v60 || !*((_QWORD *)v60 + 320) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v16, v15);
          *(_QWORD *)(v50 + 24) = 10631LL;
          WdLogEvent5_WdAssertion(v50);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v20, (struct DXGADAPTER *const)v19);
        DXGADAPTER::ReleaseReferenceNoTracking(v20);
        if ( v19 )
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v19);
        v21 = COREADAPTERACCESS::AcquireShared((__int64)v66, 0xFFFFFFFFLL, 0LL);
        v25 = v21;
        if ( v21 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
          v51[3] = v25;
          v51[4] = v14;
          v51[5] = v20;
          v51[6] = v19;
          WdLogEvent5_WdWarning(v51);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
          if ( v61 )
            DXGADAPTER::ReleaseReferenceNoTracking(v61);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v52);
          if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v53, &EventProfilerExit, v54, v55);
          return 0LL;
        }
        else
        {
          if ( v19 )
          {
            LODWORD(v25) = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                             v19[319],
                             v58[1],
                             &v58[2],
                             &v58[3],
                             (unsigned int *)v59,
                             &v59[1],
                             (float *)&v59[2],
                             (float *)&v59[3]);
            Value = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v59[1].Value;
            v27 = v59[0].Value;
            v28 = v58[3];
            v4 = v58[2];
          }
          else
          {
            v28 = 0;
            v27 = 0;
            Value = 0;
            v59[2].Value = 1065353216;
            v59[3].Value = 1065353216;
          }
          v29 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)v64;
          v30 = (_DWORD *)(v64 + 8);
          if ( v64 + 8 >= MmUserProbeAddress )
            v30 = (_DWORD *)MmUserProbeAddress;
          *v30 = v4;
          p_Value = &v29[3].Value;
          if ( (unsigned __int64)&v29[3] >= MmUserProbeAddress )
            p_Value = (_DWORD *)MmUserProbeAddress;
          *p_Value = v28;
          v32 = &v29[4].Value;
          if ( (unsigned __int64)&v29[4] >= MmUserProbeAddress )
            v32 = (_DWORD *)MmUserProbeAddress;
          *v32 = v27;
          v33 = &v29[5].Value;
          if ( (unsigned __int64)&v29[5] >= MmUserProbeAddress )
            v33 = (_DWORD *)MmUserProbeAddress;
          *v33 = Value;
          v34 = v29 + 6;
          if ( (unsigned __int64)&v29[6] >= MmUserProbeAddress )
            v34 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
          v34->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v59[2];
          v35 = v29 + 7;
          if ( (unsigned __int64)&v29[7] >= MmUserProbeAddress )
            v35 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
          v35->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v59[3];
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
          if ( v61 )
            DXGADAPTER::ReleaseReferenceNoTracking(v61);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v36);
          if ( v57 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v37, &EventProfilerExit, v38, v55);
          }
          return (unsigned int)v25;
        }
      }
    }
    v44 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v44 + 24) = v58[0];
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v44);
    if ( v61 )
      DXGADAPTER::ReleaseReferenceNoTracking(v61);
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v40);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v41);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v42, &EventProfilerExit, v43, v55);
  return 3221225485LL;
}
