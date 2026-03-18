/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C0218860
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01BB32C (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01CA560 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWorker @ 0x1C01CB810 (_InitializeTouchInjectionWorker.c)
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
  __int64 v11; // r8
  __int64 v12; // r9

  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v4 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1);
    v5 = 0;
    UserSetLastError(87LL, v10, v11, v12);
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
