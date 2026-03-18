/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C01D4510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0005BF4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001B880 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0034BDC (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C01FFA10 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r14
  DXGDEVICE *v25; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  float v30; // xmm7_4
  __int64 v31; // rax
  float v32; // xmm6_4
  __int64 v33; // rax
  float *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-C0h]
  char v41; // [rsp+40h] [rbp-B8h]
  unsigned int v42[4]; // [rsp+48h] [rbp-B0h]
  __int128 v43; // [rsp+58h] [rbp-A0h]
  DXGADAPTER *v44; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v45[14]; // [rsp+80h] [rbp-78h] BYREF
  struct DXGADAPTER *v46; // [rsp+108h] [rbp+10h] BYREF

  v3 = (_OWORD *)a1;
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2127);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 9085LL;
    WdLogEvent5_WdError(v6);
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v28, &EventProfilerExit, v29, v39);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v42 = *v3;
  v43 = v3[1];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v44, v42[0], Current, &v46, 1);
  v10 = v46;
  if ( !v46 )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = Current;
    *(_QWORD *)(v11 + 32) = v42[0];
    WdLogEvent5_WdError(v11);
    goto LABEL_30;
  }
  if ( !*((_QWORD *)v46 + 315) )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v12 + 24) = v10;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    goto LABEL_30;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v46, 0LL);
  v14 = COREADAPTERACCESS::AcquireExclusive(v45, (unsigned int)(v13 + 1));
  v18 = v14;
  if ( v14 >= 0 )
  {
    v23 = *((_QWORD *)v10 + 315);
    v24 = v42[1];
    if ( v42[1] >= *(_DWORD *)(v23 + 80) )
      goto LABEL_29;
    v25 = 0LL;
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v23, v42[1]) == 2
      || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v10 + 315), v24) == 3 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((DXGADAPTER ***)v10 + 315), v24);
    }
    else
    {
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v10 + 315), v24) )
        goto LABEL_28;
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v10 + 315), v24);
    }
    v25 = VidPnSourceOwner;
LABEL_28:
    if ( v25 )
    {
      LODWORD(v18) = 0;
      v30 = *(float *)&v42[2];
      if ( *(float *)&v42[2] > 4.0
        || *(float *)&v42[2] < 0.2
        || *(float *)&v42[3] > 4.0
        || *(float *)&v42[3] < 0.2
        || *(float *)&v43 > 4.0
        || *(float *)&v43 < 0.2 )
      {
        v31 = WdLogNewEntry5_WdWarning(v23, v15, v17);
        *(_QWORD *)(v31 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v31);
        LODWORD(v18) = -1073741811;
      }
      v32 = *((float *)&v43 + 1);
      if ( *((float *)&v43 + 1) > 0.6
        || *((float *)&v43 + 1) < -0.6
        || *((float *)&v43 + 2) > 0.6
        || *((float *)&v43 + 2) < -0.6
        || *((float *)&v43 + 3) > 0.6
        || *((float *)&v43 + 3) < -0.6 )
      {
        v33 = WdLogNewEntry5_WdWarning(v23, v15, v17);
        *(_QWORD *)(v33 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v33);
        LODWORD(v18) = -1073741811;
      }
      v34 = 0LL;
      if ( (int)v18 < 0 )
        goto LABEL_15;
      if ( v30 != 1.0
        || *(float *)&v42[3] != 1.0
        || *(float *)&v43 != 1.0
        || v32 != 0.0
        || *((float *)&v43 + 2) != 0.0
        || *((float *)&v43 + 3) != 0.0 )
      {
        v34 = (float *)operator new(0x18uLL, 0x4B677844u, PagedPool);
        if ( !v34 )
        {
          v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
          *(_QWORD *)(v38 + 24) = v25;
          LODWORD(v18) = -1073741801;
          *(_QWORD *)(v38 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v38);
          goto LABEL_15;
        }
        *v34 = v30;
        v34[1] = *(float *)&v42[3];
        *((_DWORD *)v34 + 2) = v43;
        v34[3] = v32;
        *((_QWORD *)v34 + 2) = *((_QWORD *)&v43 + 1);
      }
      DXGDEVICE::SetFullscreenGammaRampAdjustment(v25, v24, (struct DXGK_GAMMA_ADJUSTMENT *)v34);
      LODWORD(v18) = ADAPTER_DISPLAY::UpdateGammaRamp(*((DXGADAPTER ***)v10 + 315), v24);
      goto LABEL_15;
    }
LABEL_29:
    v27 = WdLogNewEntry5_WdWarning(v23, v15, v17);
    *(_QWORD *)(v27 + 24) = v24;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
LABEL_30:
    if ( v44 )
      DXGADAPTER::ReleaseReference(v44);
    goto LABEL_32;
  }
  v19 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v19 + 24) = v18;
  WdLogEvent5_WdError(v19);
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
  if ( v44 )
    DXGADAPTER::ReleaseReference(v44);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v39);
  return (unsigned int)v18;
}
