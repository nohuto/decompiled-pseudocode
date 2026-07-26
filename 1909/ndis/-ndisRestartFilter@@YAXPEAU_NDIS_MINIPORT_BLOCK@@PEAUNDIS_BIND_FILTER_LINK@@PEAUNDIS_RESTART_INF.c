/*
 * XREFs of ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01056FC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_DqD @ 0x1C0029A6C (WPP_RECORDER_SF__guid_DqD.c)
 *     WPP_RECORDER_SF__guid_Dq @ 0x1C0029B38 (WPP_RECORDER_SF__guid_Dq.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C003FAE8 (ndisInitializeMiniportRestartAttributes.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C0105A50 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C0123644 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012D370 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

void __fastcall ndisRestartFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _NDIS_FILTER_BLOCK *BindContext; // r14
  unsigned int restarted; // esi
  __int64 v10; // r8
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  int v12; // [rsp+20h] [rbp-108h]
  char v13[160]; // [rsp+50h] [rbp-D8h] BYREF

  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  if ( !*(_DWORD *)(v7 + 8) )
    ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      v7,
      0x12u,
      v12,
      (__int64)&a2->BindDriver._p->_t.Guid);
  ndisReferencePackage((__int64)&ndisPkgs);
  restarted = ndisRestartFilterInner(BindContext, a3);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_DqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&a2->BindDriver._p->_t.Guid,
      v10,
      0x13u,
      v12,
      (__int64)&a2->BindDriver._p->_t.Guid);
  if ( restarted )
  {
    NdisTraceLoggingRareFilterPath(BindContext->FilterDriver, 3LL, restarted);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    a2->BindState.m_LastErrorCode = restarted;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastRestartAttemptFailed) )
    {
      memset(v13, 0, sizeof(v13));
      if ( (unsigned __int8)byte_1C00E677B >= 4u )
      {
        ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v11,
            0x1Cu,
            0x15u,
            (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
            *(unsigned __int16 **)&v13[8],
            *(_QWORD *)v13);
      }
    }
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    if ( a2->BindState.NeedsPauseAction
      && Ndis::BindState::SetPause(&a2->BindState, DatapathPaused, PauseReason_RestartNeeded) )
    {
      memset(v13, 0, sizeof(v13));
      if ( (unsigned __int8)byte_1C00E677B >= 4u )
      {
        ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v11,
            0x1Cu,
            0x14u,
            (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
            *(unsigned __int16 **)&v13[8],
            *(_QWORD *)v13);
      }
    }
    a2->BindState.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v11);
}
