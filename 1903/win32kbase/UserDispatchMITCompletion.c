/*
 * XREFs of UserDispatchMITCompletion @ 0x1C00345D0
 * Callers:
 *     NtMITDispatchCompletion @ 0x1C0032F90 (NtMITDispatchCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0034660 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 */

__int64 __fastcall UserDispatchMITCompletion(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  int v5; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2,
      16,
      (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
  result = IOCPDispatcher::Dispatch(gpIOCPDispatcher, a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v5,
               2,
               17,
               (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
    }
  }
  return result;
}
