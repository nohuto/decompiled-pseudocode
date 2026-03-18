/*
 * XREFs of UserDispatchMITCompletion @ 0x1C00316A0
 * Callers:
 *     NtMITDispatchCompletion @ 0x1C0031500 (NtMITDispatchCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0031710 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 */

__int64 __fastcall UserDispatchMITCompletion(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x10u,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  result = IOCPDispatcher::Dispatch(WPP_MAIN_CB.Queue.Wcb.DeviceContext, a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             1u,
             0x11u,
             (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  return result;
}
