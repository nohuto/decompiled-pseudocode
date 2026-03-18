/*
 * XREFs of ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C00E74CC
 * Callers:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0001AC8 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00E72EC (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        __int64 a2,
        unsigned int *const a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp+18h] BYREF
  __int64 v24; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdError(a1, a2, 0LL);
    *(_QWORD *)(v19 + 24) = 0LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v20 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v20 + 24) = 0LL;
LABEL_14:
    WdLogEvent5_WdError(v20);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)a1 + 319);
  if ( !v9 )
  {
    v20 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v20 + 24) = a1;
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v24, v10);
    v12 = *(_QWORD *)(v10 + 88);
    v23 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v13 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v23, v13, v11);
    if ( v23 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                  (const struct DMMVIDPNTOPOLOGY *)(v23 + 96),
                                                  v4,
                                                  a3);
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(0LL, v14, v15);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdWarning(v22);
      MostImportantVidPnPathTargetsFromSource = -1071774973;
    }
    auto_rc<DMMVIDPN const>::reset(&v23, 0LL, v17);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24 + 40));
    return MostImportantVidPnPathTargetsFromSource;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}
