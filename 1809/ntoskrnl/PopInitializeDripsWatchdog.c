/*
 * XREFs of PopInitializeDripsWatchdog @ 0x1409DFB00
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     PopCapturePlatformRole @ 0x1406CCDD4 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x1406EE414 (PopIsDirectedDripsEnabled.c)
 *     PopInitializeTimer @ 0x14075A638 (PopInitializeTimer.c)
 *     PopDripsWatchdogInitializeActions @ 0x1409F8E18 (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x1409F8E78 (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x1409F8F78 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

void PopInitializeDripsWatchdog()
{
  int v0; // ebx
  int v1; // eax
  int v2; // eax

  if ( PopDirectedDripsEnableV2 )
  {
    ExInitializeResourceLite(&PopDripsWatchdogContext);
    if ( !PopDirectedDripsEnableV2 )
      return;
    if ( !PopPlatformAoAc )
      goto LABEL_4;
    if ( (int)PopDripsWatchdogInitializeActions() >= 0
      && (int)PopDripsWatchdogInitializeCallbackTimer() >= 0
      && (int)PopDripsWatchdogInitializeDiagnosticTimer() >= 0 )
    {
      dword_140417D28 |= 2u;
LABEL_4:
      dword_140417D28 |= 1u;
    }
  }
  else if ( PopPlatformAoAc )
  {
    v0 = PopDripsWatchdogAction & 0x2FF;
    if ( (unsigned int)(PopPlatformAoAcOverride - 1) <= 0xFFFFFFFD )
    {
      if ( (PopDripsWatchdogAction & 0x10) != 0 )
        v0 |= 2u;
      else
        v0 = PopDripsWatchdogAction & 0x2FD;
    }
    if ( (unsigned __int8)PopIsDirectedDripsEnabled() )
    {
      v0 |= 0x100u;
      v1 = PopCapturePlatformRole();
      if ( v1 != 2 && v1 != 8 )
        v0 |= 1u;
    }
    ExInitializeResourceLite(&stru_1404C7888);
    v2 = PopDripsCallbackInterval;
    if ( PopDripsCallbackInterval >= (unsigned int)PopDripsWatchdogTimeout || !PopDripsCallbackInterval )
      v2 = PopDripsWatchdogTimeout;
    dword_1404C7814 = v0;
    PopDripsWatchdog = v2;
    PopInitializeTimer(
      (__int64)&unk_1404C78F0,
      (__int64)PopDripsWatchdogTimerCallbackRoutine,
      (__int64)&PopDripsWatchdog,
      (__int64)PopDripsWatchdogWorkerRoutine,
      (__int64)&PopDripsWatchdog);
  }
}
