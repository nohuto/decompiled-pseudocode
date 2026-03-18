/*
 * XREFs of ObReferenceObjectSafe @ 0x140107F50
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1405E28A0 (AlpcpDispatchNewMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1405E5150 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1406591CC (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x14065978C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140659D10 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x14065BA68 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpDisconnectPort @ 0x14065D4DC (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x14065DA78 (AlpcpFlushMessagesPort.c)
 *     AlpcpQueryRemoteView @ 0x1406CBE8C (AlpcpQueryRemoteView.c)
 *     WmipProcessEvent @ 0x14071C3AC (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x140825250 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x140880460 (KiSwapToUmsThread.c)
 *     AlpcpPortQueryServerInfo @ 0x140885A4C (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140885F9C (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x14089E5CC (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CCA64 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CCDEC (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1409635AC (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
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
