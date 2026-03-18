/*
 * XREFs of MmManagePartitionInitialAddMemory @ 0x14089CEB0
 * Callers:
 *     NtManagePartition @ 0x14066CA40 (NtManagePartition.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiHotAddPartitionMemory @ 0x14089C880 (MiHotAddPartitionMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmManagePartitionInitialAddMemory(__int64 *a1, int *a2, __int64 a3, char a4)
{
  char *v5; // rsi
  char *PoolWithTag; // rdi
  __int64 v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // eax
  SIZE_T v12; // rbx

  v5 = 0LL;
  PoolWithTag = 0LL;
  v7 = *a1;
  v8 = *a2;
  if ( (*a2 & 0xFFFFFFF8) == 0 )
  {
    if ( (v8 & 4) != 0 )
      return 3221225659LL;
    if ( (v8 & 7) != 0 )
    {
      v11 = a2[1];
      if ( v11 )
      {
        v5 = (char *)(a3 + 16);
        if ( a4 )
        {
          v12 = 16LL * v11;
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x6148694Du);
          if ( !PoolWithTag )
          {
            v9 = -1073741670;
            goto LABEL_19;
          }
          if ( v12 )
          {
            if ( ((unsigned __int8)v5 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v5[v12] > 0x7FFFFFFF0000LL || &v5[v12] < v5 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove(PoolWithTag, v5, v12);
        }
        else
        {
          PoolWithTag = (char *)(a3 + 16);
        }
        v9 = MiHotAddPartitionMemory(v7, (unsigned __int64 *)PoolWithTag, a2);
        goto LABEL_19;
      }
    }
  }
  v9 = -1073741811;
LABEL_19:
  if ( PoolWithTag )
  {
    if ( PoolWithTag != v5 )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v9;
}
