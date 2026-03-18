/*
 * XREFs of WheaTelemetryLogPFAPolicy @ 0x140342584
 * Callers:
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void WheaTelemetryLogPFAPolicy()
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v11; // [rsp+90h] [rbp-70h]
  __int64 v12; // [rsp+98h] [rbp-68h]
  __int64 *v13; // [rsp+A0h] [rbp-60h]
  __int64 v14; // [rsp+A8h] [rbp-58h]
  int *v15; // [rsp+B0h] [rbp-50h]
  __int64 v16; // [rsp+B8h] [rbp-48h]
  int *v17; // [rsp+C0h] [rbp-40h]
  __int64 v18; // [rsp+C8h] [rbp-38h]
  int *v19; // [rsp+D0h] [rbp-30h]
  __int64 v20; // [rsp+D8h] [rbp-28h]
  __int64 *v21; // [rsp+E0h] [rbp-20h]
  __int64 v22; // [rsp+E8h] [rbp-18h]
  __int64 *v23; // [rsp+F0h] [rbp-10h]
  __int64 v24; // [rsp+F8h] [rbp-8h]
  __int64 *v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h]

  if ( stru_140426FC8.LevelPlus1 > 4 )
  {
    if ( TlgKeywordOn(&stru_140426FC8, 0x200000000000uLL) )
    {
      v6 = *(unsigned int *)(v0 + 32);
      v2 = *(unsigned __int8 *)(v0 + 36);
      v3 = *(unsigned __int8 *)(v0 + 37);
      v4 = *(unsigned __int8 *)(v0 + 38);
      v7 = *(unsigned int *)(v0 + 39);
      v8 = *(unsigned int *)(v0 + 43);
      v9 = *(unsigned int *)(v0 + 47);
      v11 = &v5;
      v13 = &v6;
      v15 = &v2;
      v17 = &v3;
      v19 = &v4;
      v21 = &v7;
      v23 = &v8;
      v25 = &v9;
      v5 = 0x1000000LL;
      v12 = 8LL;
      v14 = 8LL;
      v16 = v1;
      v18 = v1;
      v20 = v1;
      v22 = 8LL;
      v24 = 8LL;
      v26 = 8LL;
      TlgWrite(&stru_140426FC8, &unk_140394618, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
