/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00D4724
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D08B0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00135B8 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0126AEC (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0138370 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  PERESOURCE v10; // r15
  __int64 SharedWaiters; // rbp
  PERESOURCE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbp
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  void *v33; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v23 + 24) = 2588LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v24 + 24) = 2589LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( this[2] != a2[216] )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v25 + 24) = 2590LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v10 = a2[2][2];
  SharedWaiters = (__int64)v10[24].SharedWaiters;
  if ( !SharedWaiters || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(SharedWaiters + 16)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v26 + 24) = 2596LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v12 = this[2];
  if ( v12[316] )
  {
    if ( v12 != (PERESOURCE *)v10 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v27 + 24) = 2603LL;
      WdLogEvent5_WdAssertion(v27);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v10[24].SharedWaiters);
  }
  ADAPTER_RENDER::FlushScheduler(SharedWaiters, 8, v5, 0);
  if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v5) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(SharedWaiters + 520) + 8LL) + 888LL))(
        *(_QWORD *)(SharedWaiters + 528),
        (unsigned int)v5);
    }
    else
    {
      v28 = *(_QWORD *)(*(_QWORD *)(v13 + 2520) + 264LL);
      if ( v28 )
        _InterlockedExchange((volatile __int32 *)(2704 * v5 + *(_QWORD *)(v28 + 8) + 856), 1);
    }
    goto LABEL_23;
  }
  if ( !v14 )
  {
LABEL_21:
    v20 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v8 = v20;
    if ( v20 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v32[3] = v8;
      v32[4] = this[2];
      v32[5] = v5;
      WdLogEvent5_WdError(v32);
    }
LABEL_23:
    ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v5);
    return (unsigned int)v8;
  }
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v33);
  v16 = (unsigned int *)v33;
  if ( v33 )
  {
    if ( !a4 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v30 + 24) = 2657LL;
      WdLogEvent5_WdAssertion(v30);
    }
    *v16 = v5;
    *((_QWORD *)v16 + 2) = *((_QWORD *)a4 + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(SharedWaiters + 544)
                                                                                       + 8LL)
                                                                           + 216LL))(
      *((_QWORD *)v10[24].SharedWaiters + 69),
      *((_QWORD *)a4 + 1),
      v16 + 1,
      v16 + 2);
    v16[138] |= 1u;
    v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(SharedWaiters + 520) + 8LL) + 816LL))(
            *(_QWORD *)(SharedWaiters + 528),
            v16);
    v19 = v17;
    if ( v17 >= 0 )
    {
      operator delete(v16);
      goto LABEL_21;
    }
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v31[3] = v19;
    v31[4] = this[2];
    v31[5] = v5;
    v31[6] = v16[2];
    WdLogEvent5_WdError(v31);
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdLowResource(v29);
    LODWORD(v19) = -1073741801;
  }
  operator delete(v16);
  return (unsigned int)v19;
}
