/*
 * XREFs of ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C003FAE8 (ndisInitializeMiniportRestartAttributes.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C0098EA4 (WPP_RECORDER_SF_LZq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 */

void __fastcall ndisMRestartMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  int v4; // edx
  int v5; // edi
  int v6; // edx
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  int v8; // r8d

  ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a2);
  a2->MiniportMacOptionsToPreserve = a1->MacOptions & 0x80;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      28,
      18,
      (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v5 = ndisMRestartMiniportInner(a1, &a2->Attributes);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      28,
      19,
      (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
      (char)a1,
      v5);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v5 )
  {
    a1->Bindings.Miniport.m_LastErrorCode = v5;
    if ( Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C00E677B >= 4u
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_LZq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v7,
        v8,
        0x14u,
        (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
        v5,
        &a1->pAdapterInstanceName->Length,
        a1);
    }
  }
  else
  {
    a1->Bindings.Miniport.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v7);
}
