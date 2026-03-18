/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0143DEC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C015D200 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0136D34 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0143F44 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C020B7D0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h]

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 3572LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_26;
  if ( (int)v2 <= 3 )
  {
    v5 = *(_QWORD *)(a1 + 2528);
    if ( v5 )
      ADAPTER_RENDER::FlushScheduler(v5, 8, 0xFFFFFFFF, 0);
    v6 = *(ADAPTER_DISPLAY **)(a1 + 2520);
    if ( v6 )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v6, *(struct ADAPTER_RENDER **)(a1 + 2528));
    v7 = *(ADAPTER_RENDER **)(a1 + 2528);
    if ( v7 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v7);
      if ( (_DWORD)v2 == 3 )
      {
        v8 = 32;
        if ( *(_DWORD *)(a1 + 136) != 1 )
          v8 = 4;
      }
      else
      {
        v8 = 0;
        if ( (_DWORD)v2 == 2 )
          v8 = 2;
      }
      v9 = v8 | 1;
      v20 = v9;
      if ( *(_BYTE *)(a1 + 183) )
      {
        v9 |= 0x40u;
        v20 = v9;
      }
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 2528), 9, 0xFFFFFFFF, 0);
      v10 = WdLogNewEntry5_WdPower();
      *(_QWORD *)(v10 + 24) = a1;
      *(_QWORD *)(v10 + 32) = *(unsigned __int8 *)(a1 + 2470);
      WdLogEvent5_WdPower(v10);
      ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 2528), v9, 0LL);
      v11 = (_QWORD *)WdLogNewEntry5_WdPower();
      v11[3] = a1;
      v11[4] = *(unsigned __int8 *)(a1 + 2470);
      v11[5] = 3649LL;
      WdLogEvent5_WdPower(v11);
      if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) && *(_BYTE *)(a1 + 2470) )
      {
        memset(v19, 0, 0x28uLL);
        v19[4] = g_TdrRecoveryInProgress;
        *((_QWORD *)g_TdrRecoveryInProgress + 362) = KeGetCurrentThread();
        TdrResetFromTimeoutWorkItem(v19);
        v14 = WdLogNewEntry5_WdPower();
        *(_QWORD *)(v14 + 24) = a1;
        WdLogEvent5_WdPower(v14);
        ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 2528), v20, 0LL);
        v15 = (_QWORD *)WdLogNewEntry5_WdPower();
        v15[3] = a1;
        v15[4] = *(unsigned __int8 *)(a1 + 2470);
        v15[5] = 3674LL;
        WdLogEvent5_WdPower(v15);
        if ( *(_BYTE *)(a1 + 2470) )
        {
          v17 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v17 + 24) = 3675LL;
          WdLogEvent5_WdAssertion(v17);
        }
      }
    }
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
LABEL_26:
    v18 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v18 + 24) = v2;
    WdLogEvent5_WdError(v18);
    return;
  }
  v13 = *(_QWORD *)(a1 + 2528);
  if ( v13 )
    ADAPTER_RENDER::FlushScheduler(v13, 6, 0xFFFFFFFF, 0);
}
