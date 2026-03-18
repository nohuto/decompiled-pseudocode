/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1C012F1F0
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001290C (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C012F1B0 (DxgkGetDeviceState.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298810 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
 *     McTemplateK0pqqqqxx @ 0x1C003F300 (McTemplateK0pqqqqxx.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C02245E8 (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C022F93C (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C022FA18 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, const GUID *a3)
{
  int v5; // r14d
  unsigned int DeviceState; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  _D3DKMT_GETDEVICESTATE *v15; // rbx
  _D3DKMT_GETDEVICESTATE *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  const GUID *v21; // r8
  __int64 v22; // rcx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // rdi
  int v24; // ecx
  int v25; // ecx
  bool v26; // al
  int v27; // ecx
  int v28; // eax
  DXGGLOBAL **v29; // r14
  __int64 v30; // rcx
  volatile signed __int64 *v31; // rdx
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  bool v46; // zf
  __int64 v47; // rax
  __int64 v48; // rdx
  D3DKMT_DEVICESTATE_TYPE StateType; // ecx
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  struct DXGDEVICE *v59; // [rsp+50h] [rbp-A8h] BYREF
  int v60; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-98h]
  char v62; // [rsp+68h] [rbp-90h]
  struct DXGDEVICE *v63; // [rsp+70h] [rbp-88h]
  struct DXGDEVICE *v64[2]; // [rsp+78h] [rbp-80h] BYREF
  char *v65; // [rsp+88h] [rbp-70h]
  volatile signed __int64 *v66; // [rsp+90h] [rbp-68h]
  _D3DKMT_GETDEVICESTATE v67; // [rsp+98h] [rbp-60h] BYREF
  int v68; // [rsp+110h] [rbp+18h] BYREF
  struct DXGADAPTER *v69; // [rsp+118h] [rbp+20h]

  v60 = -1;
  v5 = 0;
  v61 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    v60 = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2028);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 2028LL);
  DeviceState = 0;
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v43 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v14 = *v43;
    }
  }
  if ( !v14 )
  {
    v44 = WdLogNewEntry5_WdError(v12, v11, v13);
    DeviceState = -1073741811;
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v45);
    v46 = v62 == 0;
    goto LABEL_63;
  }
  memset(&v67, 0, sizeof(v67));
  v15 = &v67;
  if ( a2 )
  {
    v16 = (_D3DKMT_GETDEVICESTATE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
    v67 = *v16;
  }
  else
  {
    v15 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  if ( !a2 || v15->StateType != D3DKMT_DEVICESTATE_RESET )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v64, v15->hDevice, (struct _KTHREAD **)v14, &v59);
    v63 = v59;
    if ( v59 )
    {
      v69 = *(struct DXGADAPTER **)(*((_QWORD *)v59 + 2) + 16LL);
      v64[1] = v69;
      v66 = (volatile signed __int64 *)((char *)v69 + 24);
      _InterlockedIncrement64((volatile signed __int64 *)v69 + 3);
      KeEnterCriticalRegion();
      v65 = (char *)v69 + 120;
      ExAcquirePushLockSharedEx((char *)v69 + 120, 0LL);
      if ( *((_BYTE *)v69 + 185) )
      {
        StateType = v15->StateType;
        if ( ((StateType - 1) & 0xFFFFFFFA) == 0 && StateType != D3DKMT_DEVICESTATE_PRESENT )
        {
          v29 = (DXGGLOBAL **)v69;
          if ( *((_DWORD *)v69 + 44) == 1 )
          {
            if ( v15->StateType == D3DKMT_DEVICESTATE_EXECUTION )
              v15->PresentState.VidPnSourceId = 1;
            else
              DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                              (struct DXGADAPTER *)((char *)v69 + 4144),
                              (struct DXGPROCESS *)v14,
                              v59,
                              v15);
          }
          else if ( v15->StateType == D3DKMT_DEVICESTATE_EXECUTION )
          {
            v15->PresentState.VidPnSourceId = 4;
          }
          else
          {
            DeviceState = -1073741130;
          }
LABEL_27:
          if ( bTracingEnabled )
          {
            v30 = (unsigned int)(v15->StateType - 1);
            if ( v15->StateType == D3DKMT_DEVICESTATE_EXECUTION )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0xq(v30, &DeviceStateEvent, v21, v59, v15->PresentState.VidPnSourceId);
            }
            else if ( v15->StateType == D3DKMT_DEVICESTATE_PRESENT && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              McTemplateK0pqqqqxx(
                v30,
                v20,
                v21,
                v59,
                v15->PresentState.VidPnSourceId,
                v15->PresentState.PresentStats.PresentCount,
                v15->PresentState.PresentStats.PresentRefreshCount,
                v15->PresentState.PresentStats.SyncRefreshCount,
                v15->PresentState.PresentStats.SyncQPCTime.QuadPart,
                v15->PresentState.PresentStats.SyncGPUTime.QuadPart);
            }
          }
          if ( (DeviceState & 0x80000000) == 0 && a2 )
          {
            if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)a1 = *(_OWORD *)&v15->hDevice;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v15->PresentQueueState + 1);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v15->PresentQueueState + 3);
            *(_QWORD *)(a1 + 48) = *((_QWORD *)&v15->PresentQueueState + 5);
          }
          ExReleasePushLockSharedEx(v65, 0LL);
          KeLeaveCriticalRegion();
          v31 = v66;
          if ( _InterlockedExchangeAdd64(v66, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v29[2], (struct DXGADAPTER *)v29);
          if ( v64[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v64[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64[0] + 2), v64[0]);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, (__int64)v31);
          if ( !v62 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
            return DeviceState;
LABEL_116:
          McTemplateK0q(v32, &EventProfilerExit, v33, v60);
          return DeviceState;
        }
      }
      v22 = (unsigned int)v15->StateType;
      if ( (_DWORD)v22 != 1 )
      {
        v38 = v22 - 2;
        if ( v38 )
        {
          v39 = v38 - 2;
          if ( v39 )
          {
            v50 = v39 - 1;
            if ( !v50 )
            {
              if ( *((_DWORD *)v59 + 116) == 1 )
              {
                if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v63 + 2) + 16LL)) )
                {
                  (*(void (__fastcall **)(_QWORD, D3DKMT_DEVICEPAGEFAULT_STATE *))(*(_QWORD *)(*(_QWORD *)(v20 + 520)
                                                                                             + 8LL)
                                                                                 + 200LL))(
                    *((_QWORD *)v59 + 82),
                    &v15->PageFaultState);
                }
                else
                {
                  v15->PageFaultState.FaultedPrimitiveAPISequenceNumber = -1LL;
                  v15->PresentState.PresentStats.PresentCount = 0;
                  v15->PresentState.PresentStats.PresentRefreshCount = -1;
                  v15->PresentState.PresentStats.SyncRefreshCount = 0;
                  v15->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
                }
              }
              else
              {
                DeviceState = -1073741130;
              }
              goto LABEL_26;
            }
            if ( v50 != 1 )
            {
              DeviceState = -1073741811;
              goto LABEL_26;
            }
            if ( *((_DWORD *)v59 + 116) != 1 )
            {
              DeviceState = -1073741130;
              goto LABEL_26;
            }
            DeviceState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 520LL)
                                                                                        + 8LL)
                                                                            + 184LL))(
                            *((_QWORD *)v59 + 82),
                            v15->PresentState.VidPnSourceId,
                            0LL);
            v15->PresentQueueState.bQueuedPresentLimitReached = 0;
            if ( DeviceState != -1071775486 )
              goto LABEL_26;
            v15->PresentQueueState.bQueuedPresentLimitReached = 1;
            goto LABEL_25;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) + 176LL) != 1 )
          {
            DeviceState = -1073741130;
            goto LABEL_26;
          }
          v40 = *((_QWORD *)v59 + 216);
          if ( !v40
            || (v41 = *(unsigned int *)(*(_QWORD *)(v40 + 2552) + 80LL),
                v15->PresentState.VidPnSourceId < (unsigned int)v41) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                            v59,
                            v15->PresentState.VidPnSourceId,
                            &v15->PresentStateDWM.PresentStatsDWM);
            goto LABEL_26;
          }
        }
        else
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) + 176LL) != 1 )
          {
            DeviceState = -1073741130;
            goto LABEL_26;
          }
          v51 = *((_QWORD *)v59 + 216);
          if ( !v51
            || (v41 = *(unsigned int *)(*(_QWORD *)(v51 + 2552) + 80LL),
                v15->PresentState.VidPnSourceId < (unsigned int)v41) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                            v59,
                            v15->PresentState.VidPnSourceId,
                            &v15->PresentState.PresentStats);
            goto LABEL_26;
          }
        }
        v52 = WdLogNewEntry5_WdWarning(v41, v20, v21);
        *(_QWORD *)(v52 + 24) = v15->PresentState.VidPnSourceId;
        DeviceState = -1073741811;
        *(_QWORD *)(v52 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v52);
        goto LABEL_26;
      }
      p_PresentState = &v15->PresentState;
      if ( v15 == (_D3DKMT_GETDEVICESTATE *)-8LL )
      {
        v53 = WdLogNewEntry5_WdAssertion(v22, v20);
        *(_QWORD *)(v53 + 24) = 9610LL;
        WdLogEvent5_WdAssertion(v53);
      }
      v24 = *((_DWORD *)v59 + 116);
      if ( v24 == 1 )
      {
        if ( (*((_BYTE *)v59 + 1749) & 1) != 0 )
        {
          v25 = *(_DWORD *)(*((_QWORD *)v59 + 43) + 8LL);
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 520LL) + 8LL)
                                                        + 192LL))(
                 *((_QWORD *)v59 + 82),
                 &v68);
          v25 = v68;
        }
        v26 = v25 < 0;
        v27 = v25 & 0x7FFFFFFF;
        v68 = v27;
        if ( v5 < 0 )
          goto LABEL_25;
        if ( v27 )
        {
          v57 = (unsigned int)(v27 - 2);
          v20 = 0x1C0000000uLL;
          switch ( (int)v57 )
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
              goto LABEL_109;
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
              goto LABEL_110;
            default:
              v58 = WdLogNewEntry5_WdAssertion(v57, 0x1C0000000uLL);
              *(_QWORD *)(v58 + 24) = 9692LL;
              WdLogEvent5_WdAssertion(v58);
              v5 = -1073741823;
              p_PresentState->VidPnSourceId = 5;
              break;
          }
          goto LABEL_25;
        }
        if ( !v26 )
        {
          v28 = 1;
LABEL_24:
          p_PresentState->VidPnSourceId = v28;
LABEL_25:
          DeviceState = v5;
LABEL_26:
          v29 = (DXGGLOBAL **)v69;
          goto LABEL_27;
        }
      }
      else
      {
        v54 = v24 - 2;
        if ( v54 )
        {
          v55 = (unsigned int)(v54 - 1);
          if ( (_DWORD)v55 )
          {
            if ( (_DWORD)v55 == 1 )
            {
LABEL_110:
              p_PresentState->VidPnSourceId = 4;
            }
            else
            {
              v56 = WdLogNewEntry5_WdAssertion(v55, v20);
              *(_QWORD *)(v56 + 24) = 9705LL;
              WdLogEvent5_WdAssertion(v56);
              p_PresentState->VidPnSourceId = 4;
              v5 = -1073741823;
            }
          }
          else
          {
LABEL_109:
            p_PresentState->VidPnSourceId = 3;
          }
          goto LABEL_25;
        }
      }
      v28 = 2;
      goto LABEL_24;
    }
    v47 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v47 + 24) = v15->hDevice;
    DeviceState = -1073741811;
    *(_QWORD *)(v47 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v47);
    if ( v64[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v64[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64[0] + 2), v64[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v48);
    v46 = v62 == 0;
LABEL_63:
    if ( v46 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return DeviceState;
    goto LABEL_116;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v14 + 96) + 208LL))() )
    v5 = 1;
  *(_DWORD *)(a1 + 8) = v5;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v35);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v60);
  return 0LL;
}
