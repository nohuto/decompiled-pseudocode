/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00C5650 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E032C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F8F00 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0103F20 (DxgkGetPresentHistoryInternal.c)
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01334E0 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01384F0 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C0138840 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C013FD60 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkGetPostCompositionCaps @ 0x1C0141EF0 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C0142270 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkFlushHeapTransitions @ 0x1C0144290 (DxgkFlushHeapTransitions.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C014D384 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C014D600 (DxgkFlushPresentHistory.c)
 *     DxgkGetDisplayModeList @ 0x1C0151490 (DxgkGetDisplayModeList.c)
 *     DxgkGetScanLine @ 0x1C0151A40 (DxgkGetScanLine.c)
 *     DxgkGetPresentStats @ 0x1C0152640 (DxgkGetPresentStats.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0156410 (DxgkReserveGpuVirtualAddress.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C01EC564 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0201270 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0201E10 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202B00 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkQueryClockCalibration @ 0x1C02046E0 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C02054B0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C0205DD0 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02086CC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021F590 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C02381A0 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0238790 (DxgkInvalidateActiveVidPn.c)
 *     DxgkSetStablePowerState @ 0x1C0260B60 (DxgkSetStablePowerState.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0272138 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C0275744 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        __int64 a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4,
        bool a5)
{
  volatile signed __int64 *v5; // rbx
  unsigned int v8; // r12d
  char *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // esi
  struct _KTHREAD *v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  struct _KTHREAD *v21; // r14
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax

  v5 = 0LL;
  *(_QWORD *)this = 0LL;
  v8 = a2;
  if ( a4 )
  {
    v10 = (char *)(a3 + 23);
    if ( a3 != (struct _KTHREAD **)-184LL && a3[24] == KeGetCurrentThread() )
    {
      v20 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v20 + 24) = 1449LL;
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v19 = *((unsigned int *)v10 + 4);
        if ( (_DWORD)v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v11, &EventBlockThread, v12, v19);
      }
      ExAcquirePushLockSharedEx(v10, 0LL);
    }
    v13 = (v8 >> 6) & 0xFFFFFF;
    if ( (*((_BYTE *)a3 + 299) & 8) != 0 )
    {
      v21 = a3[54];
      DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v21 + 184));
      if ( v13 < *((_DWORD *)v21 + 56) )
      {
        v22 = *((_QWORD *)v21 + 26);
        v23 = *(_DWORD *)(v22 + 16LL * v13 + 8);
        if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16LL * v13 + 8) & 0x60)
          && (v23 & 0x2000) == 0
          && (v23 & 0x1F) != 0 )
        {
          v24 = v23 & 0x1F;
          if ( (_BYTE)v24 == 1 )
          {
            v5 = *(volatile signed __int64 **)(v22 + 16LL * v13);
          }
          else if ( a5 )
          {
            v25 = WdLogNewEntry5_WdError(v24, 2LL * v13, v22);
            *(_QWORD *)(v25 + 24) = 267LL;
            WdLogEvent5_WdError(v25);
          }
        }
      }
      ExReleasePushLockSharedEx((char *)v21 + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( v13 < *((_DWORD *)a3 + 56) )
    {
      v14 = a3[26];
      v15 = *((_DWORD *)v14 + 4 * v13 + 2);
      if ( ((v8 >> 25) & 0x60) == (*((_BYTE *)v14 + 16 * v13 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      {
        v16 = v15 & 0x1F;
        if ( (_BYTE)v16 == 1 )
        {
          v5 = (volatile signed __int64 *)*((_QWORD *)v14 + 2 * v13);
        }
        else if ( a5 )
        {
          v17 = WdLogNewEntry5_WdError(v16, 2LL * v13, v14);
          *(_QWORD *)(v17 + 24) = 267LL;
          WdLogEvent5_WdError(v17);
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
