/*
 * XREFs of ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x180395394
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x180395268 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x180397100 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___ @ 0x18039396C (ShellPositionerManager--DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___.c)
 */

__int64 __fastcall ShellPositionerManager::PerformPositionerHandoff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  __int128 v12; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+88h] [rbp+10h] BYREF

  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 24LL))(a2, &v15) >= 0 && v15 )
  {
    *((_QWORD *)&v12 + 1) = __PAIR64__(a7, a6);
    *(_QWORD *)&v12 = a1;
    v14 = a5;
    v13 = v12;
    ShellPositionerManager::DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___(
      a1,
      a2,
      a3,
      a4,
      (__int64)&v13);
  }
  return 0LL;
}
