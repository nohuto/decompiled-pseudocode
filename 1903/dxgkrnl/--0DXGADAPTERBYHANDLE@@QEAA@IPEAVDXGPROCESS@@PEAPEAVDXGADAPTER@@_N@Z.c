/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00C48A0 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00DFCEC (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F47D0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00FEDD0 (DxgkGetPresentHistoryInternal.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C012FC70 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01347A0 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C0134AF0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C013B9C0 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkGetPostCompositionCaps @ 0x1C013E340 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C013E6C0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkFlushHeapTransitions @ 0x1C0140840 (DxgkFlushHeapTransitions.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01497D4 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C0149A50 (DxgkFlushPresentHistory.c)
 *     DxgkGetDisplayModeList @ 0x1C014D5D0 (DxgkGetDisplayModeList.c)
 *     DxgkGetScanLine @ 0x1C014DB80 (DxgkGetScanLine.c)
 *     DxgkGetPresentStats @ 0x1C014E780 (DxgkGetPresentStats.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0152550 (DxgkReserveGpuVirtualAddress.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C01EBF2C (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200C00 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02017A0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202490 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkQueryClockCalibration @ 0x1C0204070 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C0204E40 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C0205760 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C020805C (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021EF20 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0237B30 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0238120 (DxgkInvalidateActiveVidPn.c)
 *     DxgkSetStablePowerState @ 0x1C02604D0 (DxgkSetStablePowerState.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271A10 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C0275024 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
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
  unsigned int v12; // esi
  struct _KTHREAD *v13; // r8
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rax
  struct _KTHREAD *v19; // r14
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax

  v5 = 0LL;
  *(_QWORD *)this = 0LL;
  v8 = a2;
  if ( a4 )
  {
    v10 = (char *)(a3 + 23);
    if ( a3 != (struct _KTHREAD **)-184LL && a3[24] == KeGetCurrentThread() )
    {
      v18 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v18 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v18);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v10 + 4) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v11, &EventBlockThread);
      ExAcquirePushLockSharedEx(v10, 0LL);
    }
    v12 = (v8 >> 6) & 0xFFFFFF;
    if ( (*((_BYTE *)a3 + 299) & 8) != 0 )
    {
      v19 = a3[54];
      DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v19 + 184));
      if ( v12 < *((_DWORD *)v19 + 56) )
      {
        v20 = *((_QWORD *)v19 + 26);
        v21 = *(_DWORD *)(v20 + 16LL * v12 + 8);
        if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v12 + 8) & 0x60)
          && (v21 & 0x2000) == 0
          && (v21 & 0x1F) != 0 )
        {
          v22 = v21 & 0x1F;
          if ( (_BYTE)v22 == 1 )
          {
            v5 = *(volatile signed __int64 **)(v20 + 16LL * v12);
          }
          else if ( a5 )
          {
            v23 = WdLogNewEntry5_WdError(v22, 2LL * v12, v20);
            *(_QWORD *)(v23 + 24) = 267LL;
            WdLogEvent5_WdError(v23);
          }
        }
      }
      ExReleasePushLockSharedEx((char *)v19 + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( v12 < *((_DWORD *)a3 + 56) )
    {
      v13 = a3[26];
      v14 = *((_DWORD *)v13 + 4 * v12 + 2);
      if ( ((v8 >> 25) & 0x60) == (*((_BYTE *)v13 + 16 * v12 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      {
        v15 = v14 & 0x1F;
        if ( (_BYTE)v15 == 1 )
        {
          v5 = (volatile signed __int64 *)*((_QWORD *)v13 + 2 * v12);
        }
        else if ( a5 )
        {
          v16 = WdLogNewEntry5_WdError(v15, 2LL * v12, v13);
          *(_QWORD *)(v16 + 24) = 267LL;
          WdLogEvent5_WdError(v16);
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
