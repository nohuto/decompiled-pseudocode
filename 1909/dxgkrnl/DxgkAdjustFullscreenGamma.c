/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C0201E10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001FE4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001C344 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C003B664 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00EDA60 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0230868 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C02C99D8 (MonitorNotifyDXGIGammaRampChange.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KTHREAD **Current; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGADAPTER ***v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  const GUID *v30; // r8
  DXGADAPTER **v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rax
  DXGDEVICE *v34; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v36; // xmm7_4
  __int64 v37; // rax
  float v38; // xmm6_4
  __int64 v39; // rax
  float *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // r8
  int v47; // eax
  int v48; // [rsp+20h] [rbp-128h]
  int v49; // [rsp+30h] [rbp-118h] BYREF
  __int64 v50; // [rsp+38h] [rbp-110h]
  char v51; // [rsp+40h] [rbp-108h]
  unsigned int v52[4]; // [rsp+48h] [rbp-100h]
  __int128 v53; // [rsp+58h] [rbp-F0h]
  struct DXGADAPTER *v54; // [rsp+68h] [rbp-E0h] BYREF
  DXGADAPTER *v55; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v56[18]; // [rsp+80h] [rbp-C8h] BYREF

  v3 = (_OWORD *)a1;
  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2127);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2127LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = 9808LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v11);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v49);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v52 = *v3;
  v53 = v3[1];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v55, v52[0], Current, &v54, 1);
  v18 = (DXGADAPTER ***)v54;
  if ( !v54 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = Current;
    *(_QWORD *)(v19 + 32) = v52[0];
    WdLogEvent5_WdError(v19);
    goto LABEL_15;
  }
  if ( !*((_QWORD *)v54 + 319) )
  {
    v20 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v20 + 24) = v18;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_15;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v56, v54, 0LL);
  v22 = COREADAPTERACCESS::AcquireExclusive(v56, (unsigned int)(v21 + 1));
  v26 = v22;
  if ( v22 >= 0 )
  {
    v31 = v18[319];
    v32 = v52[1];
    if ( v52[1] >= *((_DWORD *)v31 + 20) )
      goto LABEL_28;
    v34 = 0LL;
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v31, v52[1]) == 2
      || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v18[319], v32) == 3 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v18[319], v32);
    }
    else
    {
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(v18[319], v32) )
        goto LABEL_35;
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(v18[319], v32);
    }
    v34 = VidPnSourceOwner;
LABEL_35:
    if ( v34 )
    {
      LODWORD(v26) = 0;
      v36 = *(float *)&v52[2];
      if ( *(float *)&v52[2] > 4.0
        || *(float *)&v52[2] < 0.2
        || *(float *)&v52[3] > 4.0
        || *(float *)&v52[3] < 0.2
        || *(float *)&v53 > 4.0
        || *(float *)&v53 < 0.2 )
      {
        v37 = WdLogNewEntry5_WdWarning(v31, v23, v25);
        *(_QWORD *)(v37 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v37);
        LODWORD(v26) = -1073741811;
      }
      v38 = *((float *)&v53 + 1);
      if ( *((float *)&v53 + 1) > 0.6
        || *((float *)&v53 + 1) < -0.6
        || *((float *)&v53 + 2) > 0.6
        || *((float *)&v53 + 2) < -0.6
        || *((float *)&v53 + 3) > 0.6
        || *((float *)&v53 + 3) < -0.6 )
      {
        v39 = WdLogNewEntry5_WdWarning(v31, v23, v25);
        *(_QWORD *)(v39 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v39);
        LODWORD(v26) = -1073741811;
      }
      v40 = 0LL;
      if ( (int)v26 < 0 )
        goto LABEL_21;
      if ( v36 != 1.0
        || *(float *)&v52[3] != 1.0
        || *(float *)&v53 != 1.0
        || v38 != 0.0
        || *((float *)&v53 + 2) != 0.0
        || *((float *)&v53 + 3) != 0.0 )
      {
        v40 = (float *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
        if ( !v40 )
        {
          v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
          *(_QWORD *)(v44 + 24) = v34;
          LODWORD(v26) = -1073741801;
          *(_QWORD *)(v44 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v44);
          goto LABEL_21;
        }
        *v40 = v36;
        v40[1] = *(float *)&v52[3];
        *((_DWORD *)v40 + 2) = v53;
        v40[3] = v38;
        *((_QWORD *)v40 + 2) = *((_QWORD *)&v53 + 1);
      }
      DXGDEVICE::SetFullscreenGammaRampAdjustment(v34, v32, (struct DXGK_GAMMA_ADJUSTMENT *)v40);
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_EnableDisplayColorManagementApi__private_propertyCache,
        19574848LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E098,
        1,
        v48);
      v45 = 0LL;
      LODWORD(v54) = -1;
      while ( 1 )
      {
        v46 = v45++;
        if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
                    (DXGADAPTER *)v18,
                    (unsigned int)v32,
                    v46,
                    (unsigned int *const)&v54) < 0
          || (_DWORD)v54 == -1 )
        {
          goto LABEL_21;
        }
        v47 = MonitorNotifyDXGIGammaRampChange(v18);
        v26 = v47;
        if ( v47 < 0 )
          goto LABEL_20;
      }
    }
LABEL_28:
    v33 = WdLogNewEntry5_WdWarning(v31, v23, v25);
    *(_QWORD *)(v33 + 24) = v32;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
LABEL_15:
    if ( v55 )
      DXGADAPTER::ReleaseReferenceNoTracking(v55);
    goto LABEL_7;
  }
LABEL_20:
  v27 = WdLogNewEntry5_WdError(v24, v23, v25);
  *(_QWORD *)(v27 + 24) = v26;
  WdLogEvent5_WdError(v27);
LABEL_21:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
  if ( v55 )
    DXGADAPTER::ReleaseReferenceNoTracking(v55);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v28);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v49);
  return (unsigned int)v26;
}
