/*
 * XREFs of ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E8738
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C72EC (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00CA810 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00D6190 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6FA0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E9540 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0123B0C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0124EB0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C012BB1C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C0149E00 (DxgkIsSourceInHardwareClone.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02017A0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C02331C0 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *const a4)
{
  __int64 v4; // r14
  DXGADAPTER *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v31; // [rsp+68h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  v7 = a1;
  if ( !a4 )
  {
    v26 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v27 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v27);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v11 = *((_QWORD *)v7 + 319);
  if ( !v11 )
  {
    v27 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v27 + 24) = v7;
    goto LABEL_16;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v30, v12);
    v14 = *(_QWORD *)(v12 + 88);
    v31 = -1;
    v29 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v12 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v29, v15, v13);
    if ( v29 )
    {
      v18 = v29 + 96;
      v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v29 + 96), v4, a3, &v31);
      v7 = (DXGADAPTER *)v19;
      if ( v19 >= 0 )
      {
        auto_rc<DMMVIDPN const>::reset(&v29, 0LL, v22);
        LODWORD(v7) = 0;
        *a4 = v31;
LABEL_10:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30[0] + 40));
        return (unsigned int)v7;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
      v24[3] = a3;
      v24[4] = v4;
      v24[5] = v18;
      v24[6] = v7;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = v7;
      LODWORD(v7) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v29, 0LL, v25);
    goto LABEL_10;
  }
  v28 = WdLogNewEntry5_WdError(v9, v8, v10);
  *(_QWORD *)(v28 + 24) = v7;
  WdLogEvent5_WdError(v28);
  return 3223192373LL;
}
