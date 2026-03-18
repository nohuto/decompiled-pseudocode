/*
 * XREFs of EtwpWriteAppStateChange @ 0x1406E7654
 * Callers:
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1406838A0 (EtwTraceProcess.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( stru_140426618.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140426618, 0x200000000001uLL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      TlgWrite(&stru_140426618, &unk_1403942E5, 0LL, 0LL, 3u, &pData);
    }
  }
}
