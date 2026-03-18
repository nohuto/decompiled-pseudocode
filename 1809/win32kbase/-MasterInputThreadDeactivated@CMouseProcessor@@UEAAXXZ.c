/*
 * XREFs of ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C0094500
 * Callers:
 *     <none>
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x1C0094588 (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MasterInputThreadDeactivated(CMouseProcessor *this)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  CMouseProcessor::HandleMITTermination(this);
}
