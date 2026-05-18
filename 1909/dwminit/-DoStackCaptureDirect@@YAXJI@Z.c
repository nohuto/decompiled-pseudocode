/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003790
 * Callers:
 *     ?WaitForLsa@@YAJXZ @ 0x1800018C4 (-WaitForLsa@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001D94 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800022F8 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800026E8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002AE0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180002F50 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogon @ 0x180003120 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x180003330 (DwmpNotifyUserLogoff.c)
 *     DwmpSignalSessionShutdown @ 0x180003ED4 (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(DWORD a1, DWORD a2)
{
  PVOID retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
