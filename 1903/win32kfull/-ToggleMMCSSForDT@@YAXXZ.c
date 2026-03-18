/*
 * XREFs of ?ToggleMMCSSForDT@@YAXXZ @ 0x1C0111EDC
 * Callers:
 *     _EnableSessionForMMCSS @ 0x1C0111E50 (_EnableSessionForMMCSS.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ToggleMMCSSForDT(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  KeSetEvent(qword_1C032C630, 1, 0);
}
