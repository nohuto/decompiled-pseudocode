/*
 * XREFs of ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C009539C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputThread::RevokeThreadAsInput(CInputThread *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
  if ( *(_DWORD *)(v1 + 16) != 3 )
    MicrosoftTelemetryAssertTriggeredMsgKM("We expect that first we would get asked to de-activate then destroyed. True even in the DWM crash case");
  if ( !CInputThread::_CalledOnInputThread((CInputThread *)v1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  memset((void *)(v1 + 16), 0, 0x20uLL);
  *(_QWORD *)(v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
