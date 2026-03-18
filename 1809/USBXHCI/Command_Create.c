/*
 * XREFs of Command_Create @ 0x1C0057170
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_IsProxyCommandRing @ 0x1C0008690 (Command_IsProxyCommandRing.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilCommand_Create @ 0x1C0009E10 (XilCommand_Create.c)
 *     DynamicLock_Create @ 0x1C00417E0 (DynamicLock_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C00572FC (Command_CreateCommandWatchdogTimer.c)
 */

__int64 __fastcall Command_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // eax
  int CommandWatchdogTimer; // ebx
  __int64 v7; // rdi
  char IsProxyCommandRing; // al
  __int64 v9; // rdx
  __int64 *v10; // r9
  _QWORD v12[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF

  v13 = a1;
  memset(v12, 0, 0x38uLL);
  v12[6] = off_1C004F1D0;
  v12[4] = *(_QWORD *)(a2 + 8);
  LODWORD(v12[0]) = 56;
  v12[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v12,
         &v13);
  CommandWatchdogTimer = v5;
  if ( v5 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v13,
           off_1C004F1D0);
    *(_QWORD *)v7 = v13;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a2 + 72),
        5u,
        7u,
        0xBu,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
        v13);
    *(_QWORD *)(v7 + 8) = a2;
    CommandWatchdogTimer = XilCommand_Create(v7);
    if ( CommandWatchdogTimer >= 0 )
    {
      IsProxyCommandRing = Command_IsProxyCommandRing(v7);
      CommandWatchdogTimer = DynamicLock_Create(v13, v9, IsProxyCommandRing != 0, v10);
      if ( CommandWatchdogTimer >= 0 )
      {
        CommandWatchdogTimer = Command_CreateCommandWatchdogTimer(v7);
        if ( CommandWatchdogTimer >= 0 )
        {
          *(_DWORD *)(v7 + 36) = 1;
          *a3 = v7;
        }
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), 2u, 7u, 0xAu, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids, v5);
  }
  return (unsigned int)CommandWatchdogTimer;
}
