/*
 * XREFs of ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C00D2B60
 * Callers:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00110C4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00D2C28 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int *const a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_14:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v7 = *((_QWORD *)a1 + 315);
  if ( !v7 )
  {
    v16 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v16 + 24) = a1;
    goto LABEL_14;
  }
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, v8);
    v9 = *(_QWORD *)(v8 + 88);
    v19 = 0LL;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 32));
      v10 = *(_QWORD *)(v8 + 88);
    }
    else
    {
      v10 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v19, v10);
    if ( v19 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                  (const struct DMMVIDPNTOPOLOGY *)(v19 + 96),
                                                  a2,
                                                  a3);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(0LL, v11, v12);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdWarning(v18);
      MostImportantVidPnPathTargetsFromSource = -1071774973;
    }
    auto_rc<DMMVIDPN const>::reset(&v19, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
    return MostImportantVidPnPathTargetsFromSource;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
