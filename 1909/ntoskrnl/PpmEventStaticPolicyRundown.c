/*
 * XREFs of PpmEventStaticPolicyRundown @ 0x1408B4740
 * Callers:
 *     PpmEventTraceControlCallback @ 0x14078CE60 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void PpmEventStaticPolicyRundown()
{
  REGHANDLE v0; // rbx
  int v1; // ecx
  int v2; // [rsp+30h] [rbp-69h] BYREF
  int v3; // [rsp+34h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  char *v5; // [rsp+50h] [rbp-49h]
  __int64 v6; // [rsp+58h] [rbp-41h]
  int *v7; // [rsp+60h] [rbp-39h]
  __int64 v8; // [rsp+68h] [rbp-31h]
  int *v9; // [rsp+70h] [rbp-29h]
  __int64 v10; // [rsp+78h] [rbp-21h]
  int *v11; // [rsp+80h] [rbp-19h]
  __int64 v12; // [rsp+88h] [rbp-11h]
  int *v13; // [rsp+90h] [rbp-9h]
  __int64 v14; // [rsp+98h] [rbp-1h]
  int *v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  int *v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  int *v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]
  int *v21; // [rsp+D0h] [rbp+37h]
  __int64 v22; // [rsp+D8h] [rbp+3Fh]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_STATIC_POLICY_RUNDOWN) )
    {
      v3 = 0;
      UserData.Ptr = (ULONGLONG)&PpmPerfBoostAtGuaranteed;
      v5 = &PpmPerfIdealAggressiveIncreaseThreshold;
      v7 = &PpmPerfSingleStepSize;
      v9 = &PpmPerfCalculateActualUtilization;
      v11 = &PpmPerfArtificialDomainEnabled;
      v13 = &v3;
      v15 = &PpmParkUseCoreGranularity;
      v17 = &PpmParkMultiparkGranularity;
      v19 = &PpmPerfQosManageIdleProcessors;
      *(_QWORD *)&UserData.Size = 4LL;
      v6 = 4LL;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      {
        v1 = PpmPerfQosTransitionHysteresis19h2;
        if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
          v1 = PpmPerfQosTransitionHysteresis;
        v2 = v1;
      }
      else
      {
        v2 = PpmPerfQosTransitionHysteresisOverride;
      }
      v22 = 4LL;
      v21 = &v2;
      EtwWrite(v0, &PPM_ETW_STATIC_POLICY_RUNDOWN, 0LL, 0xAu, &UserData);
    }
  }
}
