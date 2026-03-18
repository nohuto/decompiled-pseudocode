/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C01F1490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C019A134 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01A8428 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWorker @ 0x1C01A9298 (_InitializeTouchInjectionWorker.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx

  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1);
    v5 = 0;
    UserSetLastError(87LL, v10);
  }
  else
  {
    CheckCurrentInjectionConfiguration();
    v5 = InitializeTouchInjectionWorker(a1, a2, v4);
    TraceLoggingTouchInjection(0, 1, a1);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
