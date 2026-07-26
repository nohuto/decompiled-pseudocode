/*
 * XREFs of ndisTracePeriodicRcvOnOff @ 0x1C0050FE0
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C001E5FC (ndisConfigurePeriodicReceives.c)
 *     ndisReceiveQueueingOff @ 0x1C0050A54 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C0050AC0 (ndisReceiveQueueingOn.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0050C8C (ndisSwitchMiniportReceiveFunction.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

NTSTATUS __fastcall ndisTracePeriodicRcvOnOff(__int64 a1, char a2, int a3, __int64 a4)
{
  _QWORD WnodeEventItem[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  BYTE4(WnodeEventItem[0]) = 19;
  BYTE4(WnodeEventItem[6]) = a2;
  WnodeEventItem[8] = a4;
  LODWORD(WnodeEventItem[7]) = a3;
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  LODWORD(WnodeEventItem[9]) = KeGetPcr()->Prcb.Number;
  LOWORD(WnodeEventItem[0]) = 80;
  if ( a1 )
    LODWORD(WnodeEventItem[6]) = (*(_QWORD *)(a1 + 4056) >> 24) & 0xFFFFFF;
  WnodeEventItem[1] = qword_1C00A2090;
  return IoWMIWriteEvent(WnodeEventItem);
}
