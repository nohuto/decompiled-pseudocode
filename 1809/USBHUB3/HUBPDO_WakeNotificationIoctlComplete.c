/*
 * XREFs of HUBPDO_WakeNotificationIoctlComplete @ 0x1C00179E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBPDO_CompleteWaitWake @ 0x1C0017920 (HUBPDO_CompleteWaitWake.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_WakeNotificationIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  struct _KEVENT *v7; // rax
  int v9; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  HUBPDO_CompleteWaitWake(a4);
  v7 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           a1,
                           off_1C005F228);
  KeSetEvent(v7 + 1, 0, 0);
  v9 = v4;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
           4u,
           5u,
           0x81u,
           (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
           v9);
}
