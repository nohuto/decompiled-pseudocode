/*
 * XREFs of UserDispatchMITCompletion @ 0x1C003A1F0
 * Callers:
 *     NtMITDispatchCompletion @ 0x1C003A170 (NtMITDispatchCompletion.c)
 * Callees:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C003A340 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UserDispatchMITCompletion(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  int v5; // edx

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      16,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  }
  result = IOCPDispatcher::Dispatch(gpIOCPDispatcher, a1, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v5,
             1,
             17,
             (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  }
  return result;
}
