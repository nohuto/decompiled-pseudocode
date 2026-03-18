/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0231C10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C022B720 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C022B830 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C022B8B8 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C022B93C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022CBE0 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  _OWORD *v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  const void *v50; // rdx
  char *v51; // rcx
  unsigned int i; // edx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v53; // r8
  __int64 v54; // rax
  char *v55; // rcx
  unsigned __int64 v56; // r8
  char *v57; // rax
  const void *v58; // rdx
  char *v59; // rcx
  unsigned int v60; // edx
  char *v61; // r10
  unsigned __int64 v62; // r8
  char *v63; // rcx
  unsigned int v64; // r8d
  char *v65; // r9
  char *v66; // r11
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v67; // rcx
  unsigned int j; // edx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  DXGDEVICE *v72; // r15
  __int64 v73; // rax
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r12
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  const GUID *v83; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v84; // r9
  _DWORD *v85; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v86; // rdx
  bool v87; // [rsp+40h] [rbp-3F8h]
  int v88; // [rsp+48h] [rbp-3F0h] BYREF
  __int64 v89; // [rsp+50h] [rbp-3E8h]
  char v90; // [rsp+58h] [rbp-3E0h]
  PVOID P; // [rsp+60h] [rbp-3D8h] BYREF
  _BYTE v92[24]; // [rsp+68h] [rbp-3D0h] BYREF
  int v93; // [rsp+80h] [rbp-3B8h]
  struct DXGDEVICE *v94; // [rsp+88h] [rbp-3B0h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v95; // [rsp+90h] [rbp-3A8h] BYREF
  PVOID v96; // [rsp+98h] [rbp-3A0h] BYREF
  _BYTE v97[24]; // [rsp+A0h] [rbp-398h] BYREF
  int v98; // [rsp+B8h] [rbp-380h]
  ULONG64 v99; // [rsp+C0h] [rbp-378h]
  unsigned int v100; // [rsp+C8h] [rbp-370h]
  unsigned int v101; // [rsp+CCh] [rbp-36Ch]
  int v102; // [rsp+D0h] [rbp-368h] BYREF
  char *v103; // [rsp+D8h] [rbp-360h]
  char *v104; // [rsp+E0h] [rbp-358h]
  char *v105; // [rsp+E8h] [rbp-350h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v106; // [rsp+F0h] [rbp-348h]
  _QWORD v107[2]; // [rsp+F8h] [rbp-340h] BYREF
  struct DXGPROCESS *v108; // [rsp+108h] [rbp-330h]
  struct DXGDEVICE *v109; // [rsp+110h] [rbp-328h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v110; // [rsp+118h] [rbp-320h]
  unsigned int v111[4]; // [rsp+120h] [rbp-318h]
  void *Src[2]; // [rsp+130h] [rbp-308h]
  void *v113[2]; // [rsp+140h] [rbp-2F8h]
  PVOID v114; // [rsp+150h] [rbp-2E8h] BYREF
  _BYTE v115[96]; // [rsp+158h] [rbp-2E0h] BYREF
  int v116; // [rsp+1B8h] [rbp-280h]
  PVOID v117; // [rsp+1C0h] [rbp-278h] BYREF
  _BYTE v118[132]; // [rsp+1C8h] [rbp-270h] BYREF
  int v119; // [rsp+24Ch] [rbp-1ECh]
  PVOID v120; // [rsp+250h] [rbp-1E8h] BYREF
  _BYTE v121[264]; // [rsp+258h] [rbp-1E0h] BYREF
  int v122; // [rsp+360h] [rbp-D8h]
  _BYTE v123[160]; // [rsp+370h] [rbp-C8h] BYREF

  v99 = a1;
  v88 = -1;
  v89 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v90 = 1;
    v88 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v90 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v88, 2093LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v108 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    v12 = v10;
LABEL_7:
    WdLogEvent5_WdError(v12);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88, v13);
    if ( v90 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v88);
    }
    return (unsigned int)v11;
  }
  v87 = *((_BYTE *)Current + 298) == 0;
  v17 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v111 = *v17;
  *(_OWORD *)Src = v17[1];
  *(_OWORD *)v113 = v17[2];
  v18 = v111[2];
  if ( !v111[2] )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v7, v9);
    v19[3] = 0LL;
LABEL_16:
    v22 = v19;
    v11 = -1073741811;
    v19[4] = -1073741811LL;
    v19[5] = PsGetCurrentProcess(v21, v20);
    v12 = (__int64)v22;
    goto LABEL_7;
  }
  v23 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v7, v9);
    v19[3] = v23;
    goto LABEL_16;
  }
  P = 0LL;
  v93 = 0;
  v27 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                             &P,
                                                             v111[2]);
  v110 = v27;
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    v11 = -1073741801;
    *(_QWORD *)(v28 + 24) = -1073741801LL;
    *(_QWORD *)(v28 + 32) = PsGetCurrentProcess(v30, v29);
    WdLogEvent5_WdWarning(v28);
LABEL_21:
    if ( P != v92 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v93 = 0;
    goto LABEL_8;
  }
  v114 = 0LL;
  v116 = 0;
  v104 = (char *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(&v114, v18);
  if ( !v104 )
  {
    v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    v11 = -1073741801;
    *(_QWORD *)(v34 + 24) = -1073741801LL;
    *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v36, v35);
    WdLogEvent5_WdWarning(v34);
LABEL_27:
    if ( v114 != v115 && v114 )
      ExFreePoolWithTag(v114, 0);
    v114 = 0LL;
    v116 = 0;
    goto LABEL_21;
  }
  v120 = 0LL;
  v122 = 0;
  v105 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(&v120, v18);
  if ( !v105 )
  {
    v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    v11 = -1073741801;
    *(_QWORD *)(v40 + 24) = -1073741801LL;
    *(_QWORD *)(v40 + 32) = PsGetCurrentProcess(v42, v41);
    WdLogEvent5_WdWarning(v40);
LABEL_33:
    if ( v120 != v121 && v120 )
      ExFreePoolWithTag(v120, 0);
    v120 = 0LL;
    v122 = 0;
    goto LABEL_27;
  }
  v96 = 0LL;
  v98 = 0;
  v117 = 0LL;
  v119 = 0;
  v43 = 0LL;
  v106 = 0LL;
  v103 = 0LL;
  if ( (_DWORD)v23 )
  {
    v43 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                               &v96,
                                                                               v23);
    v106 = v43;
    if ( !v43
      || (v103 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                           &v117,
                           v23)) == 0LL )
    {
      v11 = -1073741801;
      v47 = WdLogNewEntry5_WdWarning(v45, v44, v46);
      *(_QWORD *)(v47 + 24) = -1073741801LL;
      *(_QWORD *)(v47 + 32) = PsGetCurrentProcess(v49, v48);
      WdLogEvent5_WdWarning(v47);
LABEL_40:
      if ( v117 != v118 && v117 )
        ExFreePoolWithTag(v117, 0);
      v117 = 0LL;
      v119 = 0;
      if ( v96 != v97 && v96 )
        ExFreePoolWithTag(v96, 0);
      v96 = 0LL;
      v98 = 0;
      goto LABEL_33;
    }
  }
  v50 = Src[0];
  v51 = (char *)Src[0] + 8 * v18;
  if ( v51 < Src[0] || (unsigned __int64)v51 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v27, v50, 8 * v18);
  for ( i = 0; ; ++i )
  {
    v100 = i;
    if ( i >= (unsigned int)v18 )
      break;
    v53 = v27[i];
    if ( &v53[1] < v53 || (unsigned __int64)&v53[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v54 = 32LL * i;
    v55 = v104;
    *(_OWORD *)&v104[v54] = *(_OWORD *)&v53->LayerIndex;
    *(_OWORD *)&v55[v54 + 16] = *(_OWORD *)&v53->VidPnSourceId;
    v56 = *(_QWORD *)&v55[v54 + 24];
    if ( v56 + 88 < v56 || v56 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v57 = &v105[88 * i];
    *(_OWORD *)v57 = *(_OWORD *)v56;
    *((_OWORD *)v57 + 1) = *(_OWORD *)(v56 + 16);
    *((_OWORD *)v57 + 2) = *(_OWORD *)(v56 + 32);
    *((_OWORD *)v57 + 3) = *(_OWORD *)(v56 + 48);
    *((_OWORD *)v57 + 4) = *(_OWORD *)(v56 + 64);
    *((_QWORD *)v57 + 10) = *(_QWORD *)(v56 + 80);
  }
  if ( (_DWORD)v23 )
  {
    v58 = v113[0];
    v59 = (char *)v113[0] + 8 * v23;
    if ( v59 < v113[0] || (unsigned __int64)v59 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v43, v58, 8 * v23);
  }
  v60 = 0;
  v61 = v103;
  while ( 1 )
  {
    v101 = v60;
    if ( v60 >= (unsigned int)v23 )
      break;
    v62 = (unsigned __int64)v43[v60];
    if ( v62 + 44 < v62 || v62 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v63 = &v61[44 * v60];
    *(_OWORD *)v63 = *(_OWORD *)v62;
    *((_OWORD *)v63 + 1) = *(_OWORD *)(v62 + 16);
    *((_QWORD *)v63 + 4) = *(_QWORD *)(v62 + 32);
    *((_DWORD *)v63 + 10) = *(_DWORD *)(v62 + 40);
    ++v60;
  }
  v64 = 0;
  v65 = v104;
  v66 = v105;
  while ( v64 < (unsigned int)v18 )
  {
    v67 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v65[32 * v64];
    v27[v64] = v67;
    v67->pPlaneAttributes = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)&v66[88 * v64++];
  }
  for ( j = 0; j < (unsigned int)v23; ++j )
    v43[j] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)&v61[44 * j];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v94, v111[1], (struct _KTHREAD **)v108, &v109);
  v72 = v109;
  if ( !v109 )
  {
    v73 = WdLogNewEntry5_WdError(v70, v69, v71);
    *(_QWORD *)(v73 + 24) = v111[1];
    v11 = -1073741811;
    *(_QWORD *)(v73 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v73);
LABEL_79:
    if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
    goto LABEL_40;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v107, v109);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v123, (__int64)v72, 2, v74, 0);
  v75 = COREDEVICEACCESS::AcquireShared((__int64)v123, 0xFFFFFFFF, 0LL);
  v79 = v75;
  if ( v75 >= 0 )
  {
    v95.0 = 0;
    v11 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v72, v18, v110, v23, v106, v87, &v102, &v95);
    if ( v11 >= 0 )
    {
      v84 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v99;
      v85 = (_DWORD *)(v99 + 40);
      if ( v99 + 40 >= MmUserProbeAddress )
        v85 = (_DWORD *)MmUserProbeAddress;
      *v85 = v102;
      v86 = v84 + 11;
      if ( (unsigned __int64)&v84[11] >= MmUserProbeAddress )
        v86 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v86->0 = v95.0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
    if ( v107[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v107);
    goto LABEL_79;
  }
  v80 = WdLogNewEntry5_WdWarning(v77, v76, v78);
  *(_QWORD *)(v80 + 24) = v72;
  *(_QWORD *)(v80 + 32) = v79;
  WdLogEvent5_WdWarning(v80);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
  if ( v107[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v107);
  if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
  if ( v117 != v118 && v117 )
    ExFreePoolWithTag(v117, 0);
  v117 = 0LL;
  v119 = 0;
  if ( v96 != v97 && v96 )
    ExFreePoolWithTag(v96, 0);
  v96 = 0LL;
  v98 = 0;
  if ( v120 != v121 && v120 )
    ExFreePoolWithTag(v120, 0);
  v120 = 0LL;
  v122 = 0;
  if ( v114 != v115 && v114 )
    ExFreePoolWithTag(v114, 0);
  v114 = 0LL;
  v116 = 0;
  if ( P != v92 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v93 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88, v81);
  if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v82, &EventProfilerExit, v83, v88);
  return (unsigned int)v79;
}
