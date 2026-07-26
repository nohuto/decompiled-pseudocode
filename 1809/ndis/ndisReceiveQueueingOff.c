/*
 * XREFs of ndisReceiveQueueingOff @ 0x1C0050A54
 * Callers:
 *     ndisBindUnbindPeriodicReceives @ 0x1C004FC88 (ndisBindUnbindPeriodicReceives.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0050C8C (ndisSwitchMiniportReceiveFunction.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C0050FE0 (ndisTracePeriodicRcvOnOff.c)
 */

bool __fastcall ndisReceiveQueueingOff(__int64 a1)
{
  char v2; // al
  void (__fastcall *v3)(__int64, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rcx
  bool v4; // zf
  bool result; // al

  *(_DWORD *)(a1 + 3184) = 0;
  if ( BYTE2(dword_1C00A2098) )
    ndisTracePeriodicRcvOnOff(a1, 0LL, 0LL, 0LL);
  v2 = *(_BYTE *)(a1 + 2003);
  v3 = ndisMDispatchReceiveNetBufferListsWithLock;
  v4 = v2 == 0;
  if ( !v2 )
    v3 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  result = v2 == 0;
  *(_BYTE *)(a1 + 2681) = v4;
  *(_QWORD *)(a1 + 2152) = v3;
  *(_QWORD *)(a1 + 2160) = v3;
  --*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
  return result;
}
