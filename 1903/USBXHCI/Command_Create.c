/*
 * XREFs of Command_Create @ 0x1C005E170
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_IsProxyCommandRing @ 0x1C000A5FC (Command_IsProxyCommandRing.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilCommand_Create @ 0x1C000BEC4 (XilCommand_Create.c)
 *     DynamicLock_Create @ 0x1C004702C (DynamicLock_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C005E324 (Command_CreateCommandWatchdogTimer.c)
 */

__int64 __fastcall Command_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int CommandWatchdogTimer; // ebx
  __int64 v6; // rdi
  char IsProxyCommandRing; // al
  __int64 v8; // rdx
  __int64 *v9; // r9
  int v11; // [rsp+28h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+34h] [rbp-3Ch]
  int v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  void *v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF

  v20 = a1;
  v19 = off_1C00561F8;
  v17 = *(_QWORD *)(a2 + 8);
  v13 = 0LL;
  v14 = 0;
  v18 = 0LL;
  v12 = 56;
  v15 = 1;
  v16 = 1;
  CommandWatchdogTimer = (*(__int64 (__fastcall **)(unsigned __int64, int *, __int64 *))(WdfFunctions_01023 + 1656))(
                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                           &v12,
                           &v20);
  if ( CommandWatchdogTimer >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v20,
           off_1C00561F8);
    *(_QWORD *)v6 = v20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a2 + 72),
        5u,
        7u,
        0xBu,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
        v20);
    *(_QWORD *)(v6 + 8) = a2;
    CommandWatchdogTimer = XilCommand_Create(v6);
    if ( CommandWatchdogTimer >= 0 )
    {
      IsProxyCommandRing = Command_IsProxyCommandRing(v6);
      CommandWatchdogTimer = DynamicLock_Create(v20, v8, IsProxyCommandRing != 0, v9);
      if ( CommandWatchdogTimer >= 0 )
      {
        CommandWatchdogTimer = Command_CreateCommandWatchdogTimer(v6);
        if ( CommandWatchdogTimer >= 0 )
        {
          *(_DWORD *)(v6 + 36) = 1;
          *a3 = v6;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = CommandWatchdogTimer;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 72),
      2u,
      7u,
      0xAu,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      v11);
  }
  return (unsigned int)CommandWatchdogTimer;
}
