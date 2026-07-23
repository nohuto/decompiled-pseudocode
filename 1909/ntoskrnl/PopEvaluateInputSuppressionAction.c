/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x1408AA074
 * Callers:
 *     PopBroadcastInputSuppressionCallback @ 0x14073D1E0 (PopBroadcastInputSuppressionCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x14078D0A0 (PopExternalMonitorUpdatedWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopBroadcastSessionInfo @ 0x14075F71C (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x1408B17DC (PopTraceInputSuppressionActionUpdate.c)
 */

void PopEvaluateInputSuppressionAction()
{
  char v0; // r14
  bool v1; // si
  int v2; // ebx
  bool v3; // bp
  char v4; // r15
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int Buffer; // [rsp+40h] [rbp-48h] BYREF
  GUID v11; // [rsp+48h] [rbp-40h] BYREF
  int v12; // [rsp+58h] [rbp-30h]

  v11 = (GUID)0LL;
  v12 = 0;
  PopAcquirePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
  v0 = PopConsoleExternalDisplayConnected;
  v1 = PopLidOpened == 0;
  v2 = 1;
  v3 = dword_140443A2C == 1;
  v4 = PopConsoleDisplayState == 0;
  if ( PopErrataReportingIncorrectLidState
    || !PopIgnoreLidStateForInputSuppression && PopLidOpened
    || dword_140443A2C != 1
    || PopConsoleExternalDisplayConnected
    || (v5 = 1, PopConsoleDisplayState) )
  {
    v5 = 0;
  }
  if ( !PopEnableInputSuppression && v5 == 1 )
    v5 = 2;
  PopReleasePolicyLock();
  if ( PopInputSuppressionRequired != v5 )
  {
    LOBYTE(v9) = v0;
    LOBYTE(v8) = v3;
    LOBYTE(v6) = v1;
    PopInputSuppressionRequired = v5;
    PopTraceInputSuppressionActionUpdate(v7, v6, v8, v9, v4);
    ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, &PopInputSuppressionRequired, 4u, 0LL, 0LL, 0, 0);
    if ( PopEnableInputSuppression )
    {
      if ( PopInputSuppressionRequired != 1 )
      {
        if ( PopInputSuppressionRequired )
          goto LABEL_17;
        if ( !PopInputSuppressionActionCount )
          goto LABEL_18;
      }
      ++PopInputSuppressionActionCount;
LABEL_17:
      if ( PopInputSuppressionRequired == 1 )
      {
LABEL_19:
        Buffer = v2;
        ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
        v12 = Buffer;
        v11 = GUID_INPUT_SUPPRESS_REQUESTED;
        PopBroadcastSessionInfo(0, 20, (__int64)&v11);
        goto LABEL_20;
      }
LABEL_18:
      v2 = 0;
      goto LABEL_19;
    }
  }
LABEL_20:
  PopReleaseRwLock((ULONG_PTR)&PopInputSuppressionLock);
}
