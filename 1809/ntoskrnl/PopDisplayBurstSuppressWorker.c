/*
 * XREFs of PopDisplayBurstSuppressWorker @ 0x140875D70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408717DC (PopDiagStopCsSleepStudySession.c)
 *     PopIdleCsStateChanged @ 0x140878964 (PopIdleCsStateChanged.c)
 */

char PopDisplayBurstSuppressWorker()
{
  GUID *v0; // rax
  __int64 v1; // rcx
  char v3; // [rsp+30h] [rbp-49h] BYREF
  char v4; // [rsp+31h] [rbp-48h] BYREF
  char v5; // [rsp+32h] [rbp-47h] BYREF
  char v6; // [rsp+33h] [rbp-46h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  char *v8; // [rsp+60h] [rbp-19h]
  __int64 v9; // [rsp+68h] [rbp-11h]
  char *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v12; // [rsp+80h] [rbp+7h] BYREF
  char *v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+A8h] [rbp+2Fh]
  char *v15; // [rsp+B0h] [rbp+37h]
  __int64 v16; // [rsp+B8h] [rbp+3Fh]

  v0 = &NullGuid;
  if ( (GUID *)PopWdiCurrentScenario == &NullGuid )
  {
    if ( !PopDisableDisplayBurstOnPowerSourceChange && pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(v0) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)v0 )
      {
        v3 = PopLidOpened;
        v4 = PopConsoleExternalDisplayConnected;
        v8 = &v3;
        v10 = &v4;
        v9 = 1LL;
        v11 = 1LL;
        LOBYTE(v0) = TlgWrite(&pCallbackContext, &unk_140370ED9, 0LL, 0LL, 4u, &pData);
      }
    }
  }
  else
  {
    PopSleepstudyStopReason = 17;
    PopDiagStopCsSleepStudySession(1, 28, 28);
    if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v5 = PopLidOpened;
      v6 = PopConsoleExternalDisplayConnected;
      v13 = &v5;
      v15 = &v6;
      v14 = 1LL;
      v16 = 1LL;
      TlgWrite(&pCallbackContext, &unk_140370E78, 0LL, 0LL, 4u, &v12);
    }
    PopIdleCsStateChanged(0LL);
    LOBYTE(v1) = 1;
    LOBYTE(v0) = PopIdleCsStateChanged(v1);
  }
  _InterlockedExchange(&PopDisplayBurstSuppressWorkItemQueued, 0);
  return (char)v0;
}
