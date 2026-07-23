/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x140694B50
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140694704 (CmpCommitLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140694AB0 (CmpRollbackLightWeightTransaction.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x140694BFC (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1406953B4 (CmpTransMgrRollback.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-60h] BYREF
  int *v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+64h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-30h] BYREF

  v3 = 0;
  if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 1uLL) )
    TlgWrite(&stru_140400AA0, &unk_14036D007, 0LL, 0LL, 2u, &pData);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2);
  }
  if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140400AA0, 1uLL) )
    {
      v8 = 0;
      v4 = v3;
      v6 = &v4;
      v7 = 4;
      TlgWrite(&stru_140400AA0, &unk_14036CFD1, 0LL, 0LL, 3u, &v5);
    }
  }
}
