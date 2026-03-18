/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00B3150 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00DA660 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkGetPresentHistory @ 0x1C00DB730 (DxgkGetPresentHistory.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E84F0 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkCheckMonitorPowerState @ 0x1C0128C70 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C0128FA0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkGetPostCompositionCaps @ 0x1C012E1B0 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C012E4F0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C012EEF0 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkFlushHeapTransitions @ 0x1C01300A0 (DxgkFlushHeapTransitions.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C01306E0 (DxgkFreeGpuVirtualAddress.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138524 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C0138770 (DxgkFlushPresentHistory.c)
 *     DxgkGetDisplayModeList @ 0x1C013D490 (DxgkGetDisplayModeList.c)
 *     DxgkGetPresentStats @ 0x1C013DC90 (DxgkGetPresentStats.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0140440 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C01D2660 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D39B8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C01D4510 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetScanLine @ 0x1C01D4A70 (DxgkGetScanLine.c)
 *     DxgkQueryClockCalibration @ 0x1C01D6200 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C01D6F90 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C01D7440 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C01D9BDC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF520 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C02061A0 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0206760 (DxgkInvalidateActiveVidPn.c)
 *     DxgkSetStablePowerState @ 0x1C022BC60 (DxgkSetStablePowerState.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C023FC64 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkCreateOutputDupl @ 0x1C023FEC0 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4,
        bool a5)
{
  volatile signed __int64 *v5; // rbx
  char *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // edi
  struct _KTHREAD *v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  struct _KTHREAD *v20; // r14
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax

  v5 = 0LL;
  *(_QWORD *)this = 0LL;
  if ( a4 )
  {
    v10 = (char *)(a3 + 26);
    if ( a3 != (struct _KTHREAD **)-208LL && a3[27] == KeGetCurrentThread() )
    {
      v19 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v19 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v19);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *((unsigned int *)v10 + 4);
        if ( (_DWORD)v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v11, &EventBlockThread, v12, v18);
      }
      ExAcquirePushLockSharedEx(v10, 0LL);
    }
    v13 = (a2 >> 6) & 0xFFFFFF;
    if ( (*((_BYTE *)a3 + 323) & 8) != 0 )
    {
      v20 = a3[57];
      DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v20 + 208));
      if ( v13 < *((_DWORD *)v20 + 62) )
      {
        v21 = *((_QWORD *)v20 + 29);
        v22 = *(_DWORD *)(v21 + 16LL * v13 + 8);
        if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v13 + 8) & 0x60)
          && (v22 & 0x2000) == 0
          && (v22 & 0x1F) != 0 )
        {
          v23 = v22 & 0x1F;
          if ( (_BYTE)v23 == 1 )
          {
            v5 = *(volatile signed __int64 **)(v21 + 16LL * v13);
          }
          else if ( a5 )
          {
            v24 = WdLogNewEntry5_WdError(v23);
            *(_QWORD *)(v24 + 24) = 316LL;
            WdLogEvent5_WdError(v24);
          }
        }
      }
      ExReleasePushLockSharedEx((char *)v20 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( v13 < *((_DWORD *)a3 + 62) )
    {
      v14 = a3[29];
      v15 = *((_DWORD *)v14 + 4 * v13 + 2);
      if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v14 + 16 * v13 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      {
        v16 = v15 & 0x1F;
        if ( (_BYTE)v16 == 1 )
        {
          v5 = (volatile signed __int64 *)*((_QWORD *)v14 + 2 * v13);
        }
        else if ( a5 )
        {
          v25 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v25 + 24) = 316LL;
          WdLogEvent5_WdError(v25);
        }
      }
    }
    *(_QWORD *)this = v5;
    if ( v5 )
    {
      _InterlockedIncrement64(v5 + 3);
      v5 = *(volatile signed __int64 **)this;
      *((_QWORD *)this + 1) = -1LL;
    }
    *a4 = (struct DXGADAPTER *)v5;
    ExReleasePushLockSharedEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  return this;
}
