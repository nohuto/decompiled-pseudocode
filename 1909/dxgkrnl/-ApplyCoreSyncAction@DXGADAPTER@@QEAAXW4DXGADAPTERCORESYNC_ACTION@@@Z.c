/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0159A1C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01815C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0148E74 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0159B84 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0159CF4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C023EA60 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  ADAPTER_DISPLAY *v8; // rcx
  struct ADAPTER_RENDER *v9; // rdx
  ADAPTER_RENDER *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-38h] BYREF
  __int128 v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+38h] [rbp-20h]
  struct _TDR_RECOVERY_CONTEXT *v27; // [rsp+40h] [rbp-18h]

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v15 + 24) = 3611LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_19;
  if ( (int)v2 <= 3 )
  {
LABEL_5:
    v7 = *(_QWORD *)(a1 + 2560);
    if ( v7 )
      ADAPTER_RENDER::FlushScheduler(v7, 8, 0xFFFFFFFF, 0);
    v8 = *(ADAPTER_DISPLAY **)(a1 + 2552);
    if ( v8 )
    {
      v9 = *(struct ADAPTER_RENDER **)(a1 + 2560);
      if ( !v9 )
        v9 = 0LL;
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v8, v9);
    }
    v10 = *(ADAPTER_RENDER **)(a1 + 2560);
    if ( v10 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v10);
      if ( (_DWORD)v2 == 3 )
      {
        v11 = 32;
        if ( *(_DWORD *)(a1 + 136) != 1 )
          v11 = 4;
      }
      else
      {
        v11 = 2;
        if ( (_DWORD)v2 != 2 )
        {
          v18 = 0;
          if ( (_DWORD)v2 == 5 )
            v18 = 32;
          v11 = v18;
        }
      }
      v12 = v11 | (*(_BYTE *)(a1 + 183) != 0 ? 65 : 1);
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 2560), 9, 0xFFFFFFFF, 0);
      v13 = WdLogNewEntry5_WdPower();
      *(_QWORD *)(v13 + 24) = a1;
      *(_QWORD *)(v13 + 32) = *(unsigned __int8 *)(a1 + 2502);
      WdLogEvent5_WdPower(v13);
      ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 2560), v12, 0LL);
      v14 = (_QWORD *)WdLogNewEntry5_WdPower();
      v14[3] = a1;
      v14[4] = *(unsigned __int8 *)(a1 + 2502);
      v14[5] = 3694LL;
      WdLogEvent5_WdPower(v14);
      if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) && *(_BYTE *)(a1 + 2502) )
      {
        v27 = g_TdrRecoveryInProgress;
        v25 = 0LL;
        v24 = 0LL;
        v26 = 0LL;
        *((_QWORD *)g_TdrRecoveryInProgress + 362) = KeGetCurrentThread();
        TdrResetFromTimeoutWorkItem(&v24);
        v19 = WdLogNewEntry5_WdPower();
        *(_QWORD *)(v19 + 24) = a1;
        WdLogEvent5_WdPower(v19);
        ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 2560), v12, 0LL);
        v20 = (_QWORD *)WdLogNewEntry5_WdPower();
        v20[3] = a1;
        v20[4] = *(unsigned __int8 *)(a1 + 2502);
        v20[5] = 3719LL;
        WdLogEvent5_WdPower(v20);
        if ( *(_BYTE *)(a1 + 2502) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v22, v21);
          *(_QWORD *)(v23 + 24) = 3720LL;
          WdLogEvent5_WdAssertion(v23);
        }
      }
    }
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
    if ( (_DWORD)v2 == 5 )
      goto LABEL_5;
LABEL_19:
    v16 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v16 + 24) = v2;
    WdLogEvent5_WdError(v16);
    return;
  }
  v17 = *(_QWORD *)(a1 + 2560);
  if ( v17 )
    ADAPTER_RENDER::FlushScheduler(v17, 6, 0xFFFFFFFF, 0);
}
