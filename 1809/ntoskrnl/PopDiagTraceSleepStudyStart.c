/*
 * XREFs of PopDiagTraceSleepStudyStart @ 0x1408753E0
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x1402E3000 (PopWdiTimerWorkerThread.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408714D0 (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStart()
{
  __int64 v0; // [rsp+30h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  char *v2; // [rsp+50h] [rbp-29h]
  int v3; // [rsp+58h] [rbp-21h]
  int v4; // [rsp+5Ch] [rbp-1Dh]
  int *v5; // [rsp+60h] [rbp-19h]
  int v6; // [rsp+68h] [rbp-11h]
  int v7; // [rsp+6Ch] [rbp-Dh]
  int *v8; // [rsp+70h] [rbp-9h]
  int v9; // [rsp+78h] [rbp-1h]
  int v10; // [rsp+7Ch] [rbp+3h]
  int *v11; // [rsp+80h] [rbp+7h]
  int v12; // [rsp+88h] [rbp+Fh]
  int v13; // [rsp+8Ch] [rbp+13h]
  __int64 *v14; // [rsp+90h] [rbp+17h]
  int v15; // [rsp+98h] [rbp+1Fh]
  int v16; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 v17; // [rsp+A0h] [rbp+27h]
  int v18; // [rsp+A8h] [rbp+2Fh]
  int v19; // [rsp+ACh] [rbp+33h]
  __int64 *v20; // [rsp+B0h] [rbp+37h]
  int v21; // [rsp+B8h] [rbp+3Fh]
  int v22; // [rsp+BCh] [rbp+43h]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_START) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      v7 = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v0 = MEMORY[0xFFFFF78000000014];
      UserData.Ptr = PopWdiCurrentScenario;
      v2 = &PopWdiCurrentScenarioInstanceId;
      v5 = &PopPdcLastCsEnterReason;
      v8 = &PopCsConsumption;
      v11 = &dword_14043D520;
      v14 = &PopWdiCurrentScenarioInstanceIdV2;
      v17 = 0xFFFFF780000002C4uLL;
      v20 = &v0;
      v6 = 4;
      v9 = 4;
      v12 = 4;
      v18 = 4;
      UserData.Size = 16;
      v3 = 1;
      v15 = 8;
      v21 = 8;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_START, &PopDiagActivityId, 8u, &UserData);
    }
  }
}
