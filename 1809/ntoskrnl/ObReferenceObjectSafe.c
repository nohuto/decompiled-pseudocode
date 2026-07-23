/*
 * XREFs of ObReferenceObjectSafe @ 0x14010C190
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140614B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140614E70 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140615368 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140617294 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpFlushMessagesPort @ 0x14061A32C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14061A6F0 (AlpcpDisconnectPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140636360 (AlpcpDispatchNewMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x14068FEF4 (AlpcpReferenceConnectedPort.c)
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 *     AlpcpQueryRemoteView @ 0x1406A7498 (AlpcpQueryRemoteView.c)
 *     CmUnRegisterCallback @ 0x1407EC210 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 *     AlpcpPortQueryServerInfo @ 0x14084BF28 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x14084C518 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x140863548 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140890030 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408903AC (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x14092542C (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
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
