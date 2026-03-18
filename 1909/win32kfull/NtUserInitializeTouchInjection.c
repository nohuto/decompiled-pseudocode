/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C022FFB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01CF5A0 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DDE38 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWorker @ 0x1C01DF570 (_InitializeTouchInjectionWorker.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1);
    v5 = 0;
    UserSetLastError(87LL, v7, v8, v9);
  }
  else
  {
    CheckCurrentInjectionConfiguration();
    v5 = InitializeTouchInjectionWorker(a1, a2, v4);
    TraceLoggingTouchInjection(0, 1, a1);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
