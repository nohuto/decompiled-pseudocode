/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x14086DCBC
 * Callers:
 *     PopBroadcastInputSuppressionCallback @ 0x14071F1C0 (PopBroadcastInputSuppressionCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140764360 (PopExternalMonitorUpdatedWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopBroadcastSessionInfo @ 0x14072985C (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x1408751EC (PopTraceInputSuppressionActionUpdate.c)
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
  int v10; // [rsp+40h] [rbp-48h] BYREF
  GUID v11; // [rsp+48h] [rbp-40h] BYREF
  int v12; // [rsp+58h] [rbp-30h]

  PopAcquirePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
  v0 = PopConsoleExternalDisplayConnected;
  v1 = PopLidOpened == 0;
  v2 = 1;
  v3 = dword_1404180CC == 1;
  v4 = PopConsoleDisplayState == 0;
  if ( PopErrataReportingIncorrectLidState
    || !PopIgnoreLidStateForInputSuppression && PopLidOpened
    || dword_1404180CC != 1
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
    ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, (__int64)&PopInputSuppressionRequired, 4LL);
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
        v10 = v2;
        ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, (__int64)&v10, 4LL);
        v12 = v10;
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
