/*
 * XREFs of ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00BED04
 * Callers:
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00BEDE8 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C01C7F70 (DxgkOpmGetRedirectionInfo.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C0256A80 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DmmGetSourceConnectedToTargetInClientVidPn(DXGADAPTER *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int PathSourceFromTarget; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp+18h] BYREF
  __int64 v26; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
    return 3221225485LL;
  if ( !a1 )
  {
    v21 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v21 + 24) = 0LL;
LABEL_17:
    WdLogEvent5_WdError(v21);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v22);
  }
  v8 = *((_QWORD *)a1 + 315);
  if ( !v8 )
  {
    v21 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v21 + 24) = a1;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, v9);
    v10 = *(_QWORD *)(v9 + 88);
    v25 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *(_QWORD *)(v9 + 88);
    }
    else
    {
      v11 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v25, v11);
    if ( v25 )
    {
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v25 + 96), v4);
      if ( PathSourceFromTarget == -1 )
      {
        v24 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
        v3 = -1071774912;
        *(_QWORD *)(v24 + 24) = v4;
        *(_QWORD *)(v24 + 32) = a1;
      }
      else
      {
        *a3 = PathSourceFromTarget;
      }
    }
    else
    {
      v3 = -1071774884;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v12, v13, v14) + 24) = a1;
    }
    auto_rc<DMMVIDPN const>::reset(&v25, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
    return v3;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdError(v23);
    return 3223192373LL;
  }
}
