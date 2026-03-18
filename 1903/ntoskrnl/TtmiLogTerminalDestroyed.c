/*
 * XREFs of TtmiLogTerminalDestroyed @ 0x1408C3994
 * Callers:
 *     TtmpDeleteTerminal @ 0x1408BCC80 (TtmpDeleteTerminal.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void TtmiLogTerminalDestroyed()
{
  __int64 v0; // r9
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_1409AD8E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1409AD8E0, 1uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      TlgWrite(&stru_1409AD8E0, &unk_140391CBB, 0LL, 0LL, 3u, &pData);
    }
  }
}
