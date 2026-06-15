/*
 * XREFs of WPP_SF_dD @ 0x140039E74
 * Callers:
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140039C38 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_0ba2ce53590232a88bdc3af682a35f09_Traceguids, 11LL, &v5);
}
