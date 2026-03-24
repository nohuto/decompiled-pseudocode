/*
 * XREFs of ObReferenceObjectSafe @ 0x14010C110
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140613B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140613E70 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140614368 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCancelMessage @ 0x14061590C (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140616294 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpFlushMessagesPort @ 0x14061932C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1406196F0 (AlpcpDisconnectPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140635340 (AlpcpDispatchNewMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x14068ED34 (AlpcpReferenceConnectedPort.c)
 *     WmipProcessEvent @ 0x14068F1AC (WmipProcessEvent.c)
 *     AlpcpQueryRemoteView @ 0x1406A61F8 (AlpcpQueryRemoteView.c)
 *     CmUnRegisterCallback @ 0x1407EB010 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x140845770 (KiSwapToUmsThread.c)
 *     AlpcpPortQueryServerInfo @ 0x14084ACC8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x14084B2B8 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x1408622E8 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14088EDD0 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14088F14C (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x14092442C (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402D3068 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
