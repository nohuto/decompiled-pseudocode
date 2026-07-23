/*
 * XREFs of PoDiagTraceDirectedDripsCandidateDevice @ 0x140870C7C
 * Callers:
 *     IoDiagTraceDirectedDripsCandidateDevices @ 0x14083E050 (IoDiagTraceDirectedDripsCandidateDevices.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PoDiagTraceDirectedDripsCandidateDevice()
{
  __int64 v0; // r9
  int v1; // r10d
  char v2; // [rsp+30h] [rbp-39h] BYREF
  int v3; // [rsp+34h] [rbp-35h] BYREF
  __int64 v4; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  char *v6; // [rsp+60h] [rbp-9h]
  __int64 v7; // [rsp+68h] [rbp-1h]
  __int64 *v8; // [rsp+70h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+Fh]
  _DWORD *v10; // [rsp+80h] [rbp+17h]
  __int64 v11; // [rsp+88h] [rbp+1Fh]
  __int64 v12; // [rsp+90h] [rbp+27h]
  _DWORD v13[2]; // [rsp+98h] [rbp+2Fh] BYREF
  int *v14; // [rsp+A0h] [rbp+37h]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  if ( PopTriggerDiagHandleRegistered && pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v2 = PopWnfCsEnterScenarioId;
      v4 = *(_QWORD *)(v0 + 32);
      v3 = *(_DWORD *)(v0 + 140);
      v6 = &v2;
      v8 = &v4;
      v10 = v13;
      v12 = *(_QWORD *)(v0 + 48);
      v13[0] = *(unsigned __int16 *)(v0 + 40);
      v14 = &v3;
      v7 = 1LL;
      v9 = 8LL;
      v11 = 2LL;
      v13[1] = v1;
      v15 = 4LL;
      TlgWrite(&pCallbackContext, &unk_1403706A0, 0LL, 0LL, 7u, &pData);
    }
  }
}
