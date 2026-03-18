/*
 * XREFs of LockProcessByClientId @ 0x1C001A788
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C000A7F0 (NtUserCheckProcessForClipboardAccess.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C0019264 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C0019590 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C001A620 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C012AEF0 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C012DBD0 (NtUserSetActiveProcessForMonitor.c)
 *     xxxWaitForInputIdle @ 0x1C0132FA0 (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01EAE30 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C022A090 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C022C410 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C0244D9C (xxxActivateDebugger.c)
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
