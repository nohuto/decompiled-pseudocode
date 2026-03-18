/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0201390
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C01FB450 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C01FB560 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C01FB5E8 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C01FB66C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC924 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, const GUID *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  const GUID *v42; // r8
  const void *v44; // rdx
  char *v45; // rcx
  unsigned int i; // edx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v47; // r8
  __int64 v48; // rax
  char *v49; // rcx
  unsigned __int64 v50; // r8
  char *v51; // rax
  const void *v52; // rdx
  char *v53; // rcx
  unsigned int v54; // edx
  char *v55; // r10
  unsigned __int64 v56; // r8
  char *v57; // rcx
  unsigned int v58; // r8d
  char *v59; // r9
  char *v60; // r11
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v61; // rcx
  unsigned int j; // edx
  __int64 v63; // rcx
  DXGDEVICE *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rcx
  const GUID *v67; // r8
  __int64 v68; // r9
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // rcx
  const GUID *v76; // r8
  int v77; // ebx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v78; // r9
  _DWORD *v79; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v80; // rdx
  __int64 v81; // rcx
  const GUID *v82; // r8
  bool v83; // [rsp+40h] [rbp-3B8h]
  int v84; // [rsp+48h] [rbp-3B0h] BYREF
  __int64 v85; // [rsp+50h] [rbp-3A8h]
  char v86; // [rsp+58h] [rbp-3A0h]
  PVOID v87; // [rsp+60h] [rbp-398h] BYREF
  _BYTE v88[24]; // [rsp+68h] [rbp-390h] BYREF
  int v89; // [rsp+80h] [rbp-378h]
  struct DXGDEVICE *v90; // [rsp+88h] [rbp-370h] BYREF
  PVOID v91; // [rsp+90h] [rbp-368h] BYREF
  _BYTE v92[24]; // [rsp+98h] [rbp-360h] BYREF
  int v93; // [rsp+B0h] [rbp-348h]
  ULONG64 v94; // [rsp+B8h] [rbp-340h]
  unsigned int v95; // [rsp+C0h] [rbp-338h]
  unsigned int v96; // [rsp+C4h] [rbp-334h]
  int v97; // [rsp+C8h] [rbp-330h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v98; // [rsp+CCh] [rbp-32Ch] BYREF
  char *v99; // [rsp+D0h] [rbp-328h]
  char *v100; // [rsp+D8h] [rbp-320h]
  char *v101; // [rsp+E0h] [rbp-318h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v102; // [rsp+E8h] [rbp-310h]
  _QWORD v103[2]; // [rsp+F0h] [rbp-308h] BYREF
  struct DXGPROCESS *v104; // [rsp+100h] [rbp-2F8h]
  struct DXGDEVICE *v105; // [rsp+108h] [rbp-2F0h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v106; // [rsp+110h] [rbp-2E8h]
  unsigned int v107[4]; // [rsp+118h] [rbp-2E0h]
  void *Src[2]; // [rsp+128h] [rbp-2D0h]
  void *v109[2]; // [rsp+138h] [rbp-2C0h]
  _BYTE v110[96]; // [rsp+150h] [rbp-2A8h] BYREF
  PVOID v111; // [rsp+1B0h] [rbp-248h] BYREF
  _BYTE v112[96]; // [rsp+1B8h] [rbp-240h] BYREF
  int v113; // [rsp+218h] [rbp-1E0h]
  PVOID P; // [rsp+220h] [rbp-1D8h] BYREF
  _BYTE v115[132]; // [rsp+228h] [rbp-1D0h] BYREF
  int v116; // [rsp+2ACh] [rbp-14Ch]
  PVOID v117; // [rsp+2B0h] [rbp-148h] BYREF
  _BYTE v118[264]; // [rsp+2B8h] [rbp-140h] BYREF
  int v119; // [rsp+3C0h] [rbp-38h]

  v94 = a1;
  v84 = -1;
  v85 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v86 = 1;
    v84 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v86 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v84, 2093);
  Current = DXGPROCESS::GetCurrent();
  v104 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    v7 = v6;
LABEL_7:
    WdLogEvent5_WdError(v7);
LABEL_95:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
    if ( v86 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v66, &EventProfilerExit, v67, v84);
    }
    return 3221225485LL;
  }
  v83 = *((_BYTE *)Current + 322) == 0;
  v8 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v107 = *v8;
  *(_OWORD *)Src = v8[1];
  *(_OWORD *)v109 = v8[2];
  v9 = v107[2];
  if ( !v107[2] )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v10[3] = 0LL;
LABEL_12:
    v13 = v10;
    v10[4] = -1073741811LL;
    v10[5] = PsGetCurrentProcess(v12, v11);
    v7 = (__int64)v13;
    goto LABEL_7;
  }
  v14 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v10[3] = v14;
    goto LABEL_12;
  }
  v87 = 0LL;
  v89 = 0;
  v18 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                             &v87,
                                                             v107[2]);
  v106 = v18;
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = -1073741801LL;
    *(_QWORD *)(v19 + 32) = PsGetCurrentProcess(v21, v20);
    WdLogEvent5_WdWarning(v19);
LABEL_39:
    if ( v87 != v88 && v87 )
      ExFreePoolWithTag(v87, 0);
    v87 = 0LL;
    v89 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
    if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v41, &EventProfilerExit, v42, v84);
    return 3221225495LL;
  }
  v111 = 0LL;
  v113 = 0;
  v100 = (char *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(&v111, v9);
  if ( !v100 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    *(_QWORD *)(v25 + 32) = PsGetCurrentProcess(v27, v26);
    WdLogEvent5_WdWarning(v25);
LABEL_35:
    if ( v111 != v112 && v111 )
      ExFreePoolWithTag(v111, 0);
    v113 = 0;
    v111 = 0LL;
    goto LABEL_39;
  }
  v117 = 0LL;
  v119 = 0;
  v101 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(&v117, v9);
  if ( !v101 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    *(_QWORD *)(v31 + 32) = PsGetCurrentProcess(v33, v32);
    WdLogEvent5_WdWarning(v31);
LABEL_31:
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    goto LABEL_35;
  }
  v91 = 0LL;
  v93 = 0;
  P = 0LL;
  v116 = 0;
  v34 = 0LL;
  v102 = 0LL;
  v99 = 0LL;
  if ( (_DWORD)v14 )
  {
    v34 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                               &v91,
                                                                               v14);
    v102 = v34;
    if ( !v34
      || (v99 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                          &P,
                          v14)) == 0LL )
    {
      v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v38 + 24) = -1073741801LL;
      *(_QWORD *)(v38 + 32) = PsGetCurrentProcess(v40, v39);
      WdLogEvent5_WdWarning(v38);
      if ( P != v115 && P )
        ExFreePoolWithTag(P, 0);
      v116 = 0;
      P = 0LL;
      if ( v91 != v92 && v91 )
        ExFreePoolWithTag(v91, 0);
      v93 = 0;
      v91 = 0LL;
      goto LABEL_31;
    }
  }
  v44 = Src[0];
  v45 = (char *)Src[0] + 8 * v9;
  if ( v45 < Src[0] || (unsigned __int64)v45 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v44, 8 * v9);
  for ( i = 0; ; ++i )
  {
    v95 = i;
    if ( i >= (unsigned int)v9 )
      break;
    v47 = v18[i];
    if ( &v47[1] < v47 || (unsigned __int64)&v47[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v48 = 32LL * i;
    v49 = v100;
    *(_OWORD *)&v100[v48] = *(_OWORD *)&v47->LayerIndex;
    *(_OWORD *)&v49[v48 + 16] = *(_OWORD *)&v47->VidPnSourceId;
    v50 = *(_QWORD *)&v49[v48 + 24];
    if ( v50 + 88 < v50 || v50 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v51 = &v101[88 * i];
    *(_OWORD *)v51 = *(_OWORD *)v50;
    *((_OWORD *)v51 + 1) = *(_OWORD *)(v50 + 16);
    *((_OWORD *)v51 + 2) = *(_OWORD *)(v50 + 32);
    *((_OWORD *)v51 + 3) = *(_OWORD *)(v50 + 48);
    *((_OWORD *)v51 + 4) = *(_OWORD *)(v50 + 64);
    *((_QWORD *)v51 + 10) = *(_QWORD *)(v50 + 80);
  }
  if ( (_DWORD)v14 )
  {
    v52 = v109[0];
    v53 = (char *)v109[0] + 8 * v14;
    if ( v53 < v109[0] || (unsigned __int64)v53 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v34, v52, 8 * v14);
  }
  v54 = 0;
  v55 = v99;
  while ( 1 )
  {
    v96 = v54;
    if ( v54 >= (unsigned int)v14 )
      break;
    v56 = (unsigned __int64)v34[v54];
    if ( v56 + 44 < v56 || v56 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v57 = &v55[44 * v54];
    *(_OWORD *)v57 = *(_OWORD *)v56;
    *((_OWORD *)v57 + 1) = *(_OWORD *)(v56 + 16);
    *((_QWORD *)v57 + 4) = *(_QWORD *)(v56 + 32);
    *((_DWORD *)v57 + 10) = *(_DWORD *)(v56 + 40);
    ++v54;
  }
  v58 = 0;
  v59 = v100;
  v60 = v101;
  while ( v58 < (unsigned int)v9 )
  {
    v61 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v59[32 * v58];
    v18[v58] = v61;
    v61->pPlaneAttributes = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)&v60[88 * v58++];
  }
  for ( j = 0; j < (unsigned int)v14; ++j )
    v34[j] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)&v55[44 * j];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v90, v107[1], (struct _KTHREAD **)v104, &v105);
  v64 = v105;
  if ( !v105 )
  {
    v65 = WdLogNewEntry5_WdError(v63);
    *(_QWORD *)(v65 + 24) = v107[1];
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v65);
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    if ( P != v115 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v116 = 0;
    if ( v91 != v92 && v91 )
      ExFreePoolWithTag(v91, 0);
    v91 = 0LL;
    v93 = 0;
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    if ( v111 != v112 && v111 )
      ExFreePoolWithTag(v111, 0);
    v111 = 0LL;
    v113 = 0;
    if ( v87 != v88 && v87 )
      ExFreePoolWithTag(v87, 0);
    v87 = 0LL;
    v89 = 0;
    goto LABEL_95;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v103, v105);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, (__int64)v64, 2, v68, 0);
  v69 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v110);
  v73 = v69;
  if ( v69 >= 0 )
  {
    v77 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v64, v9, v106, v14, v102, v83, &v97, &v98);
    if ( v77 >= 0 )
    {
      v78 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v94;
      v79 = (_DWORD *)(v94 + 40);
      if ( v94 + 40 >= MmUserProbeAddress )
        v79 = (_DWORD *)MmUserProbeAddress;
      *v79 = v97;
      v80 = v78 + 11;
      if ( (unsigned __int64)&v78[11] >= MmUserProbeAddress )
        v80 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v80->0 = v98.0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
    if ( v103[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v103);
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    if ( P != v115 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v116 = 0;
    if ( v91 != v92 && v91 )
      ExFreePoolWithTag(v91, 0);
    v91 = 0LL;
    v93 = 0;
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    if ( v111 != v112 && v111 )
      ExFreePoolWithTag(v111, 0);
    v111 = 0LL;
    v113 = 0;
    if ( v87 != v88 && v87 )
      ExFreePoolWithTag(v87, 0);
    v87 = 0LL;
    v89 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
    if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v81, &EventProfilerExit, v82, v84);
    return (unsigned int)v77;
  }
  else
  {
    v74 = WdLogNewEntry5_WdWarning(v71, v70, v72);
    *(_QWORD *)(v74 + 24) = v64;
    *(_QWORD *)(v74 + 32) = v73;
    WdLogEvent5_WdWarning(v74);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
    if ( v103[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v103);
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    if ( P != v115 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v116 = 0;
    if ( v91 != v92 && v91 )
      ExFreePoolWithTag(v91, 0);
    v91 = 0LL;
    v93 = 0;
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    if ( v111 != v112 && v111 )
      ExFreePoolWithTag(v111, 0);
    v111 = 0LL;
    v113 = 0;
    if ( v87 != v88 && v87 )
      ExFreePoolWithTag(v87, 0);
    v87 = 0LL;
    v89 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
    if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v75, &EventProfilerExit, v76, v84);
    return (unsigned int)v73;
  }
}
