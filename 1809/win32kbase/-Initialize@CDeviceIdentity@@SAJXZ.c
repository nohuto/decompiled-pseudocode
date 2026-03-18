/*
 * XREFs of ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0007D88
 * Callers:
 *     InitializeInputComponents @ 0x1C0007964 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 CDeviceIdentity::Initialize(void)
{
  unsigned int v0; // edi
  __int64 v1; // rbp
  struct _KDPC *v3; // rsi
  __int128 v4; // [rsp+20h] [rbp-28h]

  v0 = 0;
  if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v3 = (struct _KDPC *)Win32AllocPool(24LL, 1883530569LL);
  if ( v3 )
  {
    v3->ProcessorHistory = 0LL;
    *(_QWORD *)&v3->TargetInfoAsUlong = 0LL;
    v3->DpcListEntry.Next = 0LL;
    LODWORD(v3->ProcessorHistory) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = v3;
  if ( !v3 )
    return (unsigned int)-1073741801;
  v1 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 48LL) )
    MicrosoftTelemetryAssertTriggeredMsgKM("It is expected that this API either NOT called at all or called by provider before destination opened");
  RIMLockExclusive(v1 + 24);
  *(_DWORD *)(v1 + 56) = 1;
  *((_QWORD *)&v4 + 1) = lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_;
  LODWORD(v4) = 2;
  *(_OWORD *)(v1 + 64) = v4;
  *(_QWORD *)(v1 + 80) = v3;
  *(_QWORD *)(v1 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 24, 0LL);
  KeLeaveCriticalRegion();
  if ( !WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
    return (unsigned int)-1073741801;
  return v0;
}
