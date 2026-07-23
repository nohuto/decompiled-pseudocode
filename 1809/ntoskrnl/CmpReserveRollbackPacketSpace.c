/*
 * XREFs of CmpReserveRollbackPacketSpace @ 0x1407F9BF0
 * Callers:
 *     CmSnapshotRMTxArray @ 0x140695928 (CmSnapshotRMTxArray.c)
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x1407F9DB0 (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall CmpReserveRollbackPacketSpace(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // rbp
  int v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  char *TransientPoolWithTag; // rax
  char *v8; // rsi
  struct _PRIVILEGE_SET *v9; // rcx

  v3 = a2;
  v4 = *a1;
  v5 = 0;
  if ( a1[1] - v4 < a2 )
  {
    v6 = v4 + a2;
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, 8LL * (v4 + a2), 0x36344D43u);
    v8 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memmove(TransientPoolWithTag, *((const void **)a1 + 1), 8LL * *a1);
      memset(&v8[8 * *a1], 0, 8 * v3);
      v9 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      if ( v9 )
        CmSiFreeMemory(v9);
      *((_QWORD *)a1 + 1) = v8;
      a1[1] = v6;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
