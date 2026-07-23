/*
 * XREFs of HvpLogIneligibleLogHeader @ 0x1408080A0
 * Callers:
 *     HvAnalyzeLogFiles @ 0x1408072D4 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall HvpLogIneligibleLogHeader(char a1, int a2, int a3)
{
  TLG_STATUS result; // eax
  char v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    v4 = a1;
    v8 = &v4;
    v10 = &v5;
    v12 = &v6;
    v5 = a2;
    v6 = a3;
    v9 = 1LL;
    v11 = 4LL;
    v13 = 4LL;
    return TlgWrite(&stru_140400AA0, &unk_14036D781, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
