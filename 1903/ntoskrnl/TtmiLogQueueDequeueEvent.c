/*
 * XREFs of TtmiLogQueueDequeueEvent @ 0x1408C2588
 * Callers:
 *     TtmiRetrieveEventFromQueue @ 0x1408C01D4 (TtmiRetrieveEventFromQueue.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void TtmiLogQueueDequeueEvent()
{
  _DWORD *v0; // r9
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  _QWORD *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  int *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( stru_1409AD8E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1409AD8E0, 1uLL) )
    {
      v2 = *v0;
      v6 = &v3;
      v8 = &v4;
      v10 = &v2;
      v3 = v1;
      v4 = v0;
      v7 = 8LL;
      v9 = 8LL;
      v11 = 4LL;
      TlgWrite(&stru_1409AD8E0, &unk_140392BFB, 0LL, 0LL, 5u, &pData);
    }
  }
}
