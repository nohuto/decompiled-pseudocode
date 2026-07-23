/*
 * XREFs of TtmiLogSessionWorkerStop @ 0x140886A80
 * Callers:
 *     TtmpSessionWorker @ 0x140882320 (TtmpSessionWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void TtmiLogSessionWorkerStop()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-68h] BYREF
  int v3; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096E820, 1uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v8 = &v3;
      v2 = v1;
      v3 = v0;
      v6 = 4;
      v9 = 4;
      TlgWrite(&stru_14096E820, &unk_1403725F0, 0LL, 0LL, 4u, &pData);
    }
  }
}
