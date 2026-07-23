/*
 * XREFs of TtmiLogSessionPowerRequestDeleted @ 0x140886610
 * Callers:
 *     TtmNotifySessionPowerRequestDeleted @ 0x140881028 (TtmNotifySessionPowerRequestDeleted.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void TtmiLogSessionPowerRequestDeleted()
{
  __int64 v0; // rdx
  char v1; // r9
  int v2; // r10d
  int v3; // r11d
  char v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  char *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096E820, 1uLL) )
    {
      v5 = v3;
      v8 = &v5;
      v10 = &v6;
      v12 = &v4;
      v6 = v2;
      v4 = v1;
      v9 = 4LL;
      v11 = 4LL;
      v13 = v0;
      TlgWrite(&stru_14096E820, &unk_140373016, 0LL, 0LL, 5u, &pData);
    }
  }
}
