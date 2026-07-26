/*
 * XREFs of ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00CF8F8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF__guid_Dq @ 0x1C007A920 (WPP_SF__guid_Dq.c)
 *     WPP_SF__guid_DqD @ 0x1C007A970 (WPP_SF__guid_DqD.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00BE6A8 (ndisInitializeMiniportRestartAttributes.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00C0AE4 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C01031E4 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010F82C (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

void __fastcall ndisRestartFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  struct _NDIS_FILTER_BLOCK *BindContext; // r14
  unsigned int restarted; // esi
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx
  _QWORD v11[20]; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v12[20]; // [rsp+D0h] [rbp-D8h] BYREF

  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  if ( !*(_DWORD *)(v6 + 8) )
    ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a3);
  if ( (unsigned __int8)byte_1C00A026B >= 4u )
    WPP_SF__guid_Dq(0x12u, v7, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  ndisReferencePackage((__int64)&ndisPkgs);
  restarted = ndisRestartFilterInner(BindContext, a3);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A026B >= 4u )
    WPP_SF__guid_DqD(
      0x13u,
      (__int64)a2->BindState.Miniport,
      (__int64)&a2->BindDriver._p->_t.Guid,
      a2->FilterIndex,
      a2->BindState.Miniport,
      restarted);
  if ( restarted )
  {
    NdisTraceLoggingRareFilterPath(BindContext->FilterDriver, 3LL, restarted);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    a2->BindState.m_LastErrorCode = restarted;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v12);
      if ( (unsigned __int8)byte_1C00A026B >= 4u )
        WPP_SF_Zq(0x15u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, (const wchar_t *)v12[1], v12[0]);
    }
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    if ( a2->BindState.NeedsPauseAction
      && Ndis::BindState::SetPause(&a2->BindState, DatapathPaused, PauseReason_RestartNeeded)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v11);
      if ( (unsigned __int8)byte_1C00A026B >= 4u )
        WPP_SF_Zq(0x14u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, (const wchar_t *)v11[1], v11[0]);
    }
    a2->BindState.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v10);
}
