/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C0050AC0
 * Callers:
 *     ndisBindUnbindPeriodicReceives @ 0x1C004FC88 (ndisBindUnbindPeriodicReceives.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0050C8C (ndisSwitchMiniportReceiveFunction.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C0050FE0 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2681) = 0;
  *(_QWORD *)(a1 + 2152) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3176) = WPP_MAIN_CB.DeviceQueue.Lock;
  ++*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
  WPP_MAIN_CB.DeviceQueue.Lock = a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3244) == 1) + 1;
  *(_DWORD *)(a1 + 3184) = result;
  if ( BYTE2(dword_1C00A2098) )
  {
    LOBYTE(a2) = 1;
    return ndisTracePeriodicRcvOnOff(
             a1,
             a2,
             *(unsigned int *)(&WPP_MAIN_CB.DeviceQueue.Size + 1),
             *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
  }
  return result;
}
