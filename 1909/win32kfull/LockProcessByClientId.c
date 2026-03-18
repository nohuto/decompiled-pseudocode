/*
 * XREFs of LockProcessByClientId @ 0x1C0020CE8
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C000A7E0 (NtUserCheckProcessForClipboardAccess.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C001D034 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0020B80 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C0021240 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0108A40 (NtUserSetActiveProcessForMonitor.c)
 *     xxxWaitForInputIdle @ 0x1C010DAA0 (xxxWaitForInputIdle.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0137440 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     GetConsoleDesktop @ 0x1C01EACB0 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C0229A70 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C022BDF0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C024465C (xxxActivateDebugger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // edi

  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 || (unsigned int)PsGetProcessSessionId(*a2) == gSessionId )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
