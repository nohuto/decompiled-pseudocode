/*
 * XREFs of TtmiLogQueueHandleClosed @ 0x1408C2074
 * Callers:
 *     TtmpCloseQueueHandle @ 0x1408BFDA0 (TtmpCloseQueueHandle.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void TtmiLogQueueHandleClosed()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // [rsp+30h] [rbp-29h] BYREF
  __int64 v4; // [rsp+38h] [rbp-21h] BYREF
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  __int64 *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  __int64 *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( stru_1409AD8E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1409AD8E0, 1uLL) )
    {
      v3 = v2;
      v7 = &v3;
      v9 = &v4;
      v11 = &v5;
      v4 = v1;
      v5 = v0;
      v8 = 8LL;
      v10 = 8LL;
      v12 = 8LL;
      TlgWrite(&stru_1409AD8E0, &unk_140391FEA, 0LL, 0LL, 5u, &pData);
    }
  }
}
