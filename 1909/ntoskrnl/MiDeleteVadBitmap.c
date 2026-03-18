/*
 * XREFs of MiDeleteVadBitmap @ 0x1406445A0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14008E9B4 (MiDeleteFinalPageTables.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     MiReturnFullProcessCharges @ 0x14001FD90 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiHyperSpaceSize @ 0x140075EC0 (MiHyperSpaceSize.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiUpdateChargedWsles @ 0x1402E5954 (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiDeleteVadBitmap(_QWORD *BugCheckParameter2)
{
  __int64 result; // rax
  ULONG_PTR v3; // r9
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rbp
  __int64 ProcessPartition; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r8
  _QWORD v18[6]; // [rsp+40h] [rbp-48h] BYREF

  result = (__int64)memset(v18, 0, sizeof(v18));
  v3 = BugCheckParameter2[115];
  if ( v3 )
    KeBugCheckEx(0x1Au, 0x3455uLL, (ULONG_PTR)BugCheckParameter2, v3, 0LL);
  v4 = (_QWORD *)BugCheckParameter2[162];
  if ( v4 )
  {
    v5 = v4[34];
    v6 = MiHyperSpaceSize();
    MiDeletePagablePteRange((__int64)(BugCheckParameter2 + 160), 0x11u, v7, v6 + v7 - 1, 0, 0, (__int64)v18);
    v8 = v18[1];
    ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter2);
    v10 = v4[36] + v5;
    v11 = v4 + 74;
    v12 = 0LL;
    v13 = ProcessPartition;
    v14 = 2LL;
    do
    {
      v12 += *v11++;
      --v14;
    }
    while ( v14 );
    v15 = v12 + v10;
    if ( v15 )
      MiReturnFullProcessCharges((__int64)BugCheckParameter2, v15);
    v16 = v15 - v8;
    if ( v16 )
      MiReturnCommit(v13, v16);
    result = PsGetHostSilo();
    if ( BugCheckParameter2[190] )
    {
      MiUpdateChargedWsles((__int64)(BugCheckParameter2 + 160));
      return MiReturnFullProcessCommitment((__int64)BugCheckParameter2, v17);
    }
  }
  return result;
}
