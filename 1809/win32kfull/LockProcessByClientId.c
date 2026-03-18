/*
 * XREFs of LockProcessByClientId @ 0x1C00B2D44
 * Callers:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C00B1C7C (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C00B1E40 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00B2C88 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C00B3A80 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0124D10 (NtUserSetActiveProcessForMonitor.c)
 *     xxxWaitForInputIdle @ 0x1C012B420 (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01D56F0 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C0212040 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0212200 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C0214650 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C022C218 (xxxActivateDebugger.c)
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
