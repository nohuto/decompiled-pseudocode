/*
 * XREFs of ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C013F1C0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E8FB0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, __int64 a2, __int64 a3, bool *a4)
{
  bool v4; // bl
  int v6; // ebp
  int v7; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v6 = a3;
  v7 = a2;
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v20);
  }
  v12 = *((_QWORD *)a1 + 319);
  if ( !v12 )
  {
    v19 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v19 + 24) = a1;
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v22, v13);
    v15 = *(_QWORD *)(v13 + 88);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v13 + 88);
      v23 = v16;
      if ( v16 )
        v4 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v16 + 96), v7, v6) != 0LL;
    }
    else
    {
      v23 = 0LL;
    }
    *a4 = v4;
    auto_rc<DMMVIDPN const>::reset(&v23, 0LL, v14);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22[0] + 40));
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}
