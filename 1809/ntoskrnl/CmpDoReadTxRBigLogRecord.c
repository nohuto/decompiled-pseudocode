/*
 * XREFs of CmpDoReadTxRBigLogRecord @ 0x1407F9F54
 * Callers:
 *     CmpRmReDoPhase @ 0x1407FA3E4 (CmpRmReDoPhase.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpVerifyBigLogRecordChunk @ 0x140581D88 (CmpVerifyBigLogRecordChunk.c)
 */

__int64 __fastcall CmpDoReadTxRBigLogRecord(
        void *a1,
        unsigned int *a2,
        ULONG a3,
        struct _PRIVILEGE_SET **a4,
        _DWORD *a5)
{
  unsigned int *v5; // rdi
  int v6; // ebx
  SIZE_T v7; // r12
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v9; // rsi
  int v10; // r15d
  struct _PRIVILEGE_SET *v11; // r13
  unsigned int v12; // ebp
  __int64 v13; // r14
  unsigned int v15; // [rsp+40h] [rbp-78h]
  PVOID ppvBuffer; // [rsp+48h] [rbp-70h] BYREF
  CLFS_LSN plsnRecord; // [rsp+50h] [rbp-68h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+58h] [rbp-60h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+60h] [rbp-58h] BYREF
  ULONG pcbBuffer; // [rsp+C8h] [rbp+10h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+D0h] [rbp+18h] BYREF
  struct _PRIVILEGE_SET **v23; // [rsp+D8h] [rbp+20h]

  v23 = a4;
  v5 = a2;
  ppvBuffer = a2;
  pcbBuffer = a3;
  v6 = CmpVerifyBigLogRecordChunk((int *)a2, a3);
  if ( v6 >= 0 )
  {
    v7 = v5[1];
    v15 = v5[12];
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v7, 0x20204D43u);
    v9 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v7);
      v10 = 0;
      v11 = v9;
      v12 = v7;
      while ( 1 )
      {
        if ( v5[13] != v10 )
          goto LABEL_10;
        v13 = v5[14];
        if ( (unsigned int)v13 > v12 )
          goto LABEL_10;
        memmove(v11, v5 + 16, (unsigned int)v13);
        v11 = (struct _PRIVILEGE_SET *)((char *)v11 + v13);
        v12 -= v13;
        if ( ++v10 >= v15 )
          break;
        peRecordType = 1;
        v6 = ClfsReadNextLogRecord(
               a1,
               &ppvBuffer,
               &pcbBuffer,
               &peRecordType,
               0LL,
               &plsnUndoNext,
               &plsnPrevious,
               &plsnRecord);
        if ( v6 >= 0 )
        {
          v5 = (unsigned int *)ppvBuffer;
          v6 = CmpVerifyBigLogRecordChunk((int *)ppvBuffer, pcbBuffer);
          if ( v6 >= 0 )
            continue;
        }
        goto LABEL_11;
      }
      if ( v12 )
      {
LABEL_10:
        v6 = -1073741762;
        goto LABEL_11;
      }
      *v23 = v9;
      v9 = 0LL;
      v6 = 0;
      *a5 = v7;
LABEL_11:
      if ( v9 )
        CmSiFreeMemory(v9);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
