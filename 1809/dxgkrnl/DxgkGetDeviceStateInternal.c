/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1C00D7D70
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0006668 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C00D7D40 (DxgkGetDeviceState.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 *     McTemplateK0pqqqqxx @ 0x1C00390C4 (McTemplateK0pqqqqxx.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C01F48B8 (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C01FF214 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C01FF2D0 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, const GUID *a3)
{
  int v5; // r12d
  int DeviceState; // r13d
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  struct _KTHREAD **v10; // r15
  _D3DKMT_GETDEVICESTATE *v11; // r14
  _D3DKMT_GETDEVICESTATE *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rdx
  const GUID *v16; // r8
  __int64 v17; // rcx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // r15
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  DXGGLOBAL **v25; // rdi
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v35; // r14
  __int64 v36; // rax
  bool v37; // zf
  __int64 v38; // rax
  D3DKMT_DEVICESTATE_TYPE StateType; // ecx
  D3DKMT_DEVICESTATE_TYPE v40; // eax
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  struct DXGDEVICE *v49; // [rsp+50h] [rbp-B8h]
  int v50; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A8h]
  char v52; // [rsp+68h] [rbp-A0h]
  struct DXGADAPTER *v53; // [rsp+70h] [rbp-98h]
  struct DXGDEVICE *v54; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int64 *v55; // [rsp+80h] [rbp-88h]
  __int64 v56; // [rsp+88h] [rbp-80h]
  __int64 v57; // [rsp+90h] [rbp-78h]
  _D3DKMT_GETDEVICESTATE v58; // [rsp+98h] [rbp-70h] BYREF
  int v60; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v61; // [rsp+128h] [rbp+20h] BYREF

  v50 = -1;
  v5 = 0;
  v51 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v52 = 1;
    v50 = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2028);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2028);
  DeviceState = 0;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v35 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v10 = *v35;
      }
    }
  }
  if ( v10 )
  {
    v11 = &v58;
    if ( a2 )
    {
      v12 = (_D3DKMT_GETDEVICESTATE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v12 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
      v58 = *v12;
    }
    else
    {
      v11 = (_D3DKMT_GETDEVICESTATE *)a1;
    }
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v11->hDevice, v10, &v61);
    v49 = v61;
    if ( v61 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL);
      v53 = (struct DXGADAPTER *)v14;
      v56 = v14;
      v55 = (volatile signed __int64 *)(v14 + 24);
      _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
      KeEnterCriticalRegion();
      v57 = v14 + 120;
      ExAcquirePushLockSharedEx(v14 + 120, 0LL);
      if ( *(_BYTE *)(v14 + 185) )
      {
        StateType = v11->StateType;
        if ( ((StateType - 1) & 0xFFFFFFFB) == 0 || StateType == D3DKMT_DEVICESTATE_PRESENT_QUEUE )
        {
          LOBYTE(v5) = *(_DWORD *)(v14 + 176) == 1;
          v40 = v11->StateType;
          if ( !v5 )
          {
            if ( v40 == D3DKMT_DEVICESTATE_EXECUTION )
            {
              v11->PresentState.VidPnSourceId = 4;
              goto LABEL_24;
            }
            goto LABEL_91;
          }
          if ( v40 == D3DKMT_DEVICESTATE_EXECUTION )
            v11->PresentState.VidPnSourceId = 1;
          else
            DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v14 + 4152),
                            (struct DXGPROCESS *)v10,
                            v61,
                            v11);
          goto LABEL_24;
        }
      }
      v17 = (unsigned int)v11->StateType;
      if ( (_DWORD)v17 != 1 )
      {
        v29 = v17 - 2;
        if ( v29 )
        {
          v30 = v29 - 2;
          if ( v30 )
          {
            v41 = v30 - 1;
            if ( !v41 )
            {
              if ( *((_DWORD *)v61 + 116) == 1 )
              {
                if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v49 + 2) + 16LL)) )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)v16[32].Data4 + 8LL) + 200LL))(*((_QWORD *)v61 + 82));
                }
                else
                {
                  *v15 = -1LL;
                  v11->PresentState.PresentStats.PresentCount = 0;
                  v11->PresentState.PresentStats.PresentRefreshCount = -1;
                  v11->PresentState.PresentStats.SyncRefreshCount = 0;
                  v11->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
                }
              }
              else
              {
                DeviceState = -1073741130;
              }
              goto LABEL_24;
            }
            if ( v41 != 1 )
            {
              DeviceState = -1073741811;
              goto LABEL_24;
            }
            if ( *((_DWORD *)v61 + 116) != 1 )
            {
              DeviceState = -1073741130;
              goto LABEL_24;
            }
            DeviceState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 2) + 520LL)
                                                                                        + 8LL)
                                                                            + 184LL))(
                            *((_QWORD *)v61 + 82),
                            v11->PresentState.VidPnSourceId,
                            0LL);
            v11->PresentQueueState.bQueuedPresentLimitReached = 0;
            if ( DeviceState != -1071775486 )
            {
LABEL_24:
              if ( bTracingEnabled )
              {
                v24 = (unsigned int)(v11->StateType - 1);
                if ( v11->StateType == D3DKMT_DEVICESTATE_EXECUTION )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0xq(v24, &DeviceStateEvent, v16, v61, v11->PresentState.VidPnSourceId);
                }
                else if ( v11->StateType == D3DKMT_DEVICESTATE_PRESENT
                       && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  McTemplateK0pqqqqxx(
                    v24,
                    (__int64)v15,
                    v16,
                    v61,
                    v11->PresentState.VidPnSourceId,
                    v11->PresentState.PresentStats.PresentCount,
                    v11->PresentState.PresentStats.PresentRefreshCount,
                    v11->PresentState.PresentStats.SyncRefreshCount,
                    v11->PresentState.PresentStats.SyncQPCTime.QuadPart,
                    v11->PresentState.PresentStats.SyncGPUTime.QuadPart);
                }
              }
              if ( DeviceState >= 0 && a2 )
              {
                if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                *(_OWORD *)a1 = *(_OWORD *)&v11->hDevice;
                *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v11->PresentQueueState + 1);
                *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v11->PresentQueueState + 3);
                *(_QWORD *)(a1 + 48) = *((_QWORD *)&v11->PresentQueueState + 5);
                v25 = (DXGGLOBAL **)v53;
              }
              else
              {
                v25 = (DXGGLOBAL **)v14;
              }
              ExReleasePushLockSharedEx(v57, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64(v55, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(v25[2], (struct DXGADAPTER *)v25);
              if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
              if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                goto LABEL_107;
              return (unsigned int)DeviceState;
            }
            v11->PresentQueueState.bQueuedPresentLimitReached = 1;
LABEL_23:
            DeviceState = v5;
            goto LABEL_24;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 2) + 16LL) + 176LL) != 1 )
          {
            DeviceState = -1073741130;
            goto LABEL_24;
          }
          v31 = *((_QWORD *)v61 + 216);
          if ( !v31
            || (v32 = *(unsigned int *)(*(_QWORD *)(v31 + 2520) + 80LL),
                v11->PresentState.VidPnSourceId < (unsigned int)v32) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                            v61,
                            v11->PresentState.VidPnSourceId,
                            &v11->PresentStateDWM.PresentStatsDWM);
            goto LABEL_24;
          }
        }
        else
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 2) + 16LL) + 176LL) != 1 )
          {
LABEL_91:
            DeviceState = -1073741130;
            goto LABEL_24;
          }
          v42 = *((_QWORD *)v61 + 216);
          if ( !v42
            || (v32 = *(unsigned int *)(*(_QWORD *)(v42 + 2520) + 80LL),
                v11->PresentState.VidPnSourceId < (unsigned int)v32) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                            v61,
                            v11->PresentState.VidPnSourceId,
                            &v11->PresentState.PresentStats);
            goto LABEL_24;
          }
        }
        v43 = WdLogNewEntry5_WdWarning(v32, v15, v16);
        *(_QWORD *)(v43 + 24) = v11->PresentState.VidPnSourceId;
        DeviceState = -1073741811;
        *(_QWORD *)(v43 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v43);
        goto LABEL_24;
      }
      p_PresentState = &v11->PresentState;
      if ( v11 == (_D3DKMT_GETDEVICESTATE *)-8LL )
      {
        v44 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v44 + 24) = 9528LL;
        WdLogEvent5_WdAssertion(v44);
      }
      v19 = *((_DWORD *)v61 + 116);
      if ( v19 == 1 )
      {
        if ( (*((_BYTE *)v61 + 1749) & 1) != 0 )
        {
          v20 = *(_DWORD *)(*((_QWORD *)v61 + 43) + 8LL);
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 2) + 520LL) + 8LL)
                                                        + 192LL))(
                 *((_QWORD *)v61 + 82),
                 &v60);
          v20 = v60;
        }
        v21 = v20 & 0x80000000;
        v22 = v20 & 0x7FFFFFFF;
        v60 = v22;
        if ( v5 < 0 )
          goto LABEL_23;
        if ( v22 )
        {
          v33 = (unsigned int)(v22 - 2);
          v15 = (_QWORD *)0x1C0000000LL;
          switch ( (int)v33 )
          {
            case 0:
            case 9:
            case 10:
            case 11:
              p_PresentState->VidPnSourceId = 5;
              break;
            case 4:
              p_PresentState->VidPnSourceId = 6;
              break;
            case 5:
              goto LABEL_100;
            case 7:
            case 8:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 22:
              p_PresentState->VidPnSourceId = 7;
              break;
            case 12:
            case 20:
              goto LABEL_101;
            default:
              v48 = WdLogNewEntry5_WdAssertion(v33);
              *(_QWORD *)(v48 + 24) = 9610LL;
              WdLogEvent5_WdAssertion(v48);
              v5 = -1073741823;
              p_PresentState->VidPnSourceId = 5;
              break;
          }
          goto LABEL_23;
        }
        if ( !v21 )
        {
          v23 = 1;
LABEL_22:
          p_PresentState->VidPnSourceId = v23;
          goto LABEL_23;
        }
      }
      else
      {
        v45 = v19 - 2;
        if ( v45 )
        {
          v46 = (unsigned int)(v45 - 1);
          if ( (_DWORD)v46 )
          {
            if ( (_DWORD)v46 == 1 )
            {
LABEL_101:
              p_PresentState->VidPnSourceId = 4;
            }
            else
            {
              v47 = WdLogNewEntry5_WdAssertion(v46);
              *(_QWORD *)(v47 + 24) = 9623LL;
              WdLogEvent5_WdAssertion(v47);
              p_PresentState->VidPnSourceId = 4;
              v5 = -1073741823;
            }
          }
          else
          {
LABEL_100:
            p_PresentState->VidPnSourceId = 3;
          }
          goto LABEL_23;
        }
      }
      v23 = 2;
      goto LABEL_22;
    }
    v38 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v38 + 24) = v11->hDevice;
    DeviceState = -1073741811;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    v37 = v52 == 0;
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v9);
    DeviceState = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    v37 = v52 == 0;
  }
  if ( !v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_107:
    McTemplateK0q(v26, &EventProfilerExit, v27, v50);
  return (unsigned int)DeviceState;
}
