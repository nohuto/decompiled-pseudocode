/*
 * XREFs of ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C
 * Callers:
 *     _lambda_0363cee2f58c69e5cfc10338858e366e_::operator() @ 0x1C0091FE4 (_lambda_0363cee2f58c69e5cfc10338858e366e_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00923E4 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C0094310 (ndisQueuedStatusUnbindAdapter.c)
 *     NdisMSetMiniportSecondary @ 0x1C00988C0 (NdisMSetMiniportSecondary.c)
 *     ndisBindRequest @ 0x1C00A49B4 (ndisBindRequest.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FDBB0 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00FDDBC (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE080 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE1E4 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FE494 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FE86C (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FEA98 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0104448 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0104620 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01056FC (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010680C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     _lambda_4fe5ced0c989fb4d1002a02b171f3be2_::_lambda_invoker_cdecl_ @ 0x1C010AE60 (_lambda_4fe5ced0c989fb4d1002a02b171f3be2_--_lambda_invoker_cdecl_.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C0115B9C (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C01168E0 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C01174F0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 */

bool __fastcall Ndis::BindState::SetBinding(
        Ndis::BindState *this,
        enum BINDING_ENABLED_OR_DISABLED a2,
        enum NDIS_DO_NOT_BIND_REASON a3)
{
  unsigned int m_unbindReasons; // r11d
  unsigned int v5; // r10d
  bool result; // al

  m_unbindReasons = this->m_unbindReasons;
  v5 = m_unbindReasons;
  if ( a2 == BindingEnabled )
  {
    v5 = m_unbindReasons & ~a3;
    goto LABEL_4;
  }
  if ( a2 == BindingDisabled )
  {
    v5 = a3 | m_unbindReasons;
LABEL_4:
    this->m_unbindReasons = v5;
  }
  if ( (m_unbindReasons != 0) == (v5 != 0) && this->Miniport )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_LL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xEu,
        (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
        m_unbindReasons,
        v5);
  }
  result = 1;
  this->Miniport->BindEngine.m_isDirty = 1;
  return result;
}
