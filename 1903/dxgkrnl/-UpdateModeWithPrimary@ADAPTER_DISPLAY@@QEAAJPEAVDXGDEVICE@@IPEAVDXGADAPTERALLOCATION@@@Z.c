/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00C9234
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C9B94 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00CBB48 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00017F8 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00C9418 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00C9820 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6778 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0123B0C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  PERESOURCE v11; // r15
  __int64 v12; // rbp
  PERESOURCE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int *v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbp
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  void *v41; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v31 + 24) = 2760LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v32 + 24) = 2761LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( this[2] != a2[216] )
  {
    v33 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v33 + 24) = 2762LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v11 = a2[2][2];
  v12 = *(_QWORD *)&v11[24].ActiveEntries;
  if ( !v12 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v12 + 16)) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v34 + 24) = 2768LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v13 = this[2];
  if ( v13[320] )
  {
    if ( v13 != (PERESOURCE *)v11 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v35 + 24) = 2775LL;
      WdLogEvent5_WdAssertion(v35);
    }
    ADAPTER_RENDER::DisableOverlays(*(ADAPTER_RENDER **)&v11[24].ActiveEntries);
  }
  ADAPTER_RENDER::FlushScheduler(v12, 8LL, (unsigned int)v5);
  if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v5) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v12 + 520) + 8LL) + 888LL))(
        *(_QWORD *)(v12 + 528),
        (unsigned int)v5);
    }
    else
    {
      v36 = *(_QWORD *)(*(_QWORD *)(v14 + 2552) + 368LL);
      if ( v36 )
        _InterlockedExchange((volatile __int32 *)(2760 * v5 + *(_QWORD *)(v36 + 8) + 856), 1);
    }
    goto LABEL_23;
  }
  if ( !v15 )
  {
LABEL_21:
    v26 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v8 = v26;
    if ( v26 < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
      v40[3] = v8;
      v40[4] = this[2];
      v40[5] = v5;
      WdLogEvent5_WdError(v40);
    }
LABEL_23:
    ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, v5);
    return (unsigned int)v8;
  }
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v41);
  v20 = (unsigned int *)v41;
  if ( v41 )
  {
    if ( !a4 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v38 + 24) = 2829LL;
      WdLogEvent5_WdAssertion(v38);
    }
    *v20 = v5;
    *((_QWORD *)v20 + 2) = *((_QWORD *)a4 + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v12 + 544)
                                                                                               + 8LL)
                                                                                   + 216LL))(
      *(_QWORD *)(*(_QWORD *)&v11[24].ActiveEntries + 552LL),
      *((_QWORD *)a4 + 1),
      v20 + 1,
      v20 + 2,
      0LL);
    v20[138] |= 1u;
    v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v12 + 520) + 8LL) + 816LL))(
            *(_QWORD *)(v12 + 528),
            v20);
    v25 = v21;
    if ( v21 >= 0 )
    {
      operator delete(v20);
      goto LABEL_21;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    v39[3] = v25;
    v39[4] = this[2];
    v39[5] = v5;
    v39[6] = v20[2];
    WdLogEvent5_WdError(v39);
  }
  else
  {
    v37 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v37 + 24) = this;
    WdLogEvent5_WdLowResource(v37);
    LODWORD(v25) = -1073741801;
  }
  operator delete(v20);
  return (unsigned int)v25;
}
