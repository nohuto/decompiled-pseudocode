/*
 * XREFs of LockProcessByClientId @ 0x1C0012364
 * Callers:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C0010298 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C0011820 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00122C0 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     _AllowSetForegroundWindow @ 0x1C006E100 (_AllowSetForegroundWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C00BD950 (NtUserSetActiveProcessForMonitor.c)
 *     xxxWaitForInputIdle @ 0x1C010B9B4 (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01B2FC0 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C01EC000 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C01EC190 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01EE160 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C020334C (xxxActivateDebugger.c)
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
