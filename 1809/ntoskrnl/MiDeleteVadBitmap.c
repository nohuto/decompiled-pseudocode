/*
 * XREFs of MiDeleteVadBitmap @ 0x140609CFC
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400917F8 (MiDeleteFinalPageTables.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     MiReturnFullProcessCharges @ 0x14007FF00 (MiReturnFullProcessCharges.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiUpdateChargedWsles @ 0x1402CB87C (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiDeleteVadBitmap(_QWORD *BugCheckParameter2)
{
  __int64 result; // rax
  ULONG_PTR v3; // r9
  unsigned int *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 ProcessPartition; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r15
  unsigned int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r8
  _QWORD v17[6]; // [rsp+40h] [rbp-48h] BYREF

  result = (__int64)memset(v17, 0, 0x28uLL);
  v3 = BugCheckParameter2[114];
  if ( v3 )
    KeBugCheckEx(0x1Au, 0x3455uLL, (ULONG_PTR)BugCheckParameter2, v3, 0LL);
  v4 = (unsigned int *)BugCheckParameter2[162];
  if ( v4 )
  {
    v5 = v4[55];
    MiDeletePagablePteRange(
      (__int64)(BugCheckParameter2 + 160),
      0x11u,
      qword_14043B5E8,
      qword_14043B5E8 + 276840447,
      0,
      0,
      (__int64)v17);
    v6 = v17[1];
    ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter2);
    v8 = 0LL;
    v9 = v4[57] + v5;
    v10 = ProcessPartition;
    v11 = v4 + 135;
    v12 = 2LL;
    do
    {
      v13 = *v11++;
      v8 += v13;
      --v12;
    }
    while ( v12 );
    v14 = v8 + v9;
    if ( v14 )
      MiReturnFullProcessCharges((__int64)BugCheckParameter2, v14);
    v15 = v14 - v6;
    if ( v15 )
      MiReturnCommit(v10, v15);
    result = PsGetHostSilo();
    if ( BugCheckParameter2[191] )
    {
      MiUpdateChargedWsles((__int64)(BugCheckParameter2 + 160));
      return MiReturnFullProcessCommitment((__int64)BugCheckParameter2, v16);
    }
  }
  return result;
}
