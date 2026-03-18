/*
 * XREFs of PnpTraceInterruptConnection @ 0x1407438B0
 * Callers:
 *     IoDisconnectInterrupt @ 0x140742F80 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074338C (IopConnectInterrupt.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x14008BAEC (_TlgWriteAgg.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void PnpTraceInterruptConnection()
{
  __int64 v0; // r9
  char v1; // [rsp+30h] [rbp-29h] BYREF
  __int64 v2; // [rsp+38h] [rbp-21h] BYREF
  __int64 v3; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v5; // [rsp+70h] [rbp+17h]
  __int64 v6; // [rsp+78h] [rbp+1Fh]
  char *v7; // [rsp+80h] [rbp+27h]
  __int64 v8; // [rsp+88h] [rbp+2Fh]
  __int64 *v9; // [rsp+90h] [rbp+37h]
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  if ( stru_140425D20.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425D20, 0x400000000000uLL) )
    {
      v1 = v0;
      v5 = &v2;
      v2 = 1LL;
      v7 = &v1;
      v9 = &v3;
      v3 = 0x1000000LL;
      v6 = 8LL;
      v8 = 1LL;
      v10 = 8LL;
      TlgWriteAgg((__int64)&stru_140425D20, (unsigned __int8 *)dword_14038D0A1, 1LL, v0, 5u, &v4);
    }
  }
}
