/*
 * XREFs of PopDiagTraceFxGlobalDeviceAccounting @ 0x1402E10F4
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1402D9F4C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxGlobalDeviceAccounting(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  char v5; // [rsp+30h] [rbp-49h] BYREF
  __int64 v6; // [rsp+38h] [rbp-41h] BYREF
  __int64 v7; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  char *v9; // [rsp+70h] [rbp-9h]
  __int64 v10; // [rsp+78h] [rbp-1h]
  __int64 *v11; // [rsp+80h] [rbp+7h]
  __int64 v12; // [rsp+88h] [rbp+Fh]
  __int64 v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  __int64 v15; // [rsp+A0h] [rbp+27h]
  __int64 v16; // [rsp+A8h] [rbp+2Fh]
  __int64 *v17; // [rsp+B0h] [rbp+37h]
  __int64 v18; // [rsp+B8h] [rbp+3Fh]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v5 = PopWnfCsEnterScenarioId;
      v9 = &v5;
      v11 = &v6;
      v17 = &v7;
      v6 = a1;
      v7 = v4;
      v10 = 1LL;
      v12 = 8LL;
      v13 = v3;
      v14 = 40LL;
      v15 = v2;
      v16 = 40LL;
      v18 = 8LL;
      TlgWrite(&pCallbackContext, &unk_140371993, 0LL, 0LL, 7u, &pData);
    }
  }
}
