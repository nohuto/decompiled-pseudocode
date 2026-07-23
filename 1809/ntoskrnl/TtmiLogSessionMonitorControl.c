/*
 * XREFs of TtmiLogSessionMonitorControl @ 0x140886180
 * Callers:
 *     TtmSessionMonitorControl @ 0x140881374 (TtmSessionMonitorControl.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall TtmiLogSessionMonitorControl(int a1)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // r11d
  int v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  int v7; // [rsp+38h] [rbp-21h] BYREF
  int v8; // [rsp+3Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  int *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  int *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  int *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096E820, 1uLL) )
    {
      v5 = a1;
      v10 = &v5;
      v12 = &v6;
      v14 = &v7;
      v16 = &v8;
      v6 = v4;
      v7 = v3;
      v8 = v2;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      TlgWrite(&stru_14096E820, &unk_140373B40, 0LL, 0LL, 6u, &pData);
    }
  }
}
