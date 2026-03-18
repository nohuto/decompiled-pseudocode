/*
 * XREFs of SetThreadPriority @ 0x1C008E850
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1C008E960 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void SetThreadPriority()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
  if ( *(_DWORD *)(v0 + 16) == 1 )
  {
    if ( CInputThread::_CalledOnInputThread((CInputThread *)v0) )
      MicrosoftTelemetryAssertTriggeredMsgKM("Expected to be called on non-DWM-input thread. CSRSSS expected caller");
    SetThreadBasePriority(**(PETHREAD **)(v0 + 24));
  }
  *(_QWORD *)(v0 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v0, 0LL);
  KeLeaveCriticalRegion();
}
