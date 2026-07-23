/*
 * XREFs of PopDiagTraceCsEnterReason @ 0x1408723B4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char PopDiagTraceCsEnterReason()
{
  char result; // al
  int v1; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // r14d
  int v5; // r15d
  REGHANDLE v6; // r12
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+64h] [rbp-9Ch] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  int *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  int *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  char *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  int *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  __int64 *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  int *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  int *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  int *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  int *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  int *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]

  result = PopWnfCsEnterScenarioId;
  v1 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v2 = (unsigned __int8)PopLidOpened;
  v3 = PopPdcLastCsEnterReason;
  v4 = PopCsConsumption;
  v5 = dword_14043D520;
  v7 = PopWnfCsEnterScenarioId;
  v9 = PopPdcLastCsEnterReason;
  v10 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v11 = (unsigned __int8)PopLidOpened;
  v12 = PopCsConsumption;
  v13 = dword_14043D520;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_ENTER_REASON);
    if ( result )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v9;
      v21 = 4LL;
      v20 = &v11;
      v23 = 4LL;
      v22 = &v10;
      v25 = 1LL;
      v24 = &v7;
      v27 = 4LL;
      v26 = &v12;
      v28 = &v13;
      v30 = &PopWdiCurrentScenarioInstanceIdV2;
      v32 = 0xFFFFF780000002C4uLL;
      v29 = 4LL;
      v31 = 8LL;
      v33 = 4LL;
      result = EtwWrite(v6, &POP_ETW_EVENT_CS_ENTER_REASON, 0LL, 8u, &UserData);
      v3 = v9;
      v1 = v10;
      v2 = v11;
      v4 = v12;
      v5 = v13;
    }
  }
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( result )
    {
      v8 = PopWnfCsEnterScenarioId;
      v35 = &v8;
      v37 = &v14;
      v39 = &v15;
      v41 = &v16;
      v43 = &v17;
      v45 = &v18;
      v14 = v3;
      v15 = v2;
      v16 = v1;
      v17 = v4;
      v18 = v5;
      v36 = 1LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      return TlgWrite(&pCallbackContext, &unk_140371A21, 0LL, 0LL, 8u, &pData);
    }
  }
  return result;
}
