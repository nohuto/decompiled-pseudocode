/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E032C
 * Callers:
 *     DxgkCreateDevice @ 0x1C00E0310 (DxgkCreateDevice.c)
 *     DxgkCreateDeviceInternal @ 0x1C0133468 (DxgkCreateDeviceInternal.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021CC80 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00041EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0042958 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0CB8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0104860 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        const GUID *a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r14
  struct DXGADAPTER *v11; // rdx
  struct _D3DKMT_CREATEDEVICE *v12; // rax
  struct DXGADAPTER **v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v17; // r12
  struct DXGADAPTER *i; // r13
  struct DXGADAPTER **v19; // rbx
  struct DXGADAPTER **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct DXGADAPTER *v23; // rax
  struct DXGADAPTER *v24; // rcx
  __int64 v25; // r13
  struct DXGADAPTER *v26; // rdx
  struct DXGADAPTER *v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbx
  struct DXGADAPTER *v33; // rbx
  _DWORD *v34; // rax
  unsigned int v35; // edx
  D3DKMT_HANDLE v36; // r8d
  _DWORD *p_hDevice; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  const GUID *v40; // r8
  struct DXGADAPTER **v42; // rax
  int PairingAdapters; // eax
  __int64 v44; // r8
  struct DXGADAPTER **v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  struct DXGADAPTER *v56; // rcx
  __int64 v57; // rax
  struct _KEVENT *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  KSPIN_LOCK *Global; // rax
  _QWORD *v62; // rax
  int v63; // [rsp+28h] [rbp-1E0h]
  int v64; // [rsp+30h] [rbp-1D8h]
  struct DXGADAPTER *v66; // [rsp+58h] [rbp-1B0h] BYREF
  unsigned __int64 v67; // [rsp+60h] [rbp-1A8h] BYREF
  int v68; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-198h]
  char v70; // [rsp+78h] [rbp-190h]
  struct DXGADAPTER *v71; // [rsp+80h] [rbp-188h] BYREF
  unsigned __int64 v72; // [rsp+88h] [rbp-180h] BYREF
  struct DXGADAPTER *v73; // [rsp+90h] [rbp-178h] BYREF
  DXGADAPTER *v74; // [rsp+98h] [rbp-170h] BYREF
  DXGADAPTER *v75; // [rsp+A8h] [rbp-160h] BYREF
  unsigned __int64 v76; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-148h]
  struct DXGADAPTER *v78; // [rsp+C8h] [rbp-140h]
  const GUID *v79; // [rsp+D0h] [rbp-138h]
  struct DXGK_VIRTUAL_GPU_PARAV *v80; // [rsp+D8h] [rbp-130h]
  _QWORD v81[4]; // [rsp+E0h] [rbp-128h] BYREF
  unsigned int v82[4]; // [rsp+100h] [rbp-108h]
  __int128 v83; // [rsp+110h] [rbp-F8h]
  __int128 v84; // [rsp+120h] [rbp-E8h]
  __int128 v85; // [rsp+130h] [rbp-D8h]
  _BYTE v86[144]; // [rsp+140h] [rbp-C8h] BYREF

  v79 = a3;
  v80 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v68 = -1;
  v69 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v70 = 1;
    v68 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2009);
  }
  else
  {
    v70 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v68, 2009LL);
  Current = DXGPROCESS::GetCurrent();
  v81[1] = Current;
  if ( Current )
  {
    if ( a2 )
      v11 = a2[2];
    else
      v11 = 0LL;
    v73 = v11;
    if ( a4 )
    {
      v12 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v12 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
      *(_OWORD *)v82 = *(_OWORD *)&v12->hAdapter;
      v83 = *(_OWORD *)&v12->pCommandBuffer;
      v84 = *(_OWORD *)&v12->pAllocationList;
      v85 = *(_OWORD *)&v12->pPatchLocationList;
    }
    else
    {
      *(_OWORD *)v82 = *(_OWORD *)&a1->hAdapter;
      v83 = *(_OWORD *)&a1->pCommandBuffer;
      v84 = *(_OWORD *)&a1->pAllocationList;
      v85 = *(_OWORD *)&a1->pPatchLocationList;
    }
    v13 = &v73;
    if ( v11 )
      v13 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v74, v82[0], (struct _KTHREAD **)Current, v13, 1);
    v17 = v73;
    if ( v73 )
    {
      for ( i = 0LL; ; i = v78 )
      {
        v66 = 0LL;
        v71 = 0LL;
        v19 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v71);
        v20 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v66);
        if ( (int)DxgkpGetPairingAdapters(v17, 0, v20, &v67, v19, &v72, 0) < 0 )
        {
          v42 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v66);
          PairingAdapters = DxgkpGetPairingAdapters(v17, 0, v42, &v67, 0LL, 0LL, 0);
          v32 = PairingAdapters;
          if ( PairingAdapters < 0 )
          {
            v55 = WdLogNewEntry5_WdError(v22, v21, v44);
            *(_QWORD *)(v55 + 24) = v82[0];
            *(_QWORD *)(v55 + 32) = v32;
            WdLogEvent5_WdError(v55);
            goto LABEL_38;
          }
        }
        v23 = v66;
        if ( !v66 || !*((_QWORD *)v66 + 320) )
        {
          v51 = WdLogNewEntry5_WdAssertion(v22, v21);
          *(_QWORD *)(v51 + 24) = 1983LL;
          WdLogEvent5_WdAssertion(v51);
          v23 = v66;
        }
        v24 = v71;
        if ( v71 && !*((_QWORD *)v71 + 319) )
        {
          v52 = WdLogNewEntry5_WdAssertion(v71, v21);
          *(_QWORD *)(v52 + 24) = 1984LL;
          WdLogEvent5_WdAssertion(v52);
          v23 = v66;
        }
        if ( i == v23 )
          break;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)Current + 160, 0LL);
        *((_QWORD *)Current + 21) = KeGetCurrentThread();
        v25 = *((_QWORD *)v66 + 320);
        v81[2] = v25;
        v77 = v25 + 24;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v25 + 24, 0LL);
        *(_QWORD *)(v25 + 32) = KeGetCurrentThread();
        v26 = v66;
        v27 = v71;
        if ( v66 == v71 )
          goto LABEL_23;
        v75 = 0LL;
        v45 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v75);
        v17 = v73;
        LODWORD(v32) = DxgkpGetPairingAdapters(v73, 0, v45, &v76, 0LL, 0LL, 0);
        if ( (int)v32 < 0 )
        {
          DXGADAPTER_REFERENCE::Assign(&v75, 0LL);
          goto LABEL_37;
        }
        v78 = v66;
        if ( v75 == v66 )
        {
          DXGADAPTER_REFERENCE::Assign(&v75, 0LL);
          v26 = v66;
          v27 = v71;
LABEL_23:
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v86, v26, v27);
          v28 = COREADAPTERACCESS::AcquireShared((__int64)v86, 0xFFFFFFFFLL, 0LL);
          v32 = v28;
          if ( v28 < 0 )
          {
            if ( v66 != v71 )
            {
              v56 = (struct DXGADAPTER *)*((unsigned int *)v66 + 44);
              if ( (_DWORD)v56 != 1 || (v56 = v66, *((_BYTE *)v66 + 2465)) )
              {
                v57 = WdLogNewEntry5_WdWarning(v56, v29, v31);
                *(_QWORD *)(v57 + 24) = v66;
                *(_QWORD *)(v57 + 32) = v32;
                WdLogEvent5_WdWarning(v57);
              }
            }
          }
          else
          {
            if ( !*((_BYTE *)v66 + 185) )
            {
              if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v30, v29) + 545) )
              {
                v33 = v66;
                LODWORD(v34) = DXGADAPTER::GetAdapterType(v66);
                if ( (*v34 & 0x10) != 0 )
                {
                  v58 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 320) + 520LL)
                                                                                        + 8LL)
                                                                            + 904LL))(*(_QWORD *)(*((_QWORD *)v33 + 320)
                                                                                                + 528LL));
                  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v60, v59);
                  DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v58);
                  *((_BYTE *)v66 + 182) = 1;
                }
              }
            }
            if ( v66 == v71 )
              v35 = (v82[2] >> 1) & 1;
            else
              LOBYTE(v35) = 0;
            LOBYTE(v64) = (v82[2] & 4) != 0;
            LOBYTE(v63) = v35;
            LODWORD(v32) = ADAPTER_RENDER::CreateDevice(
                             *((_QWORD *)v66 + 320),
                             v81,
                             v82[2],
                             (v82[2] & 1) == 0,
                             v71,
                             v63,
                             v64,
                             v80,
                             v79);
            if ( (int)v32 >= 0 )
            {
              v36 = *(_DWORD *)(v81[0] + 332LL);
              if ( a4 )
              {
                p_hDevice = &a1->hDevice;
                if ( (unsigned __int64)&a1->hDevice >= MmUserProbeAddress )
                  p_hDevice = (_DWORD *)MmUserProbeAddress;
                *p_hDevice = v36;
              }
              else
              {
                a1->hDevice = v36;
              }
            }
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v86);
LABEL_37:
          *(_QWORD *)(v25 + 32) = 0LL;
          ExReleasePushLockExclusiveEx(v25 + 24, 0LL);
          KeLeaveCriticalRegion();
          *((_QWORD *)Current + 21) = 0LL;
          ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_38;
        }
        v53 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        *(_QWORD *)(v53 + 24) = v66;
        WdLogEvent5_WdWarning(v53);
        DXGADAPTER_REFERENCE::Assign(&v75, 0LL);
        v54 = v77;
        *(_QWORD *)(v77 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v54, 0LL);
        KeLeaveCriticalRegion();
        *((_QWORD *)Current + 21) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign(&v71, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v66, 0LL);
      }
      v62 = (_QWORD *)WdLogNewEntry5_WdAssertion(v24, v21);
      v62[3] = v66;
      v62[4] = v17;
      LODWORD(v32) = -1073741275;
      v62[5] = -1073741275LL;
      WdLogEvent5_WdAssertion(v62);
LABEL_38:
      DXGADAPTER_REFERENCE::Assign(&v71, 0LL);
      DXGADAPTER_REFERENCE::Assign(&v66, 0LL);
    }
    else
    {
      v50 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v50 + 24) = v82[0];
      LODWORD(v32) = -1073741811;
      *(_QWORD *)(v50 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v50);
    }
    if ( v74 )
      DXGADAPTER::ReleaseReferenceNoTracking(v74);
  }
  else
  {
    v49 = WdLogNewEntry5_WdError(v8, v7, v9);
    LODWORD(v32) = -1073741811;
    *(_QWORD *)(v49 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v49);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v68, v38);
  if ( v70 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v68);
  return (unsigned int)v32;
}
