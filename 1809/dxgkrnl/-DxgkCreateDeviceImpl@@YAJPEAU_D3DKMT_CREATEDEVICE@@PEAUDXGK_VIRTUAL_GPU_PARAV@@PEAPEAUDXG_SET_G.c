/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E84F0
 * Callers:
 *     DxgkCreateDevice @ 0x1C00E9B40 (DxgkCreateDevice.c)
 *     DxgkCreateDeviceInternal @ 0x1C013BB38 (DxgkCreateDeviceInternal.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ECC90 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C003BF68 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E7F78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0113280 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGK_VIRTUAL_GPU_PARAV *a2,
        const GUID *a3,
        char a4)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  struct DXGADAPTER *v9; // rdx
  struct _D3DKMT_CREATEDEVICE *v10; // rax
  struct DXGADAPTER **v11; // r9
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r13
  DXGADAPTER *v19; // rbx
  struct DXGADAPTER *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rbx
  _DWORD *v23; // rax
  struct DXGADAPTER *v24; // r13
  unsigned int v25; // eax
  _DWORD *p_hDevice; // rdx
  __int64 v27; // rsi
  char *v28; // rcx
  __int64 v29; // rcx
  const GUID *v30; // r8
  int PairingAdapters; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  struct _KEVENT *v40; // rbx
  __int64 v41; // rcx
  KSPIN_LOCK *Global; // rax
  int v43; // [rsp+50h] [rbp-158h] BYREF
  __int64 v44; // [rsp+58h] [rbp-150h]
  char v45; // [rsp+60h] [rbp-148h]
  struct DXGADAPTER *v46; // [rsp+68h] [rbp-140h] BYREF
  struct DXGADAPTER *v47; // [rsp+70h] [rbp-138h]
  struct DXGADAPTER *v48; // [rsp+78h] [rbp-130h] BYREF
  struct DXGADAPTER *v49; // [rsp+80h] [rbp-128h] BYREF
  __int64 v50; // [rsp+88h] [rbp-120h]
  DXGADAPTER *v51; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int64 v52; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v53[4]; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned int v54[4]; // [rsp+D0h] [rbp-D8h]
  __int128 v55; // [rsp+E0h] [rbp-C8h]
  __int128 v56; // [rsp+F0h] [rbp-B8h]
  __int128 v57; // [rsp+100h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+110h] [rbp-98h] BYREF
  _BYTE v59[136]; // [rsp+120h] [rbp-88h] BYREF

  v43 = -1;
  v44 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2009);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2009);
  Current = DXGPROCESS::GetCurrent();
  v53[1] = (__int64)Current;
  if ( Current )
  {
    if ( a2 )
      v9 = (struct DXGADAPTER *)*((_QWORD *)a2 + 2);
    else
      v9 = 0LL;
    v49 = v9;
    if ( a4 )
    {
      v10 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v10 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
      *(_OWORD *)v54 = *(_OWORD *)&v10->hAdapter;
      v55 = *(_OWORD *)&v10->pCommandBuffer;
      v56 = *(_OWORD *)&v10->pAllocationList;
      v57 = *(_OWORD *)&v10->pPatchLocationList;
    }
    else
    {
      *(_OWORD *)v54 = *(_OWORD *)&a1->hAdapter;
      v55 = *(_OWORD *)&a1->pCommandBuffer;
      v56 = *(_OWORD *)&a1->pAllocationList;
      v57 = *(_OWORD *)&a1->pPatchLocationList;
    }
    v11 = &v49;
    if ( v9 )
      v11 = 0LL;
    v12 = v54[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v51, v54[0], (struct _KTHREAD **)Current, v11, 1);
    v16 = v49;
    if ( v49 )
    {
      if ( (int)DxgkpGetPairingAdapters(v49, 0, &v46, &v52, &v48, &v58) >= 0
        || (v48 = 0LL,
            PairingAdapters = DxgkpGetPairingAdapters(v16, 0, &v46, &v52, 0LL, 0LL),
            v22 = PairingAdapters,
            PairingAdapters >= 0) )
      {
        if ( !v46 || !*((_QWORD *)v46 + 316) )
        {
          v38 = WdLogNewEntry5_WdAssertion(v17);
          *(_QWORD *)(v38 + 24) = 1979LL;
          WdLogEvent5_WdAssertion(v38);
        }
        if ( v48 && !*((_QWORD *)v48 + 315) )
        {
          v39 = WdLogNewEntry5_WdAssertion(v17);
          *(_QWORD *)(v39 + 24) = 1981LL;
          WdLogEvent5_WdAssertion(v39);
        }
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)Current + 168, 0LL);
        *((_QWORD *)Current + 22) = KeGetCurrentThread();
        v47 = v46;
        v50 = *((_QWORD *)v46 + 316);
        v53[2] = v50;
        v18 = v50 + 24;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v18, 0LL);
        *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
        v19 = v48;
        v20 = v46;
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v46, v48);
        DXGADAPTER::ReleaseReference(v20);
        if ( v19 )
          DXGADAPTER::ReleaseReference(v19);
        LODWORD(v22) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59);
        if ( (int)v22 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
          *(_QWORD *)(v18 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v18, 0LL);
          KeLeaveCriticalRegion();
          *((_QWORD *)Current + 22) = 0LL;
          v28 = (char *)Current + 168;
        }
        else
        {
          if ( *((_BYTE *)v20 + 185) || !*((_BYTE *)DXGGLOBAL::GetGlobal(v21) + 545) )
          {
            v24 = v47;
          }
          else
          {
            LODWORD(v23) = DXGADAPTER::GetAdapterType(v20);
            v24 = v47;
            if ( (*v23 & 0x10) != 0 )
            {
              v40 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v47 + 316)
                                                                                                + 520LL)
                                                                                    + 8LL)
                                                                        + 904LL))(*(_QWORD *)(*((_QWORD *)v47 + 316)
                                                                                            + 528LL));
              Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v41);
              DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v40);
              *((_BYTE *)v20 + 182) = 1;
            }
          }
          if ( v20 == v48 )
            v25 = (v54[2] >> 1) & 1;
          else
            LOBYTE(v25) = 0;
          LODWORD(v22) = ADAPTER_RENDER::CreateDevice(
                           *((DXGADAPTER ***)v24 + 316),
                           v53,
                           v54[2],
                           (v54[2] & 1) == 0,
                           v48,
                           v25,
                           (v54[2] & 4) != 0,
                           (__int64)a2,
                           (__int64)a3);
          if ( (int)v22 < 0 )
          {
            v27 = v50;
          }
          else
          {
            p_hDevice = &a1->hDevice;
            if ( a4 && (unsigned __int64)p_hDevice >= MmUserProbeAddress )
              p_hDevice = (_DWORD *)MmUserProbeAddress;
            *p_hDevice = *(_DWORD *)(v53[0] + 332);
            v27 = v50;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
          *(_QWORD *)(v27 + 32) = 0LL;
          ExReleasePushLockExclusiveEx(v27 + 24, 0LL);
          KeLeaveCriticalRegion();
          v28 = (char *)Current + 168;
          *((_QWORD *)Current + 22) = 0LL;
        }
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v37 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v37 + 24) = v12;
        *(_QWORD *)(v37 + 32) = v22;
        WdLogEvent5_WdError(v37);
      }
      if ( v51 )
        DXGADAPTER::ReleaseReference(v51);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( v45 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v29, &EventProfilerExit, v30, v43);
      }
      return (unsigned int)v22;
    }
    v34 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v34 + 24) = v12;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
    if ( v51 )
      DXGADAPTER::ReleaseReference(v51);
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v43);
  return 3221225485LL;
}
