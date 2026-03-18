/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x1C0007C0C
 * Callers:
 *     InitializeInputComponents @ 0x1C0007964 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 CCursorClip::Initialize(void)
{
  _QWORD *v0; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int128 v5; // [rsp+20h] [rbp-28h]

  v0 = (_QWORD *)Win32AllocPoolZInit(0x60uLL);
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    memset(v0, 0, 0x20uLL);
    v2[5] = 0LL;
    v2[4] = &CPushLock::`vftable';
    v2[6] = 0LL;
    v2[7] = 0LL;
    v2[8] = 0LL;
    *((_DWORD *)v2 + 18) = 0;
    v2[10] = 0LL;
    *((_DWORD *)v2 + 22) = 0;
    *((_WORD *)v2 + 46) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  gpCursorClip = (CCursorClip *)v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 88LL) )
      MicrosoftTelemetryAssertTriggeredMsgKM("It is expected that this API either NOT called at all or called by provider before destination opened");
    RIMLockExclusive(v3 + 24);
    *(_DWORD *)(v3 + 96) = 0;
    *((_QWORD *)&v5 + 1) = lambda_0106af77700bc4a134663e8cc2385985_::_lambda_invoker_cdecl_;
    LODWORD(v5) = 2;
    *(_OWORD *)(v3 + 104) = v5;
    *(_QWORD *)(v3 + 120) = 0LL;
    *(_QWORD *)(v3 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 24, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
