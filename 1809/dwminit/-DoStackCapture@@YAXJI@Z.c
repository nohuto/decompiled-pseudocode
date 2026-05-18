/*
 * XREFs of ?DoStackCapture@@YAXJI@Z @ 0x18000375C
 * Callers:
 *     ?WaitForLsa@@YAJXZ @ 0x1800018D4 (-WaitForLsa@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001DA4 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002308 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002714 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B10 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180002F80 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogon @ 0x180003150 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x180003360 (DwmpNotifyUserLogoff.c)
 *     DwmpSignalSessionShutdown @ 0x180003F40 (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCapture(DWORD a1, DWORD a2)
{
  DoStackCapture(0, a1, a2);
}
