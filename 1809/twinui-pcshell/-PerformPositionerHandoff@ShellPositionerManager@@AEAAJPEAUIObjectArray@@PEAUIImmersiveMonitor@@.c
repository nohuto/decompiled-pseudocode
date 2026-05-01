/*
 * XREFs of ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x180334EAC
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x180334D9C (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x180336B00 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___ @ 0x180095310 (ShellPositionerManager--DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerManager::PerformPositionerHandoff(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]
  int v14; // [rsp+58h] [rbp+10h] BYREF

  if ( (*(int (__fastcall **)(__int64 *, int *))(*a2 + 24))(a2, &v14) >= 0 && v14 )
  {
    v12 = a5;
    v13 = a6;
    v11 = a1;
    ShellPositionerManager::DoWorkForEachMonitor__lambda_4a41105171a7dcf0697434a48a681187___(
      a1,
      a2,
      a3,
      a4,
      (__int64)&v11);
  }
  return 0LL;
}
