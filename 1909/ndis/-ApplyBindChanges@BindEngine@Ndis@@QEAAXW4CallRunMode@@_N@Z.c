/*
 * XREFs of ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001295C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0037D8C (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisIMInitializeDeviceInstanceInternal @ 0x1C0080470 (ndisIMInitializeDeviceInstanceInternal.c)
 *     NdisEnumerateFilterModules @ 0x1C008CEE0 (NdisEnumerateFilterModules.c)
 *     _lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_ @ 0x1C0092190 (_lambda_1f70e7b164a43a0d336a36d71bfafc03_--_lambda_invoker_cdecl_.c)
 *     _lambda_0363cee2f58c69e5cfc10338858e366e_::operator() @ 0x1C00921B4 (_lambda_0363cee2f58c69e5cfc10338858e366e_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00925B4 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00944E0 (ndisQueuedStatusUnbindAdapter.c)
 *     NdisMSetMiniportSecondary @ 0x1C0098A90 (NdisMSetMiniportSecondary.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C009EDB0 (NdisWdfMiniportDataPathPause.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C009EE90 (NdisWdfMiniportDataPathStart.c)
 *     ndisBindRequest @ 0x1C00A4B84 (ndisBindRequest.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5BE0 (ndisWdfDevicePowerOn.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00FC564 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C01080E0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C01082D0 (_lambda_3586b9b7f2fd6000f93b66a493a8f736_--_lambda_invoker_cdecl_.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C010A270 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     _lambda_adb42f86cf839cbbe3c588eaa9665cd9_::_lambda_invoker_cdecl_ @ 0x1C010C4C0 (_lambda_adb42f86cf839cbbe3c588eaa9665cd9_--_lambda_invoker_cdecl_.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C0115B9C (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C01168E0 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0116BA4 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C01172C4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C01174F0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     _lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_ @ 0x1C011DE60 (_lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_--_lambda_invoker_cdecl_.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C00B93D0 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C00B9798 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00BAAC0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00BB2E8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C00FCFA4 (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010A050 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C0119408 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::ApplyBindChanges(Ndis::BindEngine *this, enum CallRunMode a2, char a3)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rdi
  _NDIS_MINIPORT_BLOCK *v7; // rbx
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 && a2 == RunSynchronous )
  {
    m_miniport = this->m_miniport;
    if ( this->m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendStop(this->m_miniport, 13);
    if ( m_miniport->AoAc )
      ndisAoAcStop(m_miniport, 13, RunAsynchronous);
  }
  v8.m_State = Unlocked;
  v8.m_Lock = &this->m_lock;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  if ( this->m_bindThread )
  {
    KLockHolder::ReleaseExclusive(&v8);
    if ( a2 == RunSynchronous )
      KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&this->m_bindCompleteEvent);
  }
  else
  {
    Ndis::BindEngine::DispatchPendingWork(this, a2, (struct KLockThisExclusive *)&v8);
  }
  if ( a3 && a2 == RunSynchronous )
  {
    v7 = this->m_miniport;
    if ( v7->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)v7, 13);
    if ( v7->AoAc )
      ndisAoAcClearStop(v7, NdisSSBindChanges);
  }
  KLockHolder::~KLockHolder(&v8);
}
