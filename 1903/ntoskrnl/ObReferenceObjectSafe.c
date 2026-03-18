/*
 * XREFs of ObReferenceObjectSafe @ 0x140104560
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1405E0800 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1405E20D0 (AlpcpDispatchNewMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1405E4980 (AlpcpReferenceConnectedPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x140645950 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140645CD0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1406461E4 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140647F04 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpDisconnectPort @ 0x14064986C (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x140649E08 (AlpcpFlushMessagesPort.c)
 *     AlpcpQueryRemoteView @ 0x1406CD05C (AlpcpQueryRemoteView.c)
 *     WmipProcessEvent @ 0x14071A5BC (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x140825B50 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 *     AlpcpPortQueryServerInfo @ 0x140886240 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140886770 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x14089ED8C (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CD50C (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1409635AC (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
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
