/*
 * XREFs of TtmiLogTerminalDisplayTimeouts @ 0x140886E94
 * Callers:
 *     TtmiTerminalSetDisplayTimeouts @ 0x140880128 (TtmiTerminalSetDisplayTimeouts.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall TtmiLogTerminalDisplayTimeouts(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // [rsp+30h] [rbp-69h] BYREF
  int v11; // [rsp+34h] [rbp-65h] BYREF
  int v12; // [rsp+38h] [rbp-61h] BYREF
  int v13; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  __int64 v15; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  int *v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  int *v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  int *v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]
  __int64 *v25; // [rsp+B0h] [rbp+17h]
  __int64 v26; // [rsp+B8h] [rbp+1Fh]
  __int64 *v27; // [rsp+C0h] [rbp+27h]
  __int64 v28; // [rsp+C8h] [rbp+2Fh]

  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096E820, 1uLL) )
    {
      v14 = a5;
      v15 = a6;
      v17 = &v10;
      v19 = &v11;
      v21 = &v12;
      v23 = &v13;
      v25 = &v14;
      v27 = &v15;
      v10 = a1;
      v11 = v9;
      v12 = v8;
      v13 = v7;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 8LL;
      v28 = 8LL;
      TlgWrite(&stru_14096E820, &unk_1403739AA, 0LL, 0LL, 8u, &pData);
    }
  }
}
