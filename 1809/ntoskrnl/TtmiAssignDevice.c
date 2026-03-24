/*
 * XREFs of TtmiAssignDevice @ 0x14087D4DC
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x140881AE0 (TtmpDispatchAssignDevice.c)
 * Callees:
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 *     TtmpFindDeviceByDeviceId @ 0x14087E01C (TtmpFindDeviceByDeviceId.c)
 *     TtmpPublishDeviceEvent @ 0x14087E240 (TtmpPublishDeviceEvent.c)
 *     TtmiScheduleSessionWorker @ 0x140880220 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceToTerminalAssigned @ 0x140883A58 (TtmiLogDeviceToTerminalAssigned.c)
 */

__int64 __fastcall TtmiAssignDevice(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r10
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned __int8)TtmpFindDeviceByDeviceId(a1, a3, &v10) )
  {
    v7 = v10;
    v8 = v10;
    *(_DWORD *)(v10 + 596) = *(_DWORD *)(v5 + 28);
    TtmpPublishDeviceEvent(a1, 0LL, v8, 4LL);
    TtmiLogDeviceToTerminalAssigned(*(unsigned int *)(v7 + 596), a3);
    *(_DWORD *)(v7 + 600) |= 0x60u;
    TtmiScheduleSessionWorker(a1, 1LL);
  }
  else
  {
    v6 = -1073741275;
    TtmiLogError("TtmiAssignDevice", 1109, -1, -1073741275);
  }
  return v6;
}
