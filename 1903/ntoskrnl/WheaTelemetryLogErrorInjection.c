/*
 * XREFs of WheaTelemetryLogErrorInjection @ 0x140341BA8
 * Callers:
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void WheaTelemetryLogErrorInjection()
{
  __int64 v0; // r9
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v12; // [rsp+90h] [rbp-70h]
  __int64 v13; // [rsp+98h] [rbp-68h]
  __int64 *v14; // [rsp+A0h] [rbp-60h]
  __int64 v15; // [rsp+A8h] [rbp-58h]
  __int64 *v16; // [rsp+B0h] [rbp-50h]
  __int64 v17; // [rsp+B8h] [rbp-48h]
  __int64 *v18; // [rsp+C0h] [rbp-40h]
  __int64 v19; // [rsp+C8h] [rbp-38h]
  __int64 *v20; // [rsp+D0h] [rbp-30h]
  __int64 v21; // [rsp+D8h] [rbp-28h]
  __int64 *v22; // [rsp+E0h] [rbp-20h]
  __int64 v23; // [rsp+E8h] [rbp-18h]
  int *v24; // [rsp+F0h] [rbp-10h]
  __int64 v25; // [rsp+F8h] [rbp-8h]
  int *v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  int *v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]

  if ( stru_140426FC8.LevelPlus1 > 4 )
  {
    if ( TlgKeywordOn(&stru_140426FC8, 0x200000000000uLL) )
    {
      v6 = *(unsigned int *)(v0 + 32);
      v7 = *(_QWORD *)(v0 + 36);
      v8 = *(_QWORD *)(v0 + 44);
      v9 = *(_QWORD *)(v0 + 52);
      v10 = *(_QWORD *)(v0 + 60);
      v2 = *(_DWORD *)(v0 + 68);
      v3 = *(unsigned __int8 *)(v0 + 72);
      v4 = *(unsigned __int8 *)(v0 + 73);
      v12 = &v5;
      v14 = &v6;
      v16 = &v7;
      v18 = &v8;
      v20 = &v9;
      v22 = &v10;
      v24 = &v2;
      v26 = &v3;
      v28 = &v4;
      v5 = 0x1000000LL;
      v13 = 8LL;
      v15 = 8LL;
      v17 = 8LL;
      v19 = 8LL;
      v21 = 8LL;
      v23 = 8LL;
      v25 = v1;
      v27 = v1;
      v29 = v1;
      TlgWrite(&stru_140426FC8, &unk_1403948B6, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
