/*
 * XREFs of PopTraceEsState @ 0x140169408
 * Callers:
 *     PopEsSnapTelemetry @ 0x140728E40 (PopEsSnapTelemetry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void PopTraceEsState()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  int v5; // [rsp+3Ch] [rbp-C4h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v11; // [rsp+80h] [rbp-80h]
  __int64 v12; // [rsp+88h] [rbp-78h]
  __int64 *v13; // [rsp+90h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-68h]
  int *v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  int *v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+B8h] [rbp-48h]
  int *v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]
  int *v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  int *v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  __int64 *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v2 = PopEsReason;
      v4 = (unsigned __int8)PopEsAcOnline;
      v5 = PopEsMode;
      v6 = PopEsLastBatteryThreshold;
      v7 = (unsigned __int8)PopEsLastUserAwaySetting;
      v11 = &v2;
      v13 = &v8;
      v15 = &v3;
      v17 = &v4;
      v19 = &v5;
      v21 = &v6;
      v23 = &v7;
      v25 = &v9;
      v8 = v1;
      v3 = v0;
      v9 = 0x1000000LL;
      v12 = 4LL;
      v14 = 8LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 8LL;
      TlgWrite(&pCallbackContext, &unk_140390850, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
