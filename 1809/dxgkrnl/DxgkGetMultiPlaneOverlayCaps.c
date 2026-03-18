/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x1C012E4F0
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
 *     _DxgkGetMultiPlaneOverlayCaps_::_2_::CLEANUP_BUGCHECK_ON_FAILURE::_CLEANUP_BUGCHECK_ON_FAILURE @ 0x1C012E8A4 (_DxgkGetMultiPlaneOverlayCaps_--_2_--CLEANUP_BUGCHECK_ON_FAILURE--_CLEANUP_BUGCHECK_ON_FAILURE.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C012E8D0 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, const GUID *a3)
{
  ADAPTER_DISPLAY **v4; // rdi
  unsigned int v5; // r15d
  _OWORD *v6; // rax
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // r14
  __int64 v13; // rcx
  int PairingAdapters; // ebx
  struct DXGADAPTER *v15; // r14
  __int64 v16; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347 Value; // r8d
  UINT v18; // r9d
  unsigned int v19; // r10d
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  _DWORD *v22; // rdx
  _DWORD *v23; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v24; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v25; // rdx
  DXGADAPTER *v26; // rcx
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h]
  char v38; // [rsp+50h] [rbp-B8h]
  unsigned int v39[4]; // [rsp+58h] [rbp-B0h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v40[4]; // [rsp+68h] [rbp-A0h] BYREF
  DXGADAPTER *v41; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v43[120]; // [rsp+90h] [rbp-78h] BYREF
  struct DXGADAPTER *v44; // [rsp+118h] [rbp+10h] BYREF
  struct DXGADAPTER *v45; // [rsp+120h] [rbp+18h] BYREF
  struct DXGADAPTER *v46; // [rsp+128h] [rbp+20h] BYREF

  v36 = -1;
  v4 = 0LL;
  v37 = 0LL;
  v5 = 1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2145;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2145);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2145);
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v39 = *v6;
  *(_OWORD *)&v40[0].0 = v6[1];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v8);
    PairingAdapters = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    LODWORD(v44) = -1073741811;
    goto LABEL_36;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v41, v39[0], Current, &v44, 1);
  v12 = v44;
  if ( !v44 )
  {
    v31 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v31 + 24) = v39[0];
    PairingAdapters = -1073741811;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    LODWORD(v44) = -1073741811;
    v26 = v41;
    if ( !v41 )
      goto LABEL_36;
    goto LABEL_35;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v44, v39[1], &v45, (unsigned __int64 *)&v44, &v46, &v42);
  LODWORD(v44) = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(v12, v39[1], &v45, (unsigned __int64 *)&v44, 0LL, 0LL);
    LODWORD(v44) = PairingAdapters;
  }
  else
  {
    v4 = (ADAPTER_DISPLAY **)v46;
  }
  if ( PairingAdapters < 0 )
  {
    v32 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v32 + 24) = v12;
    *(_QWORD *)(v32 + 32) = v39[1];
    WdLogEvent5_WdError(v32);
  }
  else
  {
    if ( v4 && !v4[315] )
    {
      v33 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v33 + 24) = 9783LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v15 = v45;
    if ( !v45 || !*((_QWORD *)v45 + 316) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v34 + 24) = 9785LL;
      WdLogEvent5_WdAssertion(v34);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v15, (struct DXGADAPTER *const)v4);
    DXGADAPTER::ReleaseReference(v15);
    if ( v4 )
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43);
    LODWORD(v44) = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v35 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v35 + 24) = v15;
      *(_QWORD *)(v35 + 32) = v4;
      WdLogEvent5_WdError(v35);
    }
    else
    {
      if ( v4 )
      {
        PairingAdapters = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                            v4[315],
                            v39[1],
                            &v39[2],
                            &v39[3],
                            (unsigned int *)v40,
                            &v40[1],
                            (float *)&v40[2],
                            (float *)&v40[3]);
        LODWORD(v44) = PairingAdapters;
        Value = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v40[1].Value;
        v18 = v40[0].Value;
        v19 = v39[3];
        v5 = v39[2];
      }
      else
      {
        v19 = 0;
        v18 = 0;
        Value = 0;
        v40[2].Value = 1065353216;
        v40[3].Value = 1065353216;
      }
      v20 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v5;
      v21 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *v21 = v19;
      v22 = (_DWORD *)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      *v22 = v18;
      v23 = (_DWORD *)(a1 + 20);
      if ( a1 + 20 >= MmUserProbeAddress )
        v23 = (_DWORD *)MmUserProbeAddress;
      *v23 = Value;
      v24 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v24 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
      v24->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v40[2];
      v25 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)(a1 + 28);
      if ( a1 + 28 >= MmUserProbeAddress )
        v25 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
      v25->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v40[3];
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
  }
  v26 = v41;
  if ( v41 )
LABEL_35:
    DXGADAPTER::ReleaseReference(v26);
LABEL_36:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v36);
  DxgkGetMultiPlaneOverlayCaps_::_2_::CLEANUP_BUGCHECK_ON_FAILURE::_CLEANUP_BUGCHECK_ON_FAILURE();
  return (unsigned int)PairingAdapters;
}
