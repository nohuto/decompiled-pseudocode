/*
 * XREFs of TtmiLogTerminalDestroyed @ 0x140885A90
 * Callers:
 *     TtmpDeleteTerminal @ 0x14087F110 (TtmpDeleteTerminal.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

void TtmiLogTerminalDestroyed()
{
  __int64 v0; // r9
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_14096D820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096D820, 1uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      TlgWrite(&stru_14096D820, &unk_1403716AB, 0LL, 0LL, 3u, &pData);
    }
  }
}
