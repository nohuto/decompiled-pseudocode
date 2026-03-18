/*
 * XREFs of ?DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z @ 0x1C027C050
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00B9710 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DmmIsVidPnTargetConnectedToSource(DXGADAPTER *a1, int a2, unsigned int a3, bool *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  char *v20; // r8
  __int64 v21; // r9
  __int64 v22[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)a1 + 315);
  if ( !v14 )
  {
    v11 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_5;
  }
  v15 = *(_QWORD *)(v14 + 88);
  if ( v15 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v22, v15);
    v17 = *(_QWORD *)(v15 + 88);
    v23 = 0LL;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
      v18 = *(_QWORD *)(v15 + 88);
    }
    else
    {
      v18 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v23, v18);
    if ( v23 )
    {
      *a4 = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v23 + 96), a3, v20) == a2;
    }
    else
    {
      v4 = -1071774884;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v19, v20, v21) + 24) = a1;
    }
    auto_rc<DMMVIDPN const>::reset(&v23, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22[0] + 40));
    return v4;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}
