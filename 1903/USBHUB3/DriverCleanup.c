/*
 * XREFs of DriverCleanup @ 0x1C0001CB0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventUnregister @ 0x1C00012E4 (McGenEventUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     WppCleanupKm @ 0x1C006F480 (WppCleanupKm.c)
 */

ULONG __fastcall DriverCleanup(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  ULONGLONG *v4; // rcx
  ULONG result; // eax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0064130);
  imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v2 + 64));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v3);
  if ( *(_BYTE *)(v2 + 92) )
    SleepstudyHelper_Uninitialize(*(_QWORD *)(v2 + 96));
  result = McGenEventUnregister(v4);
  g_Usbhub3DriverObject = 0LL;
  return result;
}
