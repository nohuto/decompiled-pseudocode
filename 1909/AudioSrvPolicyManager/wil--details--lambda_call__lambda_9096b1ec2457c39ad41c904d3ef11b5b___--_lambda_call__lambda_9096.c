/*
 * XREFs of wil::details::lambda_call__lambda_9096b1ec2457c39ad41c904d3ef11b5b___::_lambda_call__lambda_9096b1ec2457c39ad41c904d3ef11b5b___ @ 0x180007748
 * Callers:
 *     _CWindowsPolicyManager::InitAccessibilityAudioSettings_::_1_::dtor$0 @ 0x180035C93 (_CWindowsPolicyManager--InitAccessibilityAudioSettings_--_1_--dtor$0.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$14 @ 0x180036629 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$14.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$2 @ 0x180036D1E (_CApplicationManager--RpcGetProcess_--_1_--dtor$2.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$3 @ 0x180037923 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::lambda_call__lambda_9096b1ec2457c39ad41c904d3ef11b5b___::_lambda_call__lambda_9096b1ec2457c39ad41c904d3ef11b5b___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
