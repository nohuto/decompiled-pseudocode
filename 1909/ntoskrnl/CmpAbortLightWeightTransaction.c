/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x1406E3518
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1406E33B4 (CmpCommitLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E34C0 (CmpRollbackLightWeightTransaction.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E35C4 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1406E36A0 (CmpTransMgrRollback.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-60h] BYREF
  int *v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+64h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-30h] BYREF

  v3 = 0;
  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 1uLL) )
    TlgWrite(&stru_140425BC0, &unk_14038BD2E, 0LL, 0LL, 2u, &pData);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2, 8LL);
  }
  if ( stru_140425BC0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425BC0, 1uLL) )
    {
      v8 = 0;
      v4 = v3;
      v6 = &v4;
      v7 = 4;
      TlgWrite(&stru_140425BC0, &unk_14038BCF8, 0LL, 0LL, 3u, &v5);
    }
  }
}
