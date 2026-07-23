/*
 * XREFs of PopTraceInputSuppressionActionUpdate @ 0x14087644C
 * Callers:
 *     PopEvaluateInputSuppressionAction @ 0x14086EF1C (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopTraceInputSuppressionActionUpdate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        int a7)
{
  char v7; // r9
  char v8; // r10
  char v9; // r11
  char v10; // [rsp+30h] [rbp-81h] BYREF
  char v11; // [rsp+31h] [rbp-80h] BYREF
  char v12; // [rsp+32h] [rbp-7Fh] BYREF
  char v13; // [rsp+33h] [rbp-7Eh] BYREF
  bool v14; // [rsp+34h] [rbp-7Dh] BYREF
  char v15; // [rsp+35h] [rbp-7Ch] BYREF
  char v16; // [rsp+36h] [rbp-7Bh] BYREF
  int v17; // [rsp+38h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-71h] BYREF
  char *v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  char *v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h]
  char *v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  char *v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  bool *v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  char *v29; // [rsp+B0h] [rbp-1h]
  __int64 v30; // [rsp+B8h] [rbp+7h]
  int *v31; // [rsp+C0h] [rbp+Fh]
  __int64 v32; // [rsp+C8h] [rbp+17h]
  char *v33; // [rsp+D0h] [rbp+1Fh]
  __int64 v34; // [rsp+D8h] [rbp+27h]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v10 = PopIgnoreLidStateForInputSuppression;
      v14 = v7 == 0;
      v13 = a5;
      v15 = PopEnableInputSuppression;
      v17 = a7;
      v16 = PopWnfCsEnterScenarioId;
      v19 = &v10;
      v21 = &v11;
      v23 = &v12;
      v25 = &v13;
      v27 = &v14;
      v29 = &v15;
      v31 = &v17;
      v33 = &v16;
      v11 = v9;
      v12 = v8;
      v20 = 1LL;
      v22 = 1LL;
      v24 = 1LL;
      v26 = 1LL;
      v28 = 1LL;
      v30 = 1LL;
      v32 = 4LL;
      v34 = 1LL;
      TlgWrite(&pCallbackContext, &unk_14037070A, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
